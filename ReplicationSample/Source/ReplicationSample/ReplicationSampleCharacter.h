// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "UsableItems/ItemUsabilityTag.h"
#include "UsableItems/UsableItemsContainer.h"
#include "ReplicationSampleCharacter.generated.h"


USTRUCT()
struct FOverlapElem
{
	GENERATED_BODY()

	EInteractableItemType type;
	//GC DANGER
	AActor* actorRef;

	FOverlapElem(EInteractableItemType itemType, AActor* itemActor) : type {itemType} {
		actorRef  = itemActor;
	};

	FOverlapElem() : type {GreenMedium}
	{
		actorRef = nullptr;
	};

	bool operator==(const FOverlapElem& other) const
	{
		return this->type == other.type && this->actorRef == other.actorRef;
	}
};

UCLASS(config=Game)
class AReplicationSampleCharacter : public ACharacter
{
	GENERATED_BODY()

	class AInteractionPlayerController* interactionController;

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class ATriggerSphere* TriggerSphere;

	/** Shooting SM */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<UStaticMesh> ShootingStaticMeshClass;
	
	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputMappingContext* DefaultMappingContext;


	TScriptDelegate<FWeakObjectPtr> RegisterWorldObjItem;
	TScriptDelegate<FWeakObjectPtr> FreeWorldObjItem;

	UPROPERTY()
	TArray<FOverlapElem> OverlappedItemsContainer;


	FDateTime LoadingStartTimespan;

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	FTimespan HoldNormalizedThreshold;
	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	float ShootingImpulseIntense;
	

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* LookAction;


	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* PickupAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* SelectItemAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* ShootAction;

public:
	AReplicationSampleCharacter();
	

protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);

	void Pickup(const FInputActionValue& Value);
	void SelectItem(const FInputActionValue& Value);
	void StartLoadTimer(const FInputActionValue& Value);
	void Shoot(const FInputActionValue& Value);


	UFUNCTION()
	void OnTriggerSphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	void OnTriggerSphereEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	void TriggerHandler(const UItemUsabilityTag* tag, AActor* actorRef, bool overlap);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	// To add mapping context
	virtual void BeginPlay() override;

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};

