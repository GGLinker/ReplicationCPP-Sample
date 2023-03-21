// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UsableItemsContainer.generated.h"

UENUM(BlueprintType)
enum EInteractableItemType
{
	RedHuge,
	GreenMedium,
	BlueSmall
};

USTRUCT(BlueprintType)
struct FInteractableItemEntity
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	TEnumAsByte<EInteractableItemType> entityType;
	UPROPERTY(BlueprintReadWrite)
	UMaterialInstance* material;
	UPROPERTY()
	int itemsAmount;
	
	
	FInteractableItemEntity(EInteractableItemType itemType, int initialAmount, UMaterialInstance* materialInstance) : entityType{itemType}, material{materialInstance}, itemsAmount(initialAmount)
	{}
	FInteractableItemEntity(EInteractableItemType itemType) : FInteractableItemEntity(itemType, 0, nullptr)
	{}
	FInteractableItemEntity() : FInteractableItemEntity(GreenMedium)
	{}

	//copy
	FInteractableItemEntity(const FInteractableItemEntity& other) = default;
	FInteractableItemEntity& operator=(const FInteractableItemEntity& other) = default;

	
};

UCLASS(Blueprintable)
class REPLICATIONSAMPLE_API UsableItemsContainer final : public UObject
{
	GENERATED_BODY()
	using EntitySet = TArray<FInteractableItemEntity>;

	UPROPERTY(meta = (AllowPrivateAccess = true))
	TArray<FInteractableItemEntity> entitiesRepresentation;
	int selectedIndex;

public:

	UsableItemsContainer();

	//SETUP
	UFUNCTION()
	void SetParams(TArray<FInteractableItemEntity> representation)
	{
		entitiesRepresentation = representation;
	}
	UFUNCTION()
	TArray<FInteractableItemEntity> GetRepresentation() const;

	UFUNCTION()
	int OperateEntities(EInteractableItemType operateEntityType, int accum);
	UFUNCTION()
	int SwitchSelected(bool next);
	UFUNCTION()
	EInteractableItemType GetSelected() const;

	UFUNCTION()
	UMaterialInstance* GetSelectedMaterial() const;
};