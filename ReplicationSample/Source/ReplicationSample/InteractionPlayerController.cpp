// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractionPlayerController.h"

#include <excpt.h>

AInteractionPlayerController::AInteractionPlayerController()
{
	ItemsContainer = NewObject<UsableItemsContainer>();        
}

void AInteractionPlayerController::SetupEntitiesRepresentation(TArray<FInteractableItemEntity> Data)
{
	ItemsContainer->SetParams(Data);
}
TArray<FInteractableItemEntity> AInteractionPlayerController::GetItemsRepresentation() const
{
	return ItemsContainer->GetRepresentation();
}

void AInteractionPlayerController::OperateItemsContainer(EInteractableItemType operateEntityType, int accum) const
{
	__try
	{
		const auto NewAmount = ItemsContainer->OperateEntities(operateEntityType, accum);
		OnItemsContainerStateUpdate.Broadcast(operateEntityType, NewAmount);
	}
	__except (EXCEPTION_EXECUTE_HANDLER) {
		UE_LOG(LogTemp, Error, TEXT("Operating items container: %s"), typeid(std::current_exception()).name());
		throw;
	}
}
bool AInteractionPlayerController::Shoot() const
{
	const auto ShootingItem = GetSelected();
	__try
	{
		OperateItemsContainer(ShootingItem, -1);
	}
	__except (EXCEPTION_EXECUTE_HANDLER)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Blue, "Shooting incomplete");
		return false;
	}
	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Blue, "Shooting complete");
	return true;
}


void AInteractionPlayerController::SwitchSelected(const bool bNext) const
{
	OnSelectedItemSwitch.Broadcast(ItemsContainer->SwitchSelected(bNext));
}

EInteractableItemType AInteractionPlayerController::GetSelected() const
{
	return ItemsContainer->GetSelected();
}

UMaterialInstance* AInteractionPlayerController::GetSelectedMaterialInstance() const
{
	return ItemsContainer->GetSelectedMaterial();
}
TSubclassOf<ASpawnableItemBase> AInteractionPlayerController::GetSelectedSpawnActor() const
{
	return ItemsContainer->GetSelectedSpawnActor();
}
EInteractableItemType AInteractionPlayerController::GetSelectedType() const
{
	return ItemsContainer->GetSelected();
}
