// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "HttpRestAPI.h"
#include "Modules/ModuleManager.h"

namespace HttpVerb
{
	const FName Get = FName(TEXT("GET"));
};


class FWebAPIPluginModule : public IModuleInterface
{
public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	static FHttpModule* GetHttpModule(FWebAPIPluginModule* mod);

	static FHttpResponseAction<FString&>* GetHttpAction(FWebAPIPluginModule* mod);
	static void SetHttpAction(FWebAPIPluginModule* mod, FHttpResponseAction<FString&>* Action) { mod->LatentAction = Action; }

	FHttpModule* Http;
	FHttpResponseAction<FString&>* LatentAction;
};
