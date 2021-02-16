// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPSBombActor.h"
#include "FPSCube.generated.h"

class AFPSBombActor;
class UStaticMeshComponent;


//DECLARE_DELEGATE

DECLARE_MULTICAST_DELEGATE(FDeathDelegate);

UCLASS()
class FPSGAME_API AFPSCube : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFPSCube();

	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* CubeMesh;

	UPROPERTY(EditDefaultsOnly)
	float MaxHealth = 100.0f;

	UPROPERTY(EditDefaultsOnly)
	float CurrentHealth;

	UPROPERTY(EditDefaultsOnly, Category = "Explosion")
	TSubclassOf<AFPSBombActor> BombClass;

	//referenced Connor's Step 2 branch: death delegate is called when health <= 0.0f
	FDeathDelegate OnDeath;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//called when the cube dies
	UFUNCTION()
	virtual void DeathResponse();

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AFPSCube> SpawnedActor;
	
	UFUNCTION()
	virtual void SpawnExplosion();		//make explosion actor when cube dies

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual float TakeDamage(float DamageTaken, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser) override;

	

};
