// Copyright Epic Games, Inc. All Rights Reserved.

#include "ReplicationSampleGameMode.h"

#include "GameFramework/Character.h"
#include "GameFramework/PlayerStart.h"
#include "Kismet/GameplayStatics.h"
#include "ReplicationSample/InteractionPlayerController.h"
#include "ReplicationSample/UI/BaseSampleHUD.h"
#include "UObject/ConstructorHelpers.h"

AReplicationSampleGameMode::AReplicationSampleGameMode() : UntakenTag{"Untaken"}
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	static ConstructorHelpers::FClassFinder<AInteractionPlayerController> PlayerControllerBP(TEXT("/Game/ThirdPerson/Blueprints/BP_InteractionPlayerController"));
	PlayerControllerClass = PlayerControllerBP.Class;

	static ConstructorHelpers::FClassFinder<ABaseSampleHUD> HUD_BP(TEXT("/Game/ThirdPerson/Blueprints/UI/BP_ReplicationSampleHUD"));
	HUDClass = HUD_BP.Class;
}

void AReplicationSampleGameMode::BeginPlay()
{
	Super::BeginPlay();

	TArray<AActor*> PlayerStartActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APlayerStart::StaticClass(), PlayerStartActors);
	for(auto actor : PlayerStartActors)
	{
		auto PS = Cast<APlayerStart>(actor);
		if(PS->PlayerStartTag == UntakenTag)
		{
			UntakenPlayerStarts.Add(PS);
		}
		else PlayerStartActors.Remove(actor);
	}
}

AActor* AReplicationSampleGameMode::ChoosePlayerStart_Implementation(AController* Player)
{
	if(UntakenPlayerStarts.Num() > 0)
	{
		const auto SelectedPS = UntakenPlayerStarts[0];
		SelectedPS->PlayerStartTag = "Taken";

		{
			AInteractionPlayerController* NewPlayer = Cast<AInteractionPlayerController>(Player);
			NewPlayer->SetInitialSpawnPoint(SelectedPS);
			NewPlayer->GetCharacter()->SetActorLocation(SelectedPS->GetActorLocation());
			NewPlayer->GetCharacter()->SetActorRotation(SelectedPS->GetActorRotation());
		}
		
		
		UntakenPlayerStarts.RemoveAt(0);

		return SelectedPS;
	}
	return nullptr;
}
void AReplicationSampleGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	
}