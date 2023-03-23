// Fill out your copyright notice in the Description page of Project Settings.


#include "UsableItemsContainer.h"

UsableItemsContainer::UsableItemsContainer()
{}

UsableItemsContainer::EntitySet UsableItemsContainer::GetRepresentation() const
{ return EntitiesRepresentation; }

int UsableItemsContainer::OperateEntities(EInteractableItemType OperateEntityType, int Accum)
{
	for(int i = 0; i < EntitiesRepresentation.Num(); i++)
	{
		if(EntitiesRepresentation[i].entityType == OperateEntityType)
		{
			const int accumulated = EntitiesRepresentation[i].itemsAmount + Accum;
			if(accumulated < 0) throw std::range_error("Entities range error");
			
			return EntitiesRepresentation[i].itemsAmount = accumulated;
		}
	}

	throw "Entity not found";
}

int UsableItemsContainer::SwitchSelected(const bool bNext)
{
	const auto Res = SelectedIndex + (bNext ? 1 : -1);
	if(Res >= 0 && Res < EntitiesRepresentation.Num())
	{
		return SelectedIndex = Res;
	}

	if(Res < 0)
	{
		return SelectedIndex = EntitiesRepresentation.Num() - 1;
	}

	return SelectedIndex = 0;
}

EInteractableItemType UsableItemsContainer::GetSelected() const
{
	return EntitiesRepresentation[SelectedIndex].entityType;
}

UMaterialInstance* UsableItemsContainer::GetSelectedMaterial() const
{
	return EntitiesRepresentation[SelectedIndex].material;
}
TSubclassOf<ASpawnableItemBase> UsableItemsContainer::GetSelectedSpawnActor() const
{
	return EntitiesRepresentation[SelectedIndex].actorSpawnClass;
}