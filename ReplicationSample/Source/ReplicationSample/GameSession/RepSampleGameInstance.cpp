#include "RepSampleGameInstance.h"

// Fill out your copyright notice in the Description page of Project Settings.

#include <excpt.h>

#include "OnlineSessionSettings.h"
#include "OnlineSubsystem.h"
#include "GameFramework/GameSession.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "Kismet/GameplayStatics.h"

URepSampleGameInstance::URepSampleGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{	
	OnCreateSessionCompleteDelegate = FOnCreateSessionCompleteDelegate::CreateUObject(this, &URepSampleGameInstance::OnCreateSessionComplete);
	OnStartSessionCompleteDelegate = FOnStartSessionCompleteDelegate::CreateUObject(this, &URepSampleGameInstance::OnStartOnlineGameComplete);
	OnFindSessionsCompleteDelegate = FOnFindSessionsCompleteDelegate::CreateUObject(this, &URepSampleGameInstance::OnFindSessionsComplete);
	OnJoinSessionCompleteDelegate = FOnJoinSessionCompleteDelegate::CreateUObject(this, &URepSampleGameInstance::OnJoinSessionComplete);
	OnDestroySessionCompleteDelegate = FOnDestroySessionCompleteDelegate::CreateUObject(this, &URepSampleGameInstance::OnDestroySessionComplete);
}



/***Blueprintable***/

void URepSampleGameInstance::StartOnlineGame()
{
	DestroySessionAndLeaveGame();
	const ULocalPlayer* const Player = GetFirstGamePlayer();
	HostSession(Player->GetPreferredUniqueNetId().GetUniqueNetId(), NAME_GameSession, true, true, 4);
}
void URepSampleGameInstance::FindOnlineGames()
{
	const ULocalPlayer* const Player = GetFirstGamePlayer();

	FindSessions(Player->GetPreferredUniqueNetId().GetUniqueNetId(), true, true);
}
void URepSampleGameInstance::JoinOnlineGame()
{
	const ULocalPlayer* const Player = GetFirstGamePlayer();
	FOnlineSessionSearchResult SearchResult;
	
	if (SessionSearch && SessionSearch->SearchResults.Num() > 0)
	{
		for (int32 i = 0; i < SessionSearch->SearchResults.Num(); i++)
		{
			GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Green, FString::Printf(TEXT("Session %d %hs current session"), i, (SessionSearch->SearchResults[i].Session.OwningUserId == Player->GetPreferredUniqueNetId()) ? "MATCHES" : "UNMATCHES"));
			if (SessionSearch->SearchResults[i].Session.OwningUserId != Player->GetPreferredUniqueNetId())
			{
				SearchResult = SessionSearch->SearchResults[i];
				JoinSession(Player->GetPreferredUniqueNetId().GetUniqueNetId(), NAME_GameSession, SearchResult);
				break;
			}
		}
	}	
}
void URepSampleGameInstance::DestroySessionAndLeaveGame()
{
	if (const IOnlineSubsystem* OnlineSub = IOnlineSubsystem::Get())
	{
		if (const IOnlineSessionPtr Sessions = OnlineSub->GetSessionInterface(); Sessions.IsValid())
		{
			Sessions->AddOnDestroySessionCompleteDelegate_Handle(OnDestroySessionCompleteDelegate);
			Sessions->DestroySession(NAME_GameSession);
		}
	}
}




