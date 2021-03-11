// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WebAPIPlugin/Public/HttpRestAPI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpRestAPI() {}
// Cross Module References
	WEBAPIPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FHttpHeaderInfo();
	UPackage* Z_Construct_UPackage__Script_WebAPIPlugin();
	WEBAPIPLUGIN_API UClass* Z_Construct_UClass_UHttpRestAPI_NoRegister();
	WEBAPIPLUGIN_API UClass* Z_Construct_UClass_UHttpRestAPI();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
// End Cross Module References
class UScriptStruct* FHttpHeaderInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern WEBAPIPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FHttpHeaderInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHttpHeaderInfo, Z_Construct_UPackage__Script_WebAPIPlugin(), TEXT("HttpHeaderInfo"), sizeof(FHttpHeaderInfo), Get_Z_Construct_UScriptStruct_FHttpHeaderInfo_Hash());
	}
	return Singleton;
}
template<> WEBAPIPLUGIN_API UScriptStruct* StaticStruct<FHttpHeaderInfo>()
{
	return FHttpHeaderInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHttpHeaderInfo(FHttpHeaderInfo::StaticStruct, TEXT("/Script/WebAPIPlugin"), TEXT("HttpHeaderInfo"), false, nullptr, nullptr);
static struct FScriptStruct_WebAPIPlugin_StaticRegisterNativesFHttpHeaderInfo
{
	FScriptStruct_WebAPIPlugin_StaticRegisterNativesFHttpHeaderInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HttpHeaderInfo")),new UScriptStruct::TCppStructOps<FHttpHeaderInfo>);
	}
} ScriptStruct_WebAPIPlugin_StaticRegisterNativesFHttpHeaderInfo;
	struct Z_Construct_UScriptStruct_FHttpHeaderInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_headerNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_headerNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_headerNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_headerValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_headerValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_headerValues;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpHeaderInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HttpRestAPI.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHttpHeaderInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHttpHeaderInfo>();
	}
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHttpHeaderInfo_Statics::NewProp_headerNames_Inner = { "headerNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpHeaderInfo_Statics::NewProp_headerNames_MetaData[] = {
		{ "Category", "HttpHeaderInfo" },
		{ "ModuleRelativePath", "Public/HttpRestAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHttpHeaderInfo_Statics::NewProp_headerNames = { "headerNames", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHttpHeaderInfo, headerNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpHeaderInfo_Statics::NewProp_headerNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpHeaderInfo_Statics::NewProp_headerNames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHttpHeaderInfo_Statics::NewProp_headerValues_Inner = { "headerValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpHeaderInfo_Statics::NewProp_headerValues_MetaData[] = {
		{ "Category", "HttpHeaderInfo" },
		{ "ModuleRelativePath", "Public/HttpRestAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHttpHeaderInfo_Statics::NewProp_headerValues = { "headerValues", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHttpHeaderInfo, headerValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpHeaderInfo_Statics::NewProp_headerValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpHeaderInfo_Statics::NewProp_headerValues_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHttpHeaderInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpHeaderInfo_Statics::NewProp_headerNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpHeaderInfo_Statics::NewProp_headerNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpHeaderInfo_Statics::NewProp_headerValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpHeaderInfo_Statics::NewProp_headerValues,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHttpHeaderInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPIPlugin,
		nullptr,
		&NewStructOps,
		"HttpHeaderInfo",
		sizeof(FHttpHeaderInfo),
		alignof(FHttpHeaderInfo),
		Z_Construct_UScriptStruct_FHttpHeaderInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpHeaderInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpHeaderInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpHeaderInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHttpHeaderInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHttpHeaderInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_WebAPIPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HttpHeaderInfo"), sizeof(FHttpHeaderInfo), Get_Z_Construct_UScriptStruct_FHttpHeaderInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHttpHeaderInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHttpHeaderInfo_Hash() { return 2319863382U; }
	DEFINE_FUNCTION(UHttpRestAPI::execHttpCall)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Result);
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_verb);
		P_GET_STRUCT(FHttpHeaderInfo,Z_Param_header);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHttpRestAPI::HttpCall(Z_Param_WorldContextObject,Z_Param_Out_Result,Z_Param_URL,Z_Param_Out_verb,Z_Param_header,Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	void UHttpRestAPI::StaticRegisterNativesUHttpRestAPI()
	{
		UClass* Class = UHttpRestAPI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HttpCall", &UHttpRestAPI::execHttpCall },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHttpRestAPI_HttpCall_Statics
	{
		struct HttpRestAPI_eventHttpCall_Parms
		{
			UObject* WorldContextObject;
			FString Result;
			FString URL;
			FName verb;
			FHttpHeaderInfo header;
			FLatentActionInfo LatentInfo;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_verb_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_verb;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_header;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHttpRestAPI_HttpCall_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HttpRestAPI_eventHttpCall_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpRestAPI_HttpCall_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HttpRestAPI_eventHttpCall_Parms, Result), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpRestAPI_HttpCall_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpRestAPI_HttpCall_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HttpRestAPI_eventHttpCall_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_UHttpRestAPI_HttpCall_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpRestAPI_HttpCall_Statics::NewProp_URL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpRestAPI_HttpCall_Statics::NewProp_verb_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHttpRestAPI_HttpCall_Statics::NewProp_verb = { "verb", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HttpRestAPI_eventHttpCall_Parms, verb), METADATA_PARAMS(Z_Construct_UFunction_UHttpRestAPI_HttpCall_Statics::NewProp_verb_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpRestAPI_HttpCall_Statics::NewProp_verb_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpRestAPI_HttpCall_Statics::NewProp_header = { "header", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HttpRestAPI_eventHttpCall_Parms, header), Z_Construct_UScriptStruct_FHttpHeaderInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpRestAPI_HttpCall_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HttpRestAPI_eventHttpCall_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpRestAPI_HttpCall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpRestAPI_HttpCall_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpRestAPI_HttpCall_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpRestAPI_HttpCall_Statics::NewProp_URL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpRestAPI_HttpCall_Statics::NewProp_verb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpRestAPI_HttpCall_Statics::NewProp_header,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpRestAPI_HttpCall_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpRestAPI_HttpCall_Statics::Function_MetaDataParams[] = {
		{ "CallableWithoutWorldContext", "" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/HttpRestAPI.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpRestAPI_HttpCall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpRestAPI, nullptr, "HttpCall", nullptr, nullptr, sizeof(HttpRestAPI_eventHttpCall_Parms), Z_Construct_UFunction_UHttpRestAPI_HttpCall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpRestAPI_HttpCall_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpRestAPI_HttpCall_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpRestAPI_HttpCall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpRestAPI_HttpCall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHttpRestAPI_HttpCall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHttpRestAPI_NoRegister()
	{
		return UHttpRestAPI::StaticClass();
	}
	struct Z_Construct_UClass_UHttpRestAPI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHttpRestAPI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPIPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHttpRestAPI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHttpRestAPI_HttpCall, "HttpCall" }, // 2841413240
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHttpRestAPI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HttpRestAPI.h" },
		{ "ModuleRelativePath", "Public/HttpRestAPI.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHttpRestAPI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHttpRestAPI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHttpRestAPI_Statics::ClassParams = {
		&UHttpRestAPI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHttpRestAPI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHttpRestAPI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHttpRestAPI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHttpRestAPI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHttpRestAPI, 3942303531);
	template<> WEBAPIPLUGIN_API UClass* StaticClass<UHttpRestAPI>()
	{
		return UHttpRestAPI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHttpRestAPI(Z_Construct_UClass_UHttpRestAPI, &UHttpRestAPI::StaticClass, TEXT("/Script/WebAPIPlugin"), TEXT("UHttpRestAPI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHttpRestAPI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
