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

TArray<FInteractableItemEntity> AInteractionPlayerController::GetItemsRepresentation() const
{
	return ItemsContainer->GetRepresentation();
}

void AInteractionPlayerController::OperateItemsContainer(EInteractableItemType operateEntityType, int accum) const
{
	try
	{
		ItemsContainer->OperateEntities(operateEntityType, accum);

		for(auto e : OnItemsContainerStateUpdate.GetAllObjects())
		{
			std::cerr << e << std::endl;
		}	
		OnItemsContainerStateUpdate.Broadcast(operateEntityType, accum);
	}
	catch(std::range_error e)
	{
		UE_LOG(LogTemp, Error, TEXT("There's no such overlapped elements in %s)"), operateEntityType);
		throw;
	}
	catch(std::string e)
	{
		UE_LOG(LogTemp, Warning, TEXT("There's no such Element type tack: %s"), operateEntityType);
		throw;
	}
	catch(...)
	{
		UE_LOG(LogTemp, Error, TEXT("%s"), typeid(std::current_exception()).name());
	}
}
bool AInteractionPlayerController::Shoot() const
{
	const auto shootingItem = GetSelected();
	try
	{
		OperateItemsContainer(shootingItem, -1);
	}
	catch(...)
	{
		return false;
	}
	OnItemsContainerStateUpdate.Broadcast(shootingItem, -1);
	return true;
}


void AInteractionPlayerController::SwitchSelected(bool next) const
{
	OnSelectedItemSwitch.Broadcast(ItemsContainer->SwitchSelected(next));
}

EInteractableItemType AInteractionPlayerController::GetSelected() const
{
	return ItemsContainer->GetSelected();
}

UMaterialInstance* AInteractionPlayerController::GetSelectedMaterialInstance() const
{
	return ItemsContainer->GetSelectedMaterial();
}
