// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DLC/DLCGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDLCGameInstance() {}
// Cross Module References
	DLC_API UClass* Z_Construct_UClass_UDLCGameInstance_NoRegister();
	DLC_API UClass* Z_Construct_UClass_UDLCGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_DLC();
	DLC_API UScriptStruct* Z_Construct_UScriptStruct_FMapInfo();
	DLC_API UClass* Z_Construct_UClass_UDLCLoader_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDLCGameInstance::execGetMapInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FMapInfo>*)Z_Param__Result=P_THIS->GetMapInfo();
		P_NATIVE_END;
	}
	void UDLCGameInstance::StaticRegisterNativesUDLCGameInstance()
	{
		UClass* Class = UDLCGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMapInfo", &UDLCGameInstance::execGetMapInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDLCGameInstance_GetMapInfo_Statics
	{
		struct DLCGameInstance_eventGetMapInfo_Parms
		{
			TArray<FMapInfo> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDLCGameInstance_GetMapInfo_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMapInfo, METADATA_PARAMS(nullptr, 0) }; // 2960054592
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDLCGameInstance_GetMapInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DLCGameInstance_eventGetMapInfo_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2960054592
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDLCGameInstance_GetMapInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLCGameInstance_GetMapInfo_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLCGameInstance_GetMapInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDLCGameInstance_GetMapInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DLCGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDLCGameInstance_GetMapInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDLCGameInstance, nullptr, "GetMapInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDLCGameInstance_GetMapInfo_Statics::DLCGameInstance_eventGetMapInfo_Parms), Z_Construct_UFunction_UDLCGameInstance_GetMapInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLCGameInstance_GetMapInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDLCGameInstance_GetMapInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLCGameInstance_GetMapInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDLCGameInstance_GetMapInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDLCGameInstance_GetMapInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDLCGameInstance);
	UClass* Z_Construct_UClass_UDLCGameInstance_NoRegister()
	{
		return UDLCGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UDLCGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__DLCLoader_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__DLCLoader;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDLCGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DLC,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDLCGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDLCGameInstance_GetMapInfo, "GetMapInfo" }, // 4152951421
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDLCGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DLCGameInstance.h" },
		{ "ModuleRelativePath", "DLCGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDLCGameInstance_Statics::NewProp__DLCLoader_MetaData[] = {
		{ "ModuleRelativePath", "DLCGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDLCGameInstance_Statics::NewProp__DLCLoader = { "_DLCLoader", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDLCGameInstance, _DLCLoader), Z_Construct_UClass_UDLCLoader_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDLCGameInstance_Statics::NewProp__DLCLoader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDLCGameInstance_Statics::NewProp__DLCLoader_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDLCGameInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDLCGameInstance_Statics::NewProp__DLCLoader,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDLCGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDLCGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDLCGameInstance_Statics::ClassParams = {
		&UDLCGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDLCGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDLCGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDLCGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDLCGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDLCGameInstance()
	{
		if (!Z_Registration_Info_UClass_UDLCGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDLCGameInstance.OuterSingleton, Z_Construct_UClass_UDLCGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDLCGameInstance.OuterSingleton;
	}
	template<> DLC_API UClass* StaticClass<UDLCGameInstance>()
	{
		return UDLCGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDLCGameInstance);
	struct Z_CompiledInDeferFile_FID_DLC_Source_DLC_DLCGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DLC_Source_DLC_DLCGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDLCGameInstance, UDLCGameInstance::StaticClass, TEXT("UDLCGameInstance"), &Z_Registration_Info_UClass_UDLCGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDLCGameInstance), 3225089146U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DLC_Source_DLC_DLCGameInstance_h_4164062321(TEXT("/Script/DLC"),
		Z_CompiledInDeferFile_FID_DLC_Source_DLC_DLCGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DLC_Source_DLC_DLCGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
