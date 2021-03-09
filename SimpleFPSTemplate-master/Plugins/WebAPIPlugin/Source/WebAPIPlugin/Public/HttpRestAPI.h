// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HttpRestAPI.generated.h"

/**
 * 
 */
UCLASS()
class WEBAPIPLUGIN_API UHttpRestAPI : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void HttpCall(const FString& URL, const FName& verb, FHttpHeaderInfo header);

private:
	void OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
};
