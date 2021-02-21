// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSChargedProjectile.h"
#include "FPSCube.h"



void AFPSChargedProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL) && OtherComp->IsSimulatingPhysics())
	{
		//OtherComp->AddImpulseAtLocation(GetVelocity() * 100.0f, GetActorLocation());

		if (OtherActor->IsA<AFPSCube>())
		{
			OtherActor->TakeDamage(100.0f * AmountCharged, FDamageEvent::FDamageEvent(), GetWorld()->GetFirstPlayerController(), this);

		}

		Destroy();
	}
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
