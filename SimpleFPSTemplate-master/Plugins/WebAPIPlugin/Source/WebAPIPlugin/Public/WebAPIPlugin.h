// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "Modules/ModuleManager.h"
#include "WebAPIPlugin.generated.h"

namespace HttpVerb
{
	const FName Get = FName(TEXT("GET"));
};

USTRUCT(BlueprintType)
struct FHttpHeaderInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	TArray<FString> headerNames;

	UPROPERTY(BlueprintReadWrite)
	TArray<FString> headerValues;
};


class FWebAPIPluginModule : public IModuleInterface
{
public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	FHttpModule* Http;

	UFUNCTION(BlueprintCallable)
	void HttpCall(const FString& URL, const FName& verb, FHttpHeaderInfo* header);

	void OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
};
