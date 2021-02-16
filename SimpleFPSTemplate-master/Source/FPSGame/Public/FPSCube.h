// Fill out your copyright notice in the Description page of Project Settings.
//Authored by Cameron Schneider & Dianna Cornett

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPSCube.generated.h"


class UStaticMeshComponent;

DECLARE_MULTICAST_DELEGATE(FDeathDelegate);

UCLASS()
class FPSGAME_API AFPSCube : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFPSCube();

	//The mesh to display for the cube object
	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* CubeMesh;

	//Maximum health of the cube
	UPROPERTY(EditDefaultsOnly)
	float MaxHealth = 100.0f;

	//Current health of the cube, initialized to the max health by default
	UPROPERTY(EditDefaultsOnly)
	float CurrentHealth;

	//Death delegate that gets called when current health <= 0.0
	FDeathDelegate OnDeath;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Respond to the death delegate invocation, can be overridden by subclasses
	UFUNCTION()
	virtual void DeathResponse();

	// The actors to spawn on death
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AFPSCube> SpawnedActor;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Override of AActor::TakeDamage() for custom behavior
	virtual float TakeDamage(float DamageTaken, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser) override;

};
