// Fill out your copyright notice in the Description page of Project Settings.


#include "UsableItemsContainer.h"

UsableItemsContainer::UsableItemsContainer()
{}

UsableItemsContainer::EntitySet UsableItemsContainer::GetRepresentation() const
{ return entitiesRepresentation; }

int UsableItemsContainer::OperateEntities(EInteractableItemType operateEntityType, int accum)
{
	for(int i = 0; i < entitiesRepresentation.Num(); i++)
	{
		if(entitiesRepresentation[i].entityType == operateEntityType)
		{
			const int accumulated = entitiesRepresentation[i].itemsAmount + accum;
			if(accumulated < 0) throw std::range_error("");
			
			return entitiesRepresentation[i].itemsAmount = accumulated;
		}
	}

	throw "Entity not found";
}

int UsableItemsContainer::SwitchSelected(bool next)
{
	auto res = selectedIndex + (next ? 1 : -1);
	if(res >= 0 && res < entitiesRepresentation.Num())
	{
		return selectedIndex = res;
	}

	if(res < 0)
	{
		return selectedIndex = entitiesRepresentation.Num() - 1;
	}

	return selectedIndex = 0;
}

EInteractableItemType UsableItemsContainer::GetSelected() const
{
	return entitiesRepresentation[selectedIndex].entityType;
}

UMaterialInstance* UsableItemsContainer::GetSelectedMaterial() const
{
	return entitiesRepresentation[selectedIndex].material;
}