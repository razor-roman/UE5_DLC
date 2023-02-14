// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DLC/DLCLoader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDLCLoader() {}
// Cross Module References
	DLC_API UClass* Z_Construct_UClass_UDLCLoader_NoRegister();
	DLC_API UClass* Z_Construct_UClass_UDLCLoader();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DLC();
	DLC_API UScriptStruct* Z_Construct_UScriptStruct_FMapInfo();
// End Cross Module References
	void UDLCLoader::StaticRegisterNativesUDLCLoader()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDLCLoader);
	UClass* Z_Construct_UClass_UDLCLoader_NoRegister()
	{
		return UDLCLoader::StaticClass();
	}
	struct Z_Construct_UClass_UDLCLoader_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp__mapsInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__mapsInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp__mapsInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDLCLoader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DLC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDLCLoader_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DLCLoader.h" },
		{ "ModuleRelativePath", "DLCLoader.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDLCLoader_Statics::NewProp__mapsInfo_Inner = { "_mapsInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMapInfo, METADATA_PARAMS(nullptr, 0) }; // 2960054592
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDLCLoader_Statics::NewProp__mapsInfo_MetaData[] = {
		{ "ModuleRelativePath", "DLCLoader.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDLCLoader_Statics::NewProp__mapsInfo = { "_mapsInfo", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDLCLoader, _mapsInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDLCLoader_Statics::NewProp__mapsInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDLCLoader_Statics::NewProp__mapsInfo_MetaData)) }; // 2960054592
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDLCLoader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDLCLoader_Statics::NewProp__mapsInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDLCLoader_Statics::NewProp__mapsInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDLCLoader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDLCLoader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDLCLoader_Statics::ClassParams = {
		&UDLCLoader::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDLCLoader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDLCLoader_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDLCLoader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDLCLoader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDLCLoader()
	{
		if (!Z_Registration_Info_UClass_UDLCLoader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDLCLoader.OuterSingleton, Z_Construct_UClass_UDLCLoader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDLCLoader.OuterSingleton;
	}
	template<> DLC_API UClass* StaticClass<UDLCLoader>()
	{
		return UDLCLoader::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDLCLoader);
	struct Z_CompiledInDeferFile_FID_DLC_Source_DLC_DLCLoader_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DLC_Source_DLC_DLCLoader_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDLCLoader, UDLCLoader::StaticClass, TEXT("UDLCLoader"), &Z_Registration_Info_UClass_UDLCLoader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDLCLoader), 1652467340U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DLC_Source_DLC_DLCLoader_h_3160860696(TEXT("/Script/DLC"),
		Z_CompiledInDeferFile_FID_DLC_Source_DLC_DLCLoader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DLC_Source_DLC_DLCLoader_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
