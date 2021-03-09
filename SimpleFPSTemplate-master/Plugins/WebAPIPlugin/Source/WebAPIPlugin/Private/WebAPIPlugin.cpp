// Copyright Epic Games, Inc. All Rights Reserved.

#include "WebAPIPlugin.h"

#define LOCTEXT_NAMESPACE "FWebAPIPluginModule"

void FWebAPIPluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	Http = &FHttpModule::Get();
	MyHttpCall();
}

void FWebAPIPluginModule::MyHttpCall()
{
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = Http->CreateRequest();
	Request->OnProcessRequestComplete().BindUObject(this, &AHttpActor::OnResponseReceived);
	//This is the url on which to process the request
	Request->SetURL("https://www.quackit.com/json/tutorial/artists.txt");
	Request->SetVerb("GET");
	Request->SetHeader(TEXT("User-Agent"), "X-UnrealEngine-Agent");
	Request->SetHeader("Content-Type", TEXT("application/json"));
	Request->ProcessRequest();
}

void FWebAPIPluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

void FWebAPIPluginModule::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	//*
	//Create a pointer to hold the json serialized data
	TSharedPtr<FJsonObject> JsonObject;

	//Create a reader pointer to read the json data
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());

	//Deserialize the json data given Reader and the actual object to deserialize
	if (FJsonSerializer::Deserialize(Reader, JsonObject))
	{
		//Get the value of the json object by field name
		TArray<TSharedPtr<FJsonValue>> objArray = JsonObject->GetArrayField("artists");
		for (int32 i = 0; i < objArray.Num(); i++)
		{
			FString artist = objArray[i]->AsObject()->GetStringField(TEXT("artistname"));

			GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Green, artist);

		}

		//int32 recievedInt = JsonObject->GetIntegerField(objArray[0]->AsString());

		//Output it to the engine
		//GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Green, objArray[0]->AsString());
	}
	//*/
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FWebAPIPluginModule, WebAPIPlugin)