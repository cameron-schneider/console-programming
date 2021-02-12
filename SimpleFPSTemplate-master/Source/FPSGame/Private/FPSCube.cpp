// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSCube.h"

// Sets default values
AFPSCube::AFPSCube()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CubeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube Mesh"));

	CubeMesh->bApplyImpulseOnDamage = false;

	CurrentHealth = MaxHealth;

	CubeMesh->SetVectorParameterValueOnMaterials(TEXT("Color"), FVector4::FVector4(0.0f, 1.0f, 0.0f, 1.0f));
}

// Called when the game starts or when spawned
void AFPSCube::BeginPlay()
{
	Super::BeginPlay();
	
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

	return 0.0f;
}

