// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSBombActor.h"
#include "FPSCube.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AFPSBombActor::AFPSBombActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


}

// Called when the game starts or when spawned
void AFPSBombActor::BeginPlay()
{
	Super::BeginPlay();

	Explode();
	
}

// Called every frame
void AFPSBombActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFPSBombActor::Explode()
{
	UGameplayStatics::SpawnEmitterAtLocation(this, Explosion, GetActorLocation());

	//Lance's Bomb Actor Method

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

			if (Overlap->IsA<AFPSCube>())
			{
				Cast<AFPSCube>(Overlap->GetOwner())->TakeDamage(100.0f, FDamageEvent::FDamageEvent(), GetWorld()->GetFirstPlayerController(), this);
				Overlap->GetOwner()->Destroy();
			}
		}
	}

	Destroy();
}

