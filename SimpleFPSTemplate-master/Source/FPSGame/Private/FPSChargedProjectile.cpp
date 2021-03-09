// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSChargedProjectile.h"
#include "FPSCube.h"
#include "Kismet/GameplayStatics.h"

void AFPSChargedProjectile::BeginPlay()
{
	Super::BeginPlay();

	FTimerHandle ExplodeTimerHandle;
	GetWorldTimerManager().SetTimer(ExplodeTimerHandle, this, &AFPSChargedProjectile::Explode, ExplodeDelay, false);
}

void AFPSChargedProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL) && OtherComp->IsSimulatingPhysics())
	{
		//OtherComp->AddImpulseAtLocation(GetVelocity() * 100.0f, GetActorLocation());

		if (OtherActor->IsA<AFPSCube>())
		{

			Explode();

			//OtherActor->TakeDamage(100.0f * AmountCharged, FDamageEvent::FDamageEvent(), GetWorld()->GetFirstPlayerController(), this);

			//OtherActor->ApplyRadialDamage(200.0f, );
		}
	}
}

void AFPSChargedProjectile::Explode()
{
	UGameplayStatics::SpawnEmitterAtLocation(this, ExplosionTemplate, GetActorLocation());

	FCollisionObjectQueryParams QueryParams;
	QueryParams.AddObjectTypesToQuery(ECC_WorldDynamic);
	QueryParams.AddObjectTypesToQuery(ECC_PhysicsBody);

	FCollisionShape CollShape;
	CollShape.SetSphere(500.0f);

	TArray<FOverlapResult> OutOverlaps;
	GetWorld()->OverlapMultiByObjectType(OutOverlaps, GetActorLocation(), FQuat::Identity, QueryParams, CollShape);

	for (FOverlapResult Result : OutOverlaps)
	{
		UPrimitiveComponent* Overlap = Result.GetComponent();
		if (Overlap && Overlap->IsSimulatingPhysics())
		{
			//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString(Overlap->GetOwner()->GetClass()->GetSuperClass()->GetFName().ToString()));

			if ((Overlap->GetOwner())->IsA<AFPSCube>())
			{
				//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "Hit");
				Cast<AFPSCube>(Overlap->GetOwner())->TakeDamage(100.0f, FDamageEvent::FDamageEvent(), GetWorld()->GetFirstPlayerController(), this);
				Overlap->GetOwner()->Destroy();
			}
		}
	}

	Destroy();
}

/*
AFPSChargedProjectile::AFPSChargedProjectile(float StartCharge)
{
	AmountCharged = StartCharge;
}*/

void AFPSChargedProjectile::ChangeCharge(float NewCharge)
{
	AmountCharged = NewCharge;
}
