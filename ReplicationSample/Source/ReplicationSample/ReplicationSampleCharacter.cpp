// Copyright Epic Games, Inc. All Rights Reserved.

#include "ReplicationSampleCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InteractionPlayerController.h"
#include "Components/SphereComponent.h"
#include "Engine/StaticMeshActor.h"
#include "Engine/TriggerSphere.h"
#include "UsableItems/ItemUsabilityTag.h"


//////////////////////////////////////////////////////////////////////////
// AReplicationSampleCharacter

AReplicationSampleCharacter::AReplicationSampleCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to armz
}

void AReplicationSampleCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Add Input Mapping Context
	interactionController = Cast<AInteractionPlayerController>(Controller);

	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(interactionController->GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(DefaultMappingContext, 0);
	}


	// Setup trigger
	TriggerSphere = GetWorld()->SpawnActor<ATriggerSphere>(ATriggerSphere::StaticClass(), FVector::Zero(), FRotator::ZeroRotator);
	const auto collisionSphere = Cast<USphereComponent>(TriggerSphere->GetCollisionComponent());
	collisionSphere->SetSphereRadius(120);
	collisionSphere->SetGenerateOverlapEvents(true);
	collisionSphere->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);

	TriggerSphere->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform, TEXT("TriggerSphere"));
	RegisterWorldObjItem.BindUFunction(this, "OnTriggerSphereBeginOverlap");
	TriggerSphere->OnActorBeginOverlap.Add(RegisterWorldObjItem);
	FreeWorldObjItem.BindUFunction(this, "OnTriggerSphereEndOverlap");
	TriggerSphere->OnActorEndOverlap.Add(FreeWorldObjItem);
}


void AReplicationSampleCharacter::OnTriggerSphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (const auto tagComponent = OtherActor->FindComponentByClass<UItemUsabilityTag>())
	{
		TriggerHandler(tagComponent, OtherActor, true);
	}
}
void AReplicationSampleCharacter::OnTriggerSphereEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (const auto tagComponent = OtherActor->FindComponentByClass<UItemUsabilityTag>())
	{
		TriggerHandler(tagComponent, OtherActor, false);
	}
}

void AReplicationSampleCharacter::TriggerHandler(const UItemUsabilityTag* tag, AActor* actorRef, bool overlap)
{
	const auto type {tag->GetType()};
	
	if(overlap)
	{
		OverlappedItemsContainer.Add(FOverlapElem{type, actorRef});
		return;
	}

	for(auto item : OverlappedItemsContainer)
	{
		if(!item.actorRef || actorRef == item.actorRef)
		{
			OverlappedItemsContainer.Remove(item);
		}
	}
}

//////////////////////////////////////////////////////////////////////////
// Input

void AReplicationSampleCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent)) {
		
		//Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		//Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AReplicationSampleCharacter::Move);

		//Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AReplicationSampleCharacter::Look);

		/**/
		//Pickup items
		EnhancedInputComponent->BindAction(PickupAction, ETriggerEvent::Triggered, this, &AReplicationSampleCharacter::Pickup);
		//Select items
		EnhancedInputComponent->BindAction(SelectItemAction, ETriggerEvent::Triggered, this, &AReplicationSampleCharacter::SelectItem);
		//Shoot
		EnhancedInputComponent->BindAction(ShootAction, ETriggerEvent::Started, this, &AReplicationSampleCharacter::StartLoadTimer);
		EnhancedInputComponent->BindAction(ShootAction, ETriggerEvent::Triggered, this, &AReplicationSampleCharacter::Shoot);
	}

}

void AReplicationSampleCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	const FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	
		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void AReplicationSampleCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	const FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void AReplicationSampleCharacter::Pickup(const FInputActionValue& Value)
{
	if (interactionController && OverlappedItemsContainer.Num() > 0)
	{
		float MinDist = std::numeric_limits<float>::max();
		int MinIndex = 0;
		
		for(int i = 0; i < OverlappedItemsContainer.Num(); i++)
		{
			const auto Item = OverlappedItemsContainer[i];
			if(!Item.actorRef)
			{
				OverlappedItemsContainer.RemoveAt(i);
				continue;
			}

			if(const float Dist = FVector::Dist(Item.actorRef->GetActorTransform().GetLocation(), this->GetTransform().GetLocation()) < MinDist)
			{
				MinDist = Dist;
				MinIndex = i;
			}
		}

		{
			const auto SelectedItem = OverlappedItemsContainer[MinIndex];
			if(const auto Actor = SelectedItem.actorRef)
			{
				Actor->Destroy();
			}

			interactionController->OperateItemsContainer(SelectedItem.type, 1);
			OverlappedItemsContainer.Remove(SelectedItem);
		}
	}
}

void AReplicationSampleCharacter::SelectItem(const FInputActionValue& Value)
{
	const float WheelAxis = Value.Get<float>();
	
	if (interactionController)
	{
		interactionController->SwitchSelected(WheelAxis > 0);
	}
}

void AReplicationSampleCharacter::StartLoadTimer(const FInputActionValue& Value)
{
	LoadingStartTimespan = FDateTime::UtcNow();
}
void AReplicationSampleCharacter::Shoot(const FInputActionValue& Value)
{
	if (interactionController)
	{
		const auto HoldTime = FDateTime::UtcNow() - LoadingStartTimespan;
		const double NormalizedHoldTime = (HoldTime < HoldNormalizedThreshold ? HoldTime : HoldNormalizedThreshold).GetTotalSeconds() / HoldNormalizedThreshold.GetTotalSeconds();
		
		if(interactionController->Shoot())
		{
			const FRotator Rotation = Controller->GetControlRotation();
			const FRotator YawRotation(0, Rotation.Yaw, 0);
			// get forward vector
			const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
			
			auto Missile = Controller->GetWorld()->SpawnActor<AStaticMeshActor>(
				Controller->GetTargetLocation() + ForwardDirection,
				YawRotation,
				FActorSpawnParameters());

			auto MeshComponent = Missile->GetStaticMeshComponent();
			MeshComponent->SetMaterial(0, interactionController->GetSelectedMaterialInstance());
			Missile->SetMobility(EComponentMobility::Movable);

			auto ForwardNormalizedVector {ForwardDirection};
			ForwardNormalizedVector.Normalize(0.0001f);
			MeshComponent->AddImpulse(ForwardNormalizedVector * NormalizedHoldTime * ShootingImpulseIntense);
		}
	}
}