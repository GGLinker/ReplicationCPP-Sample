// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnableItemBase.generated.h"

UCLASS()
class REPLICATIONSAMPLE_API ASpawnableItemBase : public AActor
{
	GENERATED_BODY()

	bool bBeginPlayFired = false;
	bool bInitialImpulseApplied = false;
	
    FVector InitialImpulse;

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (AllowPrivateAccess))
	UStaticMeshComponent* ComponentRef;

	// Sets default values for this actor's properties
	ASpawnableItemBase();

	void AddImpulseToMesh(const FVector InnerVector)
	{
	    InitialImpulse = InnerVector;
		if(bBeginPlayFired && !bInitialImpulseApplied) ApplyImpulse();
	}

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	void ApplyImpulse()
	{
		bInitialImpulseApplied = true;
		ComponentRef->AddImpulse(InitialImpulse, "None", true);
	}
};
