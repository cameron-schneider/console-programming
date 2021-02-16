// Fill out your copyright notice in the Description page of Project Settings.


#include "BombCube.h"
#include "Kismet/GameplayStatics.h"

void ABombCube::DeathResponse()
{
	if (Explosion)
	{
		UGameplayStatics::SpawnEmitterAtLocation(this, Explosion, GetActorLocation());
	}

	Destroy();
}