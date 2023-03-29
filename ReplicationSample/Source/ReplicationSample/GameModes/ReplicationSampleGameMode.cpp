// Copyright Epic Games, Inc. All Rights Reserved.

#include "ReplicationSampleGameMode.h"

#include "ReplicationSample/InteractionPlayerController.h"
#include "ReplicationSample/UI/BaseSampleHUD.h"
#include "UObject/ConstructorHelpers.h"

AReplicationSampleGameMode::AReplicationSampleGameMode()
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