bool URepSampleGameInstance::HostSession(TSharedPtr<const FUniqueNetId> UserId, FName SessionName, bool bIsLAN, bool bIsPresence, int32 MaxNumPlayers)
{
	if (const IOnlineSubsystem* const OnlineSub = IOnlineSubsystem::Get())
	{
		if (const IOnlineSessionPtr Sessions = OnlineSub->GetSessionInterface(); Sessions.IsValid() && UserId.IsValid())
		{
			SessionSettings = MakeShareable(new FOnlineSessionSettings());

			SessionSettings->bIsLANMatch = bIsLAN;
			SessionSettings->bUsesPresence = bIsPresence;
			SessionSettings->NumPublicConnections = MaxNumPlayers;
			SessionSettings->NumPrivateConnections = 0;
			SessionSettings->bAllowInvites = true;
			SessionSettings->bAllowJoinInProgress = true;
			SessionSettings->bShouldAdvertise = true;
			SessionSettings->bAllowJoinViaPresence = true;
			SessionSettings->bAllowJoinViaPresenceFriendsOnly = false;

			SessionSettings->Set(SETTING_MAPNAME, FString("ThirdPersonMap"), EOnlineDataAdvertisementType::ViaOnlineServiceAndPing);

			
			OnCreateSessionCompleteDelegateHandle = Sessions->AddOnCreateSessionCompleteDelegate_Handle(OnCreateSessionCompleteDelegate);
			return Sessions->CreateSession(*UserId, SessionName, *SessionSettings);
		}
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Red, TEXT("No OnlineSubsytem!"));
	}

	return false;
}
void URepSampleGameInstance::FindSessions(TSharedPtr<const FUniqueNetId> UserId, bool bIsLAN, bool bIsPresence)
{
	if (const IOnlineSubsystem* OnlineSub = IOnlineSubsystem::Get())
	{
		if (const IOnlineSessionPtr Sessions = OnlineSub->GetSessionInterface(); Sessions.IsValid() && UserId.IsValid())
		{
			SessionSearch = MakeShareable(new FOnlineSessionSearch());

			SessionSearch->bIsLanQuery = bIsLAN;
			SessionSearch->MaxSearchResults = 20;
			SessionSearch->PingBucketSize = 50;
			
			if (bIsPresence)
			{
				SessionSearch->QuerySettings.Set(SEARCH_PRESENCE, bIsPresence, EOnlineComparisonOp::Equals);
			}

			const TSharedRef<FOnlineSessionSearch> SearchSettingsRef = SessionSearch.ToSharedRef();
			
			OnFindSessionsCompleteDelegateHandle = Sessions->AddOnFindSessionsCompleteDelegate_Handle(OnFindSessionsCompleteDelegate);
			Sessions->FindSessions(*UserId, SearchSettingsRef);
		}
	}
	else
	{
		OnFindSessionsComplete(false);
	}
}
bool URepSampleGameInstance::JoinSession(TSharedPtr<const FUniqueNetId> UserId, FName SessionName, const FOnlineSessionSearchResult& SearchResult)
{
	bool bSuccessful = false;

	if (const IOnlineSubsystem* OnlineSub = IOnlineSubsystem::Get())
	{
		if (const IOnlineSessionPtr Sessions = OnlineSub->GetSessionInterface(); Sessions.IsValid() && UserId.IsValid())
		{
			OnJoinSessionCompleteDelegateHandle = Sessions->AddOnJoinSessionCompleteDelegate_Handle(OnJoinSessionCompleteDelegate);
			bSuccessful = Sessions->JoinSession(*UserId, SessionName, SearchResult);
		}
	}
	
	return bSuccessful;
}
void URepSampleGameInstance::DestroySession() const
{
	if (const IOnlineSubsystem* OnlineSub = IOnlineSubsystem::Get())
	{
		if (const IOnlineSessionPtr Sessions = OnlineSub->GetSessionInterface(); Sessions.IsValid())
		{
			Sessions->AddOnDestroySessionCompleteDelegate_Handle(OnDestroySessionCompleteDelegate);
			Sessions->DestroySession(NAME_GameSession);
		}
	}
}




