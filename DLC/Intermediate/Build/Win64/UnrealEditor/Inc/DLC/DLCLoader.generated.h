// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DLC_DLCLoader_generated_h
#error "DLCLoader.generated.h already included, missing '#pragma once' in DLCLoader.h"
#endif
#define DLC_DLCLoader_generated_h

#define FID_DLC_Source_DLC_DLCLoader_h_32_SPARSE_DATA
#define FID_DLC_Source_DLC_DLCLoader_h_32_RPC_WRAPPERS
#define FID_DLC_Source_DLC_DLCLoader_h_32_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_DLC_Source_DLC_DLCLoader_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDLCLoader(); \
	friend struct Z_Construct_UClass_UDLCLoader_Statics; \
public: \
	DECLARE_CLASS(UDLCLoader, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DLC"), NO_API) \
	DECLARE_SERIALIZER(UDLCLoader)


#define FID_DLC_Source_DLC_DLCLoader_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUDLCLoader(); \
	friend struct Z_Construct_UClass_UDLCLoader_Statics; \
public: \
	DECLARE_CLASS(UDLCLoader, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DLC"), NO_API) \
	DECLARE_SERIALIZER(UDLCLoader)


#define FID_DLC_Source_DLC_DLCLoader_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDLCLoader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDLCLoader) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDLCLoader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDLCLoader); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDLCLoader(UDLCLoader&&); \
	NO_API UDLCLoader(const UDLCLoader&); \
public:


#define FID_DLC_Source_DLC_DLCLoader_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDLCLoader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDLCLoader(UDLCLoader&&); \
	NO_API UDLCLoader(const UDLCLoader&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDLCLoader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDLCLoader); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDLCLoader)


#define FID_DLC_Source_DLC_DLCLoader_h_29_PROLOG
#define FID_DLC_Source_DLC_DLCLoader_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DLC_Source_DLC_DLCLoader_h_32_SPARSE_DATA \
	FID_DLC_Source_DLC_DLCLoader_h_32_RPC_WRAPPERS \
	FID_DLC_Source_DLC_DLCLoader_h_32_INCLASS \
	FID_DLC_Source_DLC_DLCLoader_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_DLC_Source_DLC_DLCLoader_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DLC_Source_DLC_DLCLoader_h_32_SPARSE_DATA \
	FID_DLC_Source_DLC_DLCLoader_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DLC_Source_DLC_DLCLoader_h_32_INCLASS_NO_PURE_DECLS \
	FID_DLC_Source_DLC_DLCLoader_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DLC_API UClass* StaticClass<class UDLCLoader>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DLC_Source_DLC_DLCLoader_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
