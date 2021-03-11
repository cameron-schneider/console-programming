// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "HttpRestAPI.generated.h"

USTRUCT(BlueprintType)
struct FHttpHeaderInfo
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite)
		TArray<FString> headerNames;

	UPROPERTY(BlueprintReadWrite)
		TArray<FString> headerValues;
};

/**
 * 
 */
UCLASS()
class WEBAPIPLUGIN_API UHttpRestAPI : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", CallableWithoutWorldContext))
	static void HttpCall(UObject* WorldContextObject, const FString& URL, const FName& verb, FHttpHeaderInfo header);

private:
	void OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
};
