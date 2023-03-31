// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "GameFramework/PlayerStart.h"
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

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FServerSetupComplete, UInputComponent*, PlayerInputComponent);

UCLASS(config=Game)
class AReplicationSampleCharacter : public ACharacter
{
	GENERATED_BODY()
		
	class AInteractionPlayerController* InteractionController;

	bool bServerSetupFired = false;
	UInputComponent* PlayerInputComponentRef;
	TScriptDelegate<FWeakObjectPtr> ServerSetupComplete;
	FServerSetupComplete OnServerSetupComplete;

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class ATriggerSphere* TriggerSphere;
	
	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputMappingContext* DefaultMappingContext;


	TScriptDelegate<FWeakObjectPtr> RegisterWorldObjItem;
	TScriptDelegate<FWeakObjectPtr> FreeWorldObjItem;

	UPROPERTY(Replicated)
	TArray<FOverlapElem> OverlappedItemsContainer;


	FDateTime LoadingStartTimespan;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Shooting, meta = (AllowPrivateAccess = "true"))
	double HoldNormalizedThresholdInSeconds;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Shooting, meta = (AllowPrivateAccess = "true"))
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

	UFUNCTION(Server, Reliable)
	void Pickup(const FInputActionValue& Value);
	UFUNCTION(Server, Reliable)
	void SelectItem(const FInputActionValue& Value);
	void StartLoadTimer(const FInputActionValue& Value);
	UFUNCTION(Server, Reliable)
	void Shoot(const FInputActionValue& Value);

	UFUNCTION(Server, Reliable, WithValidation)
	void Shoot_Server(const FVector& ForwardDirection, const float HoldTime_InSec);


	UFUNCTION(Server, Reliable)
	void OnTriggerSphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION(Server, Reliable)
	void OnTriggerSphereEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION(Server, Reliable)
	void TriggerHandler(const UItemUsabilityTag* tag, AActor* actorRef, bool overlap);

	UFUNCTION(Server, Reliable)
	void ServerSetup();
	UFUNCTION(Client, Reliable)
	void ClientSetup();
	
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// APawn interface
	UFUNCTION(Client, Reliable)
	void SetupPIC_Local(class UInputComponent* PlayerInputComponent);
	
	// To add mapping context
	virtual void BeginPlay() override;

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};

