// Fill out your copyright notice in the Description page of Project Settings.

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

	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* CubeMesh;

	UPROPERTY(EditDefaultsOnly)
	float MaxHealth = 100.0f;

	UPROPERTY(EditDefaultsOnly)
	float CurrentHealth;

	FDeathDelegate OnDeath;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	virtual void DeathResponse();

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AFPSCube> SpawnedActor;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual float TakeDamage(float DamageTaken, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser) override;

};
