// Copyright Epic Games, Inc. All Rights Reserved.

#include "ReplicationSampleGameMode.h"
#include "ReplicationSampleCharacter.h"
#include "UObject/ConstructorHelpers.h"

AReplicationSampleGameMode::AReplicationSampleGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
