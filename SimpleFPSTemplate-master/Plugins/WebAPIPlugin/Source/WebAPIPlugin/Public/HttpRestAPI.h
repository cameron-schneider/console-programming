// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "LatentActions.h"
#include "Engine/LatentActionManager.h"
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
 * @author Original latent action class by https://github.com/unktomi
 */
template <class T>
class FHttpResponseAction : public FPendingLatentAction
{
public:

	virtual void Call(const T& Value)
	{
		Result = Value;
		Called = true;
	}

	void operator()(const T& Value)
	{
		Call(Value);
	}


	FHttpResponseAction(FWeakObjectPtr RequestObj, T& ResultParam, const FLatentActionInfo& LatentInfo)
		: Called(false)
		, Request(RequestObj)
		, ExecutionFunction(LatentInfo.ExecutionFunction)
		, OutputLink(LatentInfo.Linkage)
		, CallbackTarget(LatentInfo.CallbackTarget)
		, Result(ResultParam)
	{
	}

	virtual void UpdateOperation(FLatentResponse& Response) override
	{
		Response.FinishAndTriggerIf(Called, ExecutionFunction, OutputLink, CallbackTarget);
	}


private:
	bool Called;
	FWeakObjectPtr Request;

public:
	const FName ExecutionFunction;
	const int32 OutputLink;
	const FWeakObjectPtr CallbackTarget;
	T& Result;
};

/**
 * 
 */
UCLASS()
class WEBAPIPLUGIN_API UHttpRestAPI : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", CallableWithoutWorldContext, Latent, LatentInfo = "LatentInfo"))
	static void HttpCall(UObject* WorldContextObject, FString& Result, const FString& URL, const FName& verb, FHttpHeaderInfo header, struct FLatentActionInfo LatentInfo);

	static void HttpCall(UObject* WorldContextObject, const FString& URL, const FName& verb, FHttpHeaderInfo header);

private:
	void OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
};


