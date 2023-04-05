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
#include "Net/UnrealNetwork.h"
#include "UsableItems/ItemUsabilityTag.h"


//////////////////////////////////////////////////////////////////////////
// AReplicationSampleCharacter

AReplicationSampleCharacter::AReplicationSampleCharacter()
{
	bReplicates = true;
	ACharacter::SetReplicateMovement(true);
	bNetLoadOnClient = true;


	if(const auto Movement = GetCharacterMovement())
	{
		Movement->SetIsReplicated(true);

		// Configure character movement
		Movement->bOrientRotationToMovement = true; // Character moves in the direction of input...	
		Movement->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

		// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
		// instead of recompiling to adjust them
		Movement->JumpZVelocity = 700.f;
		Movement->AirControl = 0.35f;
		Movement->MaxWalkSpeed = 500.f;
		Movement->MinAnalogWalkSpeed = 20.f;
		Movement->BrakingDecelerationWalking = 2000.f;
	}
	
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	

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

void AReplicationSampleCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	GEngine->AddOnScreenDebugMessage(-1, 60, FColor::White, FString::Printf(TEXT("PossessedBy: %s"), ToCStr(NewController->GetName())));
	
	ServerSetup();
}
void AReplicationSampleCharacter::NotifyControllerChanged()
{
	Super::NotifyControllerChanged();

	if(Controller)
	{
		GEngine->AddOnScreenDebugMessage(-1, 60, FColor::White, FString::Printf(TEXT("Notification - ControllerChanged: %s"), ToCStr(Controller->GetName())));
		ClientSetup();
	}
}

void AReplicationSampleCharacter::ServerSetup_Implementation()
{
	InteractionController = Cast<AInteractionPlayerController>(Controller);
	
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

	GEngine->AddOnScreenDebugMessage(-1, 60, FColor::Green, FString::Printf(TEXT("SERVER SETUP ENDED")));
	ClientSetup();
}
void AReplicationSampleCharacter::ClientSetup_Implementation()
{
	if(Controller)
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(Cast<AInteractionPlayerController>(Controller)->GetLocalPlayer()))
		{
			GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Yellow, FString::Printf(TEXT("ClientSetup_Implementation: %hs"), HasAuthority() ? "true" : "false"));
			Subsystem->AddMappingContext(DefaultMappingContext, 0);

			bClientSetupFired = true;
			OnServerSetupComplete.Broadcast(PlayerInputComponentRef);
		}
	}
}


void AReplicationSampleCharacter::OnTriggerSphereBeginOverlap_Implementation(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (const auto tagComponent = Cast<UItemUsabilityTag>(OtherActor->GetComponentByClass(UItemUsabilityTag::StaticClass())))
	{
		TriggerHandler(tagComponent, OtherActor, true);
	}
}
void AReplicationSampleCharacter::OnTriggerSphereEndOverlap_Implementation(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (const auto tagComponent = Cast<UItemUsabilityTag>(OtherActor->GetComponentByClass(UItemUsabilityTag::StaticClass())))
	{
		TriggerHandler(tagComponent, OtherActor, false);
	}
}

void AReplicationSampleCharacter::TriggerHandler_Implementation(const UItemUsabilityTag* tag, AActor* actorRef, bool overlap)
{
	const auto type {tag->GetType()};
	
	if(overlap)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Green, FString::Printf(TEXT("ADDED: %d"), static_cast<int>(type)));
		OverlappedItemsContainer.Add(FOverlapElem{type, actorRef});
		return;
	}

	for(int i = 0; i < OverlappedItemsContainer.Num(); i++)
	{
		const auto Item = OverlappedItemsContainer[0];
		if(!Item.actorRef || actorRef == Item.actorRef)
		{
			if(actorRef == Item.actorRef)
			{
				GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Green, FString::Printf(TEXT("DELETED: %d"), static_cast<int>(type)));
			}
			OverlappedItemsContainer.RemoveAt(i--);
		}
	}
}


//////////////////////////////////////////////////////////////////////////
// Input

void AReplicationSampleCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	ServerSetupComplete.BindUFunction(this, "SetupPIC_Local");
	OnServerSetupComplete.Add(ServerSetupComplete);
	PlayerInputComponentRef = PlayerInputComponent;
	
	if(bClientSetupFired) SetupPIC_Local(PlayerInputComponent);
	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Black, FString::Printf(TEXT("SPI (Native)/bServerSetupFired: %hs"), bClientSetupFired ? "true" : "false"));
}
void AReplicationSampleCharacter::SetupPIC_Local_Implementation(class UInputComponent* PlayerInputComponent)
{
	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Black, FString::Printf(TEXT("SPI: %hs"), HasAuthority() ? "true" : "false"));
	OnServerSetupComplete.Remove(ServerSetupComplete);
	
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent)) {
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Green, FString::Printf(TEXT("Action bindings to %ls, authority: %hs"), ToCStr(EnhancedInputComponent->GetName()), HasAuthority() ? "true" : "false"));
		
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
	GEngine->AddOnScreenDebugMessage(-1, .005f, FColor::White, FString::Printf(TEXT("MOVE %s"), ToCStr(MovementVector.ToString())));

	if (Controller)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
		
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
		GEngine->AddOnScreenDebugMessage(-1, .005f, FColor::Cyan, FString::Printf(TEXT("%s"), ToCStr(GetMovementComponent()->Velocity.ToString())));

	}
}


void AReplicationSampleCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	const FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller)
	{
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}


void AReplicationSampleCharacter::Pickup_Implementation(const FInputActionValue& Value)
{
	if (InteractionController && OverlappedItemsContainer.Num() > 0)
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
				GEngine->AddOnScreenDebugMessage(-1, 10, FColor::White, FString::Printf(TEXT("PICKUP %s"), ToCStr(Actor->GetName())));
				Actor->Destroy();
			}

			InteractionController->OperateItemsContainer(SelectedItem.type, 1);
			OverlappedItemsContainer.Remove(SelectedItem);
		}
	}
}


// ReSharper disable once CppMemberFunctionMayBeConst
void AReplicationSampleCharacter::SelectItem_Implementation(const FInputActionValue& Value)
{
	if (InteractionController)
	{
		const float WheelAxis = Value.Get<float>();
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::White, FString::Printf(TEXT("MOVE %hs"), WheelAxis > 0 ? "Up" : "Down"));
		InteractionController->SwitchSelected(WheelAxis > 0);
	}
}


void AReplicationSampleCharacter::StartLoadTimer(const FInputActionValue& Value)
{
	LoadingStartTimespan = FDateTime::UtcNow();
	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Yellow, TEXT("Loading: " + LoadingStartTimespan.ToString()));
}
// ReSharper disable once CppMemberFunctionMayBeConst
void AReplicationSampleCharacter::Shoot(const FInputActionValue& Value)
{
	if (Controller)
	{
		const auto HoldSeconds = (FDateTime::UtcNow() - LoadingStartTimespan).GetTotalSeconds();
		const double NormalizedHoldTime = (HoldSeconds < HoldNormalizedThresholdInSeconds ? HoldSeconds : HoldNormalizedThresholdInSeconds) / HoldNormalizedThresholdInSeconds;
		// get forward vector
		FVector ForwardDirection = CameraBoom->GetTargetRotation().Vector();
		ForwardDirection.Normalize(0.001f);
		
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Black, FString::Printf(TEXT("NHT: %f, SII: %f"), HoldSeconds, ShootingImpulseIntense));
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Black, FString{TEXT("FDir: ") + ForwardDirection.ToString()});
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Emerald, FString{TEXT("FDir: ") + (ForwardDirection * NormalizedHoldTime * ShootingImpulseIntense).ToString()});
		
		Shoot_Server(ForwardDirection, NormalizedHoldTime);
	}
}


void AReplicationSampleCharacter::Shoot_Server_Implementation(const FVector& ForwardDirection, const float HoldTime_InSec)
{
	const auto SpawnActorClass = InteractionController->GetSelectedSpawnActor();
	FVector SpawnLocation = this->GetTargetLocation() + ForwardDirection * 180;
	SpawnLocation.Z += 40;
	auto SpawnParameters = FActorSpawnParameters();
	SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
	ASpawnableItemBase* Missile = Controller->GetWorld()->SpawnActor<ASpawnableItemBase>(
		SpawnActorClass,
		SpawnLocation,
		GetActorRotation(),
		SpawnParameters);

	Missile->AddImpulseToMesh(ForwardDirection * HoldTime_InSec * ShootingImpulseIntense);
}

bool AReplicationSampleCharacter::Shoot_Server_Validate(const FVector& ForwardDirection, const float HoldTime_InSec)
{
	return InteractionController->Shoot();
}