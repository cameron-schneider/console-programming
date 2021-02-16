// Fill out your copyright notice in the Description page of Project Settings.
//Authored by Cameron Schneider & Dianna Cornett

#pragma once

#include "CoreMinimal.h"
#include "FPSCube.h"
#include "BombCube.generated.h"

/**
 * 
 */
UCLASS()
class FPSGAME_API ABombCube : public AFPSCube
{
	GENERATED_BODY()
	
protected:

	// Override since we have a different response to death
	virtual void DeathResponse() override;

private:
	// The explosion particle effect to spawn on death
	UPROPERTY(EditDefaultsOnly)
    UParticleSystem* Explosion;
};
