// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DLC/MapInfoAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapInfoAsset() {}
// Cross Module References
	DLC_API UScriptStruct* Z_Construct_UScriptStruct_FMapInfo();
	UPackage* Z_Construct_UPackage__Script_DLC();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryAssetLabel_NoRegister();
	DLC_API UClass* Z_Construct_UClass_UMapInfoBlueprintFunctionLibrary_NoRegister();
	DLC_API UClass* Z_Construct_UClass_UMapInfoBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	DLC_API UClass* Z_Construct_UClass_UMapInfoAsset_NoRegister();
	DLC_API UClass* Z_Construct_UClass_UMapInfoAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MapInfo;
class UScriptStruct* FMapInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MapInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MapInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapInfo, Z_Construct_UPackage__Script_DLC(), TEXT("MapInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MapInfo.OuterSingleton;
}
template<> DLC_API UScriptStruct* StaticStruct<FMapInfo>()
{
	return FMapInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMapInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__name_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp__name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp__description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__primaryAsset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp__primaryAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__primaryAssetable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__primaryAssetable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "MapInfoAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMapInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp__name_MetaData[] = {
		{ "Category", "MapInfo" },
		{ "ModuleRelativePath", "MapInfoAsset.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp__name = { "_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapInfo, _name), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp__name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp__name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp__description_MetaData[] = {
		{ "Category", "MapInfo" },
		{ "ModuleRelativePath", "MapInfoAsset.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp__description = { "_description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapInfo, _description), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp__description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp__description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp__primaryAsset_MetaData[] = {
		{ "Category", "MapInfo" },
		{ "ModuleRelativePath", "MapInfoAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp__primaryAsset = { "_primaryAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapInfo, _primaryAsset), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp__primaryAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp__primaryAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp__primaryAssetable_MetaData[] = {
		{ "ModuleRelativePath", "MapInfoAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp__primaryAssetable = { "_primaryAssetable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapInfo, _primaryAssetable), Z_Construct_UClass_UPrimaryAssetLabel_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp__primaryAssetable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp__primaryAssetable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMapInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp__name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp__description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp__primaryAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp__primaryAssetable,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMapInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DLC,
		nullptr,
		&NewStructOps,
		"MapInfo",
		sizeof(FMapInfo),
		alignof(FMapInfo),
		Z_Construct_UScriptStruct_FMapInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMapInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMapInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_MapInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MapInfo.InnerSingleton, Z_Construct_UScriptStruct_FMapInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MapInfo.InnerSingleton;
	}
	DEFINE_FUNCTION(UMapInfoBlueprintFunctionLibrary::execGetLevelReference)
	{
		P_GET_STRUCT_REF(FMapInfo,Z_Param_Out_MyStructRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UMapInfoBlueprintFunctionLibrary::GetLevelReference(Z_Param_Out_MyStructRef);
		P_NATIVE_END;
	}
	void UMapInfoBlueprintFunctionLibrary::StaticRegisterNativesUMapInfoBlueprintFunctionLibrary()
	{
		UClass* Class = UMapInfoBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLevelReference", &UMapInfoBlueprintFunctionLibrary::execGetLevelReference },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMapInfoBlueprintFunctionLibrary_GetLevelReference_Statics
	{
		struct MapInfoBlueprintFunctionLibrary_eventGetLevelReference_Parms
		{
			FMapInfo MyStructRef;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyStructRef;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapInfoBlueprintFunctionLibrary_GetLevelReference_Statics::NewProp_MyStructRef = { "MyStructRef", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapInfoBlueprintFunctionLibrary_eventGetLevelReference_Parms, MyStructRef), Z_Construct_UScriptStruct_FMapInfo, METADATA_PARAMS(nullptr, 0) }; // 2960054592
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMapInfoBlueprintFunctionLibrary_GetLevelReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapInfoBlueprintFunctionLibrary_eventGetLevelReference_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapInfoBlueprintFunctionLibrary_GetLevelReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapInfoBlueprintFunctionLibrary_GetLevelReference_Statics::NewProp_MyStructRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapInfoBlueprintFunctionLibrary_GetLevelReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapInfoBlueprintFunctionLibrary_GetLevelReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "MapInfo|Methods" },
		{ "ModuleRelativePath", "MapInfoAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapInfoBlueprintFunctionLibrary_GetLevelReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapInfoBlueprintFunctionLibrary, nullptr, "GetLevelReference", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMapInfoBlueprintFunctionLibrary_GetLevelReference_Statics::MapInfoBlueprintFunctionLibrary_eventGetLevelReference_Parms), Z_Construct_UFunction_UMapInfoBlueprintFunctionLibrary_GetLevelReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapInfoBlueprintFunctionLibrary_GetLevelReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapInfoBlueprintFunctionLibrary_GetLevelReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapInfoBlueprintFunctionLibrary_GetLevelReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapInfoBlueprintFunctionLibrary_GetLevelReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapInfoBlueprintFunctionLibrary_GetLevelReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMapInfoBlueprintFunctionLibrary);
	UClass* Z_Construct_UClass_UMapInfoBlueprintFunctionLibrary_NoRegister()
	{
		return UMapInfoBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMapInfoBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMapInfoBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DLC,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMapInfoBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMapInfoBlueprintFunctionLibrary_GetLevelReference, "GetLevelReference" }, // 39360014
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapInfoBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MapInfoAsset.h" },
		{ "ModuleRelativePath", "MapInfoAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMapInfoBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapInfoBlueprintFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMapInfoBlueprintFunctionLibrary_Statics::ClassParams = {
		&UMapInfoBlueprintFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMapInfoBlueprintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMapInfoBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMapInfoBlueprintFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UMapInfoBlueprintFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMapInfoBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UMapInfoBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMapInfoBlueprintFunctionLibrary.OuterSingleton;
	}
	template<> DLC_API UClass* StaticClass<UMapInfoBlueprintFunctionLibrary>()
	{
		return UMapInfoBlueprintFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMapInfoBlueprintFunctionLibrary);
	void UMapInfoAsset::StaticRegisterNativesUMapInfoAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMapInfoAsset);
	UClass* Z_Construct_UClass_UMapInfoAsset_NoRegister()
	{
		return UMapInfoAsset::StaticClass();
	}
	struct Z_Construct_UClass_UMapInfoAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__mapInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp__mapInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMapInfoAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DLC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapInfoAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MapInfoAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "MapInfoAsset.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapInfoAsset_Statics::NewProp__mapInfo_MetaData[] = {
		{ "Category", "MapInfoAsset" },
		{ "ModuleRelativePath", "MapInfoAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapInfoAsset_Statics::NewProp__mapInfo = { "_mapInfo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapInfoAsset, _mapInfo), Z_Construct_UScriptStruct_FMapInfo, METADATA_PARAMS(Z_Construct_UClass_UMapInfoAsset_Statics::NewProp__mapInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapInfoAsset_Statics::NewProp__mapInfo_MetaData)) }; // 2960054592
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapInfoAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapInfoAsset_Statics::NewProp__mapInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMapInfoAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapInfoAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMapInfoAsset_Statics::ClassParams = {
		&UMapInfoAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMapInfoAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMapInfoAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMapInfoAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMapInfoAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMapInfoAsset()
	{
		if (!Z_Registration_Info_UClass_UMapInfoAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMapInfoAsset.OuterSingleton, Z_Construct_UClass_UMapInfoAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMapInfoAsset.OuterSingleton;
	}
	template<> DLC_API UClass* StaticClass<UMapInfoAsset>()
	{
		return UMapInfoAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMapInfoAsset);
	struct Z_CompiledInDeferFile_FID_DLC_Source_DLC_MapInfoAsset_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DLC_Source_DLC_MapInfoAsset_h_Statics::ScriptStructInfo[] = {
		{ FMapInfo::StaticStruct, Z_Construct_UScriptStruct_FMapInfo_Statics::NewStructOps, TEXT("MapInfo"), &Z_Registration_Info_UScriptStruct_MapInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMapInfo), 2960054592U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DLC_Source_DLC_MapInfoAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMapInfoBlueprintFunctionLibrary, UMapInfoBlueprintFunctionLibrary::StaticClass, TEXT("UMapInfoBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UMapInfoBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMapInfoBlueprintFunctionLibrary), 1560504631U) },
		{ Z_Construct_UClass_UMapInfoAsset, UMapInfoAsset::StaticClass, TEXT("UMapInfoAsset"), &Z_Registration_Info_UClass_UMapInfoAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMapInfoAsset), 29244219U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DLC_Source_DLC_MapInfoAsset_h_1855950067(TEXT("/Script/DLC"),
		Z_CompiledInDeferFile_FID_DLC_Source_DLC_MapInfoAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DLC_Source_DLC_MapInfoAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_DLC_Source_DLC_MapInfoAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DLC_Source_DLC_MapInfoAsset_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
