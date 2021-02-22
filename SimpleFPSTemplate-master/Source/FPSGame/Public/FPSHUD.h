// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "FPSHUD.generated.h"

class UTexture2D;
class UUserWidget;

UCLASS()
class AFPSHUD : public AHUD
{
	GENERATED_BODY()

protected:

	/** Crosshair asset pointer */
	UTexture2D* CrosshairTex;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class UUserWidget> HUDWidgetClass;

	UPROPERTY(BlueprintReadOnly)
	class UUserWidget* CurrentWidget;

public:

	AFPSHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

	virtual void BeginPlay() override;
};

