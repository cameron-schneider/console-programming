// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WebAPIPlugin/Public/WebAPIPlugin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebAPIPlugin() {}
// Cross Module References
	WEBAPIPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FHttpHeaderInfo();
	UPackage* Z_Construct_UPackage__Script_WebAPIPlugin();
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
		{ "ModuleRelativePath", "Public/WebAPIPlugin.h" },
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
		{ "ModuleRelativePath", "Public/WebAPIPlugin.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHttpHeaderInfo_Statics::NewProp_headerNames = { "headerNames", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHttpHeaderInfo, headerNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpHeaderInfo_Statics::NewProp_headerNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpHeaderInfo_Statics::NewProp_headerNames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHttpHeaderInfo_Statics::NewProp_headerValues_Inner = { "headerValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpHeaderInfo_Statics::NewProp_headerValues_MetaData[] = {
		{ "Category", "HttpHeaderInfo" },
		{ "ModuleRelativePath", "Public/WebAPIPlugin.h" },
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
	uint32 Get_Z_Construct_UScriptStruct_FHttpHeaderInfo_Hash() { return 1226208394U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
