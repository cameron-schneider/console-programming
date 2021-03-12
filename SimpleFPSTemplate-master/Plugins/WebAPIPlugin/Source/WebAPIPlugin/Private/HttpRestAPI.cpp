// Fill out your copyright notice in the Description page of Project Settings.


#include "HttpRestAPI.h"
#include "WebAPIPlugin.h"

void UHttpRestAPI::HttpCall(UObject* WorldContextObject, FString& Result, const FString& URL, const FName& verb, FHttpHeaderInfo header, FLatentActionInfo LatentInfo)
{
	FHttpResponseAction<FString&>* LatentAction = FWebAPIPluginModule::GetHttpAction(FModuleManager::GetModulePtr<FWebAPIPluginModule>(FName("WebAPIPlugin")));

	if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject))
	{
		FLatentActionManager& LatentActionManager = World->GetLatentActionManager();
		if (LatentActionManager.FindExistingAction<FHttpResponseAction<FString*>>(LatentInfo.CallbackTarget, LatentInfo.UUID) == NULL)
		{
			LatentAction = new FHttpResponseAction<FString&>(WorldContextObject, Result, LatentInfo);
			FWebAPIPluginModule::SetHttpAction(FModuleManager::GetModulePtr<FWebAPIPluginModule>(FName("WebAPIPlugin")), LatentAction);
			LatentActionManager.AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, LatentAction);
		}

	}

	HttpCall(WorldContextObject, URL, verb, header);
}

void UHttpRestAPI::HttpCall(UObject* WorldContextObject, const FString& URL, const FName& verb, FHttpHeaderInfo header)
{
	FHttpModule* Http = FWebAPIPluginModule::GetHttpModule(FModuleManager::GetModulePtr<FWebAPIPluginModule>(FName("WebAPIPlugin")));

	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = Http->CreateRequest();
	Request->OnProcessRequestComplete().BindUObject(reinterpret_cast<UHttpRestAPI*>(WorldContextObject), &UHttpRestAPI::OnResponseReceived);

	//This is the url on which to process the request
	Request->SetURL(URL);
	Request->SetVerb(verb.ToString());

	for (int i = 0; i < header.headerNames.Num(); i++)
	{
		Request->SetHeader(header.headerNames[i], header.headerValues[i]);
	}


	Request->ProcessRequest();
}

void UHttpRestAPI::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	//Create a pointer to hold the json serialized data
	TSharedPtr<FJsonObject> JsonObject;

	//Create a reader pointer to read the json data
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());

	FHttpResponseAction<FString&>* LatentAction = FWebAPIPluginModule::GetHttpAction(FModuleManager::GetModulePtr<FWebAPIPluginModule>(FName("WebAPIPlugin")));
	
	FString result = Response->GetContentAsString();

	LatentAction->Call(result);

	//Deserialize the json data given Reader and the actual object to deserialize
	if (FJsonSerializer::Deserialize(Reader, JsonObject))
	{

		//int32 recievedInt = JsonObject->GetIntegerField(objArray[0]->AsString());

		//Output it to the engine
		//GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Green, objArray[0]->AsString());
	}
}