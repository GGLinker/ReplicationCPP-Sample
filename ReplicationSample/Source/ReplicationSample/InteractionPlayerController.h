// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "UsableItems/UsableItemsContainer.h"
#include "InteractionPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class REPLICATIONSAMPLE_API AInteractionPlayerController : public APlayerController
{
	GENERATED_BODY()

	UUsableItemsContainer itemsContainer;
	
	AInteractionPlayerController();
};
