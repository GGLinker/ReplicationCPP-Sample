// Fill out your copyright notice in the Description page of Project Settings.


#include "UsableItemsContainer.h"


UUsableItemsContainer::UUsableItemsContainer() :
	entitiesRepresentation{{}}
{}
UUsableItemsContainer::UUsableItemsContainer(const TArray<FInteractableItemEntity>& initialRepresentation) :
	entitiesRepresentation{initialRepresentation}
{}