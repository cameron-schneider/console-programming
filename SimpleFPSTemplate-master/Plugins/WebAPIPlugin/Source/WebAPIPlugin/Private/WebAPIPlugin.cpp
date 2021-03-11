// Copyright Epic Games, Inc. All Rights Reserved.

#include "WebAPIPlugin.h"

#define LOCTEXT_NAMESPACE "FWebAPIPluginModule"

void FWebAPIPluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	Http = &FHttpModule::Get();
}

void FWebAPIPluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

FHttpModule* FWebAPIPluginModule::GetHttpModule(FWebAPIPluginModule* mod)
{
	return mod->Http;
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FWebAPIPluginModule, WebAPIPlugin)