// Fill out your copyright notice in the Description page of Project Settings.


#include "HttpRestAPI.h"
#include "WebAPIPlugin.h"

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
