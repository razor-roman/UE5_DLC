// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DLC/DLCGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDLCGameModeBase() {}
// Cross Module References
	DLC_API UClass* Z_Construct_UClass_ADLCGameModeBase_NoRegister();
	DLC_API UClass* Z_Construct_UClass_ADLCGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DLC();
// End Cross Module References
	void ADLCGameModeBase::StaticRegisterNativesADLCGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADLCGameModeBase);
	UClass* Z_Construct_UClass_ADLCGameModeBase_NoRegister()
	{
		return ADLCGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ADLCGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADLCGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DLC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADLCGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DLCGameModeBase.h" },
		{ "ModuleRelativePath", "DLCGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADLCGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADLCGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADLCGameModeBase_Statics::ClassParams = {
		&ADLCGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADLCGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADLCGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADLCGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ADLCGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADLCGameModeBase.OuterSingleton, Z_Construct_UClass_ADLCGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADLCGameModeBase.OuterSingleton;
	}
	template<> DLC_API UClass* StaticClass<ADLCGameModeBase>()
	{
		return ADLCGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADLCGameModeBase);
	struct Z_CompiledInDeferFile_FID_DLC_Source_DLC_DLCGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DLC_Source_DLC_DLCGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADLCGameModeBase, ADLCGameModeBase::StaticClass, TEXT("ADLCGameModeBase"), &Z_Registration_Info_UClass_ADLCGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADLCGameModeBase), 605756155U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DLC_Source_DLC_DLCGameModeBase_h_1452339476(TEXT("/Script/DLC"),
		Z_CompiledInDeferFile_FID_DLC_Source_DLC_DLCGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DLC_Source_DLC_DLCGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
