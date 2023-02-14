// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DLC_DLCGameModeBase_generated_h
#error "DLCGameModeBase.generated.h already included, missing '#pragma once' in DLCGameModeBase.h"
#endif
#define DLC_DLCGameModeBase_generated_h

#define FID_DLC_Source_DLC_DLCGameModeBase_h_15_SPARSE_DATA
#define FID_DLC_Source_DLC_DLCGameModeBase_h_15_RPC_WRAPPERS
#define FID_DLC_Source_DLC_DLCGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_DLC_Source_DLC_DLCGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADLCGameModeBase(); \
	friend struct Z_Construct_UClass_ADLCGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ADLCGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/DLC"), NO_API) \
	DECLARE_SERIALIZER(ADLCGameModeBase)


#define FID_DLC_Source_DLC_DLCGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesADLCGameModeBase(); \
	friend struct Z_Construct_UClass_ADLCGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ADLCGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/DLC"), NO_API) \
	DECLARE_SERIALIZER(ADLCGameModeBase)


#define FID_DLC_Source_DLC_DLCGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADLCGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADLCGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADLCGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADLCGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADLCGameModeBase(ADLCGameModeBase&&); \
	NO_API ADLCGameModeBase(const ADLCGameModeBase&); \
public:


#define FID_DLC_Source_DLC_DLCGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADLCGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADLCGameModeBase(ADLCGameModeBase&&); \
	NO_API ADLCGameModeBase(const ADLCGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADLCGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADLCGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADLCGameModeBase)


#define FID_DLC_Source_DLC_DLCGameModeBase_h_12_PROLOG
#define FID_DLC_Source_DLC_DLCGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DLC_Source_DLC_DLCGameModeBase_h_15_SPARSE_DATA \
	FID_DLC_Source_DLC_DLCGameModeBase_h_15_RPC_WRAPPERS \
	FID_DLC_Source_DLC_DLCGameModeBase_h_15_INCLASS \
	FID_DLC_Source_DLC_DLCGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_DLC_Source_DLC_DLCGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DLC_Source_DLC_DLCGameModeBase_h_15_SPARSE_DATA \
	FID_DLC_Source_DLC_DLCGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DLC_Source_DLC_DLCGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_DLC_Source_DLC_DLCGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DLC_API UClass* StaticClass<class ADLCGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DLC_Source_DLC_DLCGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
