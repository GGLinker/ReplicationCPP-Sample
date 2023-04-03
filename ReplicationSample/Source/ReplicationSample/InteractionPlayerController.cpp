// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractionPlayerController.h"

#include <excpt.h>

#include "GameFramework/Character.h"
#include "Net/UnrealNetwork.h"

AInteractionPlayerController::AInteractionPlayerController()
{
	bReplicates = true;
}
void AInteractionPlayerController::GetLifetimeReplicatedProps( TArray< FLifetimeProperty > & OutLifetimeProps ) const
{
	DOREPLIFETIME( AInteractionPlayerController, ItemsContainer );
}

void AInteractionPlayerController::BeginPlay()
{
	Super::BeginPlay();
	//items container server setup
	Init();
}
void AInteractionPlayerController::Init_Implementation()
{
	ItemsContainer = NewObject<UsableItemsContainer>();
	ItemsContainer->SetParams(InitialContainerData);
}
TArray<FInteractableItemEntity> AInteractionPlayerController::GetItemsRepresentation() const
{
	return ItemsContainer->GetRepresentation();
}


void AInteractionPlayerController::OperateItemsContainer_Implementation(EInteractableItemType operateEntityType, int accum) const
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
	/*__try
	{
		OperateItemsContainer(ShootingItem, -1);
	}
	__except (EXCEPTION_EXECUTE_HANDLER)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Blue, "Shooting incomplete");
		return false;
	}*/
	try
	{
		OperateItemsContainer(ShootingItem, -1);
	}
	catch (...)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Blue, "Shooting incomplete");
		return false;
	}

	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Blue, "Shooting complete");
	return true;
}


void AInteractionPlayerController::SwitchSelected_Implementation(const bool bNext) const
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
