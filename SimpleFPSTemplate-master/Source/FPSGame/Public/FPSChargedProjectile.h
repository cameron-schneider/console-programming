// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FPSProjectile.h"
#include "FPSChargedProjectile.generated.h"

/**
 * this child class of projectile does a different amount of damage based on how much you charge the attack
 * it will need a value to represent damage done
 */

UCLASS()
class FPSGAME_API AFPSChargedProjectile : public AFPSProjectile
{
	GENERATED_BODY()
	
};
