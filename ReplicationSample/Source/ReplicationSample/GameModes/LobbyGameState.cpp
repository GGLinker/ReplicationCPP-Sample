// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyGameState.h"

#include "OnlineSessionSettings.h"
#include "OnlineSubsystem.h"
#include "GameFramework/GameSession.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "Kismet/GameplayStatics.h"
#include "ReplicationSample/UI/BaseSampleHUD.h"

ALobbyGameState::ALobbyGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

	OnCreateSessionCompleteDelegate = FOnCreateSessionCompleteDelegate::CreateUObject(this, &ALobbyGameState::OnCreateSessionComplete);
	OnStartSessionCompleteDelegate = FOnStartSessionCompleteDelegate::CreateUObject(this, &ALobbyGameState::OnStartOnlineGameComplete);
	OnFindSessionsCompleteDelegate = FOnFindSessionsCompleteDelegate::CreateUObject(this, &ALobbyGameState::OnFindSessionsComplete);
	OnJoinSessionCompleteDelegate = FOnJoinSessionCompleteDelegate::CreateUObject(this, &ALobbyGameState::OnJoinSessionComplete);
	OnDestroySessionCompleteDelegate = FOnDestroySessionCompleteDelegate::CreateUObject(this, &ALobbyGameState::OnDestroySessionComplete);
}



/***Blueprintable***/

void ALobbyGameState::StartOnlineGame()
{
	const auto Instance = GetGameInstance();
	const ULocalPlayer* const Player = Instance->GetFirstGamePlayer();
	HostSession(Player->GetPreferredUniqueNetId().GetUniqueNetId(), NAME_GameSession, true, true, 4);
}
void ALobbyGameState::FindOnlineGames()
{
	const auto Instance = GetGameInstance();
	const ULocalPlayer* const Player = Instance->GetFirstGamePlayer();

	FindSessions(Player->GetPreferredUniqueNetId().GetUniqueNetId(), true, true);
}
void ALobbyGameState::JoinOnlineGame()
{
	const auto Instance = GetGameInstance();
	const ULocalPlayer* const Player = Instance->GetFirstGamePlayer();
	FOnlineSessionSearchResult SearchResult;
	
	if (SessionSearch->SearchResults.Num() > 0)
	{
		for (int32 i = 0; i < SessionSearch->SearchResults.Num(); i++)
		{
			if (SessionSearch->SearchResults[i].Session.OwningUserId != Player->GetPreferredUniqueNetId())
			{
				SearchResult = SessionSearch->SearchResults[i];
				JoinSession(Player->GetPreferredUniqueNetId().GetUniqueNetId(), NAME_GameSession, SearchResult);
				break;
			}
		}
	}	
}
void ALobbyGameState::DestroySessionAndLeaveGame()
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




bool ALobbyGameState::HostSession(TSharedPtr<const FUniqueNetId> UserId, FName SessionName, bool bIsLAN, bool bIsPresence, int32 MaxNumPlayers)
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

			SessionSettings->Set(SETTING_MAPNAME, FString("ThirdPersonMap"), EOnlineDataAdvertisementType::ViaOnlineService);

			
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
void ALobbyGameState::FindSessions(TSharedPtr<const FUniqueNetId> UserId, bool bIsLAN, bool bIsPresence)
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
bool ALobbyGameState::JoinSession(TSharedPtr<const FUniqueNetId> UserId, FName SessionName, const FOnlineSessionSearchResult& SearchResult)
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
void ALobbyGameState::DestroySession() const
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




void ALobbyGameState::OnCreateSessionComplete(FName SessionName, bool bWasSuccessful)
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
void ALobbyGameState::OnStartOnlineGameComplete(FName SessionName, bool bWasSuccessful)
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
void ALobbyGameState::OnFindSessionsComplete(bool bWasSuccessful)
{
	GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Red, FString::Printf(TEXT("OFindSessionsComplete bSuccess: %d"), bWasSuccessful));

	if (const IOnlineSubsystem* const OnlineSub = IOnlineSubsystem::Get())
	{
		if (const IOnlineSessionPtr Sessions = OnlineSub->GetSessionInterface(); Sessions.IsValid())
		{
			Sessions->ClearOnFindSessionsCompleteDelegate_Handle(OnFindSessionsCompleteDelegateHandle);
			GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Yellow, FString::Printf(TEXT("Num Search Results: %d"), SessionSearch->SearchResults.Num()));
		
			if (SessionSearch->SearchResults.Num() > 0)
			{
				for (int32 SearchIdx = 0; SearchIdx < SessionSearch->SearchResults.Num(); SearchIdx++)
				{
					GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("Session Number: %d | Sessionname: %s "), SearchIdx+1, *(SessionSearch->SearchResults[SearchIdx].Session.OwningUserName)));
				}
			}
		}
	}
}
void ALobbyGameState::OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result)
{
	GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Red, FString::Printf(TEXT("OnJoinSessionComplete %s, %d"), *SessionName.ToString(), static_cast<int32>(Result)));

	if (const IOnlineSubsystem* OnlineSub = IOnlineSubsystem::Get())
	{
		if (const IOnlineSessionPtr Sessions = OnlineSub->GetSessionInterface(); Sessions.IsValid())
		{
			Sessions->ClearOnJoinSessionCompleteDelegate_Handle(OnJoinSessionCompleteDelegateHandle);

			APlayerController * const PlayerController = GetPlayerControllerFromNetId(GetWorld(), 0);
			FString TravelURL;

			if (PlayerController && Sessions->GetResolvedConnectString(SessionName, TravelURL))
			{
				PlayerController->ClientTravel(TravelURL, TRAVEL_Absolute);
			}
		}
	}
}
void ALobbyGameState::OnDestroySessionComplete(FName SessionName, bool bWasSuccessful)
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
