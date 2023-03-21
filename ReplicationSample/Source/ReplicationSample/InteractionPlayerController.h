// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "UsableItems/UsableItemsContainer.h"
#include "InteractionPlayerController.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FItemsContainerStateUpdate, EInteractableItemType, EntityType, int, UpdatedAmount);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemsContainerSelectionOperate, int, NewIndex);

UCLASS()
class REPLICATIONSAMPLE_API AInteractionPlayerController : public APlayerController
{
	GENERATED_BODY()

	UsableItemsContainer* ItemsContainer;

	//**UI update delegate**//
	//Update items consistency
	UPROPERTY(BlueprintAssignable)
	FItemsContainerStateUpdate OnItemsContainerStateUpdate;
	//Update selected item
	UPROPERTY(BlueprintAssignable)
	FItemsContainerSelectionOperate OnSelectedItemSwitch;

protected:
	UFUNCTION()
	EInteractableItemType GetSelected() const;
	
public:

	UFUNCTION(BlueprintCallable)
	TArray<FInteractableItemEntity> GetItemsRepresentation() const;
	
	UFUNCTION()
	void OperateItemsContainer(EInteractableItemType operateEntityType, int accum) const;
	UFUNCTION()
	void SwitchSelected(bool bNext) const;
	//Returns true if there's an item to shoot
	UFUNCTION()
	bool Shoot() const;
	UFUNCTION()
	UMaterialInstance* GetSelectedMaterialInstance() const;
	
	AInteractionPlayerController();
};
