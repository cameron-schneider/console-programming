// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FPSCharacter.h"
#include "FPSProjectile.h"
#include "FPSChargedProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Animation/AnimSequence.h"


AFPSCharacter::AFPSCharacter()
{
	// Create a CameraComponent	
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	CameraComponent->SetupAttachment(GetCapsuleComponent());
	CameraComponent->SetRelativeLocation(FVector(0, 0, BaseEyeHeight)); // Position the camera
	CameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1PComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh"));
	Mesh1PComponent->SetupAttachment(CameraComponent);
	Mesh1PComponent->CastShadow = false;
	Mesh1PComponent->SetRelativeRotation(FRotator(2.0f, -15.0f, 5.0f));
	Mesh1PComponent->SetRelativeLocation(FVector(0, 0, -160.0f));

	// Create a gun mesh component
	GunMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FP_Gun"));
	GunMeshComponent->CastShadow = false;
	GunMeshComponent->SetupAttachment(Mesh1PComponent, "GripPoint");

	//starting val for amountcharged and timetocooldown
	AmountCharged = 0.1f;
	TimeToCoolDown = MaxCooldown;

	//starting val for isCharging and IsCoolDown
	IsCharging = false;
	IsCoolDown = false;
}


void AFPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AFPSCharacter::Fire);
	PlayerInputComponent->BindAction("Charge", IE_Pressed, this, &AFPSCharacter::Charge);
	PlayerInputComponent->BindAction("Charge", IE_Released, this, &AFPSCharacter::FireCharged);

	PlayerInputComponent->BindAxis("MoveForward", this, &AFPSCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFPSCharacter::MoveRight);

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
}

void AFPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(IsCharging)
	{ 
		if (AmountCharged <= ChargeTime)
		{
			AmountCharged += DeltaTime;
		}
	}

	if (IsCoolDown)
	{
		if(TimeToCoolDown > 0.0f)
		{ 
			TimeToCoolDown -= DeltaTime;
		}
		else
		{
			TimeToCoolDown = MaxCooldown;
			IsCoolDown = false;
		}
	}

}


void AFPSCharacter::Fire()
{
	// try and fire a projectile
	if (ProjectileClass)
	{
		// Grabs location from the mesh that must have a socket called "Muzzle" in his skeleton
		FVector MuzzleLocation = GunMeshComponent->GetSocketLocation("Muzzle");
		// Use controller rotation which is our view direction in first person
		FRotator MuzzleRotation = GetControlRotation();

		//Set Spawn Collision Handling Override
		FActorSpawnParameters ActorSpawnParams;
		ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

		// spawn the projectile at the muzzle
		GetWorld()->SpawnActor<AFPSProjectile>(ProjectileClass, MuzzleLocation, MuzzleRotation, ActorSpawnParams);
	}

	// try and play the sound if specified
	if (FireSound)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
	}

	// try and play a firing animation if specified
	if (FireAnimation)
	{
		// Get the animation object for the arms mesh
		UAnimInstance* AnimInstance = Mesh1PComponent->GetAnimInstance();
		if (AnimInstance)
		{
			AnimInstance->PlaySlotAnimationAsDynamicMontage(FireAnimation, "Arms", 0.0f);
		}
	}
}

void AFPSCharacter::Charge()
{
	if (!IsCoolDown)
	{
		IsCharging = true;
	}
}

void AFPSCharacter::FireCharged()
{
	//largely derived from Fire() but needs other class as input
	// try and fire a projectile
	if (ChargedProjectileClass)
	{ 
		if (!IsCoolDown)
		{
			// Grabs location from the mesh that must have a socket called "Muzzle" in his skeleton
			FVector MuzzleLocation = GunMeshComponent->GetSocketLocation("Muzzle");
			// Use controller rotation which is our view direction in first person
			FRotator MuzzleRotation = GetControlRotation();

			//Set Spawn Collision Handling Override
			FActorSpawnParameters ActorSpawnParams;
			ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

			//
			AFPSChargedProjectile* ChargedProjectile;

			// spawn the projectile at the muzzle
			ChargedProjectile = GetWorld()->SpawnActor<AFPSChargedProjectile>(ChargedProjectileClass, MuzzleLocation, MuzzleRotation, ActorSpawnParams);

			ChargedProjectile->ChangeCharge(AmountCharged);

			// try and play the sound if specified
			if (FireSound)
			{
				UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
			}

			// try and play a firing animation if specified
			if (FireAnimation)
			{
				// Get the animation object for the arms mesh
				UAnimInstance* AnimInstance = Mesh1PComponent->GetAnimInstance();
				if (AnimInstance)
				{
					AnimInstance->PlaySlotAnimationAsDynamicMontage(FireAnimation, "Arms", 0.0f);
				}
			}


			//reset variables
			IsCharging = false;
			AmountCharged = 0.0f;

			//start cooldown timer
			IsCoolDown = true;

		}
	}
}

void AFPSCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}


void AFPSCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}
