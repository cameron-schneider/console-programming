// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSCube.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/EngineTypes.h"

// Sets default values
AFPSCube::AFPSCube()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CubeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube Mesh"));

	CubeMesh->bApplyImpulseOnDamage = false;

	CurrentHealth = MaxHealth;

	CubeMesh->SetVectorParameterValueOnMaterials(TEXT("Color"), FVector4::FVector4(0.0f, 1.0f, 0.0f, 1.0f));

	OnDeath.AddUFunction(this, FName("DeathResponse"));

}

// Called when the game starts or when spawned
void AFPSCube::BeginPlay()
{
	Super::BeginPlay();
	
}

void AFPSCube::DeathResponse()
{
	SpawnExplosion();

	Destroy();
}

// Called every frame
void AFPSCube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

float AFPSCube::TakeDamage(float DamageTaken, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	Super::TakeDamage(DamageTaken, DamageEvent, EventInstigator, DamageCauser);

	CurrentHealth -= DamageTaken;

	// This sets the instanced material parameter "Color" to a value between Green and Red based on health percentage.
	CubeMesh->SetVectorParameterValueOnMaterials(TEXT("Color"), FVector4::FVector4((1.0f - CurrentHealth / MaxHealth), CurrentHealth / MaxHealth, 0.0f, 1.0f));

	//function for scaling down as cubes are hit, put in here for cleaner code and transposed from code example in tutorial video to fit this function
	FVector Scale = CubeMesh->GetComponentScale();		
	Scale *= 0.8f;										//scaling factor applied to copy of cubemesh's scale
	CubeMesh->SetWorldScale3D(Scale);					//applying new scale to cubemesh

	if (CurrentHealth <= 0)			//using health to determine when cube should be destroyed instead of scale like in tutorial code
	{
		OnDeath.Broadcast();
	}

	return 0.0f;
}

void AFPSCube::SpawnExplosion()
{
	AActor* DeathEffect = GetWorld()->SpawnActor<AActor>(BombClass, GetActorLocation(), GetActorRotation());
}

