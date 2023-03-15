// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UsableItemsContainer.generated.h"

enum class EInteractableItemType;
struct FInteractableItemEntity;

UCLASS()
class REPLICATIONSAMPLE_API UUsableItemsContainer final : public UObject
{
	GENERATED_BODY()
	
	TArray<FInteractableItemEntity> entitiesRepresentation;

public:

	UUsableItemsContainer();
	UUsableItemsContainer(const TArray<FInteractableItemEntity>& initialRepresentation);
};

enum class EInteractableItemType
{
	RedHuge,
	GreenMedium,
	BlueSmall
};

struct FInteractableItemEntity
{
	EInteractableItemType entityType;
	unsigned itemsAmount;

	FInteractableItemEntity(EInteractableItemType itemType, unsigned initialAmount) : entityType{itemType}, itemsAmount{initialAmount}
	{}
	FInteractableItemEntity(EInteractableItemType itemType) : FInteractableItemEntity(itemType, 0)
	{}
};