void URepSampleGameInstance::OnCreateSessionComplete(FName SessionName, bool bWasSuccessful)
{
	GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Red, FString::Printf(TEXT("OnCreateSessionComplete %s, %d"), *SessionName.ToString(), bWasSuccessful));
	if (const IOnlineSubsystem* OnlineSub = IOnlineSubsystem::Get())
	{
		if (const IOnlineSessionPtr Sessions = OnlineSub->GetSessionInterface(); Sessions.IsValid())
		{
			Sessions->ClearOnCreateSessionCompleteDelegate_Handle(OnCreateSessionCompleteDelegateHandle);
			if (bWasSuccessful)
			{
				OnStartSessionCompleteDelegateHandle = Sessions->AddOnStartSessionCompleteDelegate_Handle(OnStartSessionCompleteDelegate);
				Sessions->StartSession(SessionName);
			}
		}
	}
}
void URepSampleGameInstance::OnStartOnlineGameComplete(FName SessionName, bool bWasSuccessful)
{
	GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Purple, FString::Printf(TEXT("OnStartSessionComplete %s, %d"), *SessionName.ToString(), bWasSuccessful));
	
	if (const IOnlineSubsystem* OnlineSub = IOnlineSubsystem::Get())
	{
		if (const IOnlineSessionPtr Sessions = OnlineSub->GetSessionInterface(); Sessions.IsValid())
		{
			Sessions->ClearOnStartSessionCompleteDelegate_Handle(OnStartSessionCompleteDelegateHandle);
		}
	}

	if (bWasSuccessful)
	{
		UGameplayStatics::OpenLevel(GetWorld(), "ThirdPersonMap", true, "listen");
	}
}
void URepSampleGameInstance::OnFindSessionsComplete(bool bWasSuccessful)
{
	GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Red, FString::Printf(TEXT("OnFindSessionsComplete bSuccess: %d"), bWasSuccessful));

	if (const IOnlineSubsystem* const OnlineSub = IOnlineSubsystem::Get())
	{
		if (const IOnlineSessionPtr Sessions = OnlineSub->GetSessionInterface(); Sessions.IsValid())
		{
			Sessions->ClearOnFindSessionsCompleteDelegate_Handle(OnFindSessionsCompleteDelegateHandle);
			GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Yellow, FString::Printf(TEXT("Num Search Results: %d"), SessionSearch->SearchResults.Num()));
		
			if (SessionSearch->SearchResults.Num() > 0)
			{
				for (int32 SearchIdx = SessionSearch->SearchResults.Num() - 1; SearchIdx >= 0; SearchIdx--)
				{
					GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("Session Number: %d | Sessionname: %s "), SearchIdx+1, *(SessionSearch->SearchResults[SearchIdx].Session.OwningUserName)));
				}
			}
		}
	}

	JoinOnlineGame();
}
void URepSampleGameInstance::OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result)
{
	FString ParsedResult;
	switch (static_cast<int32>(Result))
	{
	case 0: ParsedResult = "Success"; break;
	case 1: ParsedResult = "SessionIsFull"; break;
	case 2: ParsedResult = "SessionDoesNotExist"; break;
	case 3: ParsedResult = "CouldNotRetrieveAddress"; break;
	case 4: ParsedResult = "AlreadyInSession"; break;
	case 5: ParsedResult = "UnknownError"; break;
	}
	GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Red, FString::Printf(TEXT("OnJoinSessionComplete %s, %s"), *SessionName.ToString(), ToCStr(ParsedResult)));

	if (const IOnlineSubsystem* OnlineSub = IOnlineSubsystem::Get())
	{
		if (const IOnlineSessionPtr Sessions = OnlineSub->GetSessionInterface(); Sessions.IsValid())
		{
			Sessions->ClearOnJoinSessionCompleteDelegate_Handle(OnJoinSessionCompleteDelegateHandle);

			APlayerController* const PlayerController = GetFirstLocalPlayerController(); //GetPrimaryPlayerController();// GetPlayerControllerFromNetId(GetWorld(), 0);
			FString TravelURL;
			
			GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Red, FString::Printf(TEXT("PlayerController:  %s"), ToCStr(PlayerController->GetName())));
			
			if (PlayerController && Sessions->GetResolvedConnectString(SessionName, TravelURL))
			{
				GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Magenta, FString::Printf(TEXT("TRAVEL_ID:  %s"), ToCStr(TravelURL)));
				PlayerController->ClientTravel(TravelURL, TRAVEL_Absolute);
			}
		}
	}
}
void URepSampleGameInstance::OnDestroySessionComplete(FName SessionName, bool bWasSuccessful)
{
	GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Red, FString::Printf(TEXT("OnDestroySessionComplete %s, %d"), *SessionName.ToString(), bWasSuccessful));

	if (const IOnlineSubsystem* OnlineSub = IOnlineSubsystem::Get())
	{
		if (const IOnlineSessionPtr Sessions = OnlineSub->GetSessionInterface(); Sessions.IsValid())
		{
			Sessions->ClearOnDestroySessionCompleteDelegate_Handle(OnDestroySessionCompleteDelegateHandle);
			if (bWasSuccessful)
			{
				/***UGameplayStatics::OpenLevel(GetWorld(), "Lobby", true);***/
			}
		}
	}
}
