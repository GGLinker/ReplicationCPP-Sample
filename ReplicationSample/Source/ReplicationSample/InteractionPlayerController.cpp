// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractionPlayerController.h"

AInteractionPlayerController::AInteractionPlayerController()
{
	ItemsContainer = NewObject<UsableItemsContainer>();        
	ItemsContainer->SetParams({
		BlueSmall,
		GreenMedium,
		RedHuge
	});
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
	try
	{
		const auto NewAmount = ItemsContainer->OperateEntities(operateEntityType, accum);
		OnItemsContainerStateUpdate.Broadcast(operateEntityType, NewAmount);		
	}
	catch(...)
	{
		UE_LOG(LogTemp, Error, TEXT("%s"), typeid(std::current_exception()).name());
		throw;
	}
}
bool AInteractionPlayerController::Shoot() const
{
	const auto ShootingItem = GetSelected();
	try
	{
		OperateItemsContainer(ShootingItem, -1);
	}
	catch(...)
	{
		return false;
	}
	OnItemsContainerStateUpdate.Broadcast(ShootingItem, -1);
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
