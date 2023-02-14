// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDLC_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DLC;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DLC()
	{
		if (!Z_Registration_Info_UPackage__Script_DLC.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DLC",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x01AD7E44,
				0x5E9765C2,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DLC.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DLC.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DLC(Z_Construct_UPackage__Script_DLC, TEXT("/Script/DLC"), Z_Registration_Info_UPackage__Script_DLC, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x01AD7E44, 0x5E9765C2));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
