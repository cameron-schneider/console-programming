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
	WEBAPIPLUGIN_API UClass* Z_Construct_UClass_UHttpRestAPI_NoRegister();
	WEBAPIPLUGIN_API UClass* Z_Construct_UClass_UHttpRestAPI();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_WebAPIPlugin();
	WEBAPIPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FHttpHeaderInfo();
// End Cross Module References
	DEFINE_FUNCTION(UHttpRestAPI::execHttpCall)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_verb);
		P_GET_STRUCT(FHttpHeaderInfo,Z_Param_header);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HttpCall(Z_Param_URL,Z_Param_Out_verb,Z_Param_header);
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
			FString URL;
			FName verb;
			FHttpHeaderInfo header;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_verb_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_verb;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_header;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
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
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpRestAPI_HttpCall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpRestAPI_HttpCall_Statics::NewProp_URL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpRestAPI_HttpCall_Statics::NewProp_verb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpRestAPI_HttpCall_Statics::NewProp_header,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpRestAPI_HttpCall_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HttpRestAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpRestAPI_HttpCall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpRestAPI, nullptr, "HttpCall", nullptr, nullptr, sizeof(HttpRestAPI_eventHttpCall_Parms), Z_Construct_UFunction_UHttpRestAPI_HttpCall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpRestAPI_HttpCall_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpRestAPI_HttpCall_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpRestAPI_HttpCall_Statics::Function_MetaDataParams)) };
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
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPIPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHttpRestAPI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHttpRestAPI_HttpCall, "HttpCall" }, // 68458373
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
	IMPLEMENT_CLASS(UHttpRestAPI, 1563523398);
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
