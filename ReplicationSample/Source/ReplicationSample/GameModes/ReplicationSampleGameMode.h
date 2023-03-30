// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameFramework/PlayerStart.h"
#include "ReplicationSampleGameMode.generated.h"

UCLASS(minimalapi)
class AReplicationSampleGameMode : public AGameModeBase
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere)
	FName UntakenTag;
	UPROPERTY(VisibleAnywhere, meta = (AllowPrivateAccess = true))
	TArray<APlayerStart*> UntakenPlayerStarts;

	virtual void BeginPlay() override;
	virtual void PostLogin(APlayerController* NewPlayer) override;
	
protected:
	virtual AActor* ChoosePlayerStart_Implementation(AController* Player) override;
	
public:
	AReplicationSampleGameMode();
};



