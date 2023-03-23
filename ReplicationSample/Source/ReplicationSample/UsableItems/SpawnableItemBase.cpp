// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnableItemBase.h"


// Sets default values
ASpawnableItemBase::ASpawnableItemBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SetActorEnableCollision(true);
}

// Called when the game starts or when spawned
void ASpawnableItemBase::BeginPlay()
{
	Super::BeginPlay();
	
	ComponentRef->SetSimulatePhysics(true);
	ComponentRef->SetEnableGravity(true);
	ComponentRef->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

	bBeginPlayFired = true;

	if(InitialImpulse != FVector::ZeroVector && !bInitialImpulseApplied) ApplyImpulse();
}

