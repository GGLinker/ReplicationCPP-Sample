// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UsableItemsContainer.h"
#include "Components/ActorComponent.h"
#include "ItemUsabilityTag.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class REPLICATIONSAMPLE_API UItemUsabilityTag final : public UActorComponent
{
	GENERATED_BODY()

	EInteractableItemType itemType;
	
public:
	// Sets default values for this component's properties
	UItemUsabilityTag();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	inline EInteractableItemType GetType() const;
	UFUNCTION(BlueprintCallable)
	inline void SetType(EInteractableItemType type);
};
