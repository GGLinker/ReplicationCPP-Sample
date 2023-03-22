// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemUsabilityTag.h"


// Sets default values for this component's properties
UItemUsabilityTag::UItemUsabilityTag()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UItemUsabilityTag::SetType(EInteractableItemType type)
{
	this->itemType = type;
}

EInteractableItemType UItemUsabilityTag::GetType() const { return itemType; }

// Called when the game starts
void UItemUsabilityTag::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UItemUsabilityTag::TickComponent(float DeltaTime, ELevelTick TickType,
                                       FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

