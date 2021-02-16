// Fill out your copyright notice in the Description page of Project Settings.

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

	virtual void DeathResponse() override;

private:

	UPROPERTY(EditDefaultsOnly)
    UParticleSystem* Explosion;
};
