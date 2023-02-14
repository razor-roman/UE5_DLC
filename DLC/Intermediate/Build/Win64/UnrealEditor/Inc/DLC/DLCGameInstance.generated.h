// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMapInfo;
#ifdef DLC_DLCGameInstance_generated_h
#error "DLCGameInstance.generated.h already included, missing '#pragma once' in DLCGameInstance.h"
#endif
#define DLC_DLCGameInstance_generated_h

#define FID_DLC_Source_DLC_DLCGameInstance_h_17_SPARSE_DATA
#define FID_DLC_Source_DLC_DLCGameInstance_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMapInfo);


#define FID_DLC_Source_DLC_DLCGameInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMapInfo);


#define FID_DLC_Source_DLC_DLCGameInstance_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDLCGameInstance(); \
	friend struct Z_Construct_UClass_UDLCGameInstance_Statics; \
public: \
	DECLARE_CLASS(UDLCGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DLC"), NO_API) \
	DECLARE_SERIALIZER(UDLCGameInstance)


#define FID_DLC_Source_DLC_DLCGameInstance_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUDLCGameInstance(); \
	friend struct Z_Construct_UClass_UDLCGameInstance_Statics; \
public: \
	DECLARE_CLASS(UDLCGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DLC"), NO_API) \
	DECLARE_SERIALIZER(UDLCGameInstance)


#define FID_DLC_Source_DLC_DLCGameInstance_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDLCGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDLCGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDLCGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDLCGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDLCGameInstance(UDLCGameInstance&&); \
	NO_API UDLCGameInstance(const UDLCGameInstance&); \
public:


#define FID_DLC_Source_DLC_DLCGameInstance_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDLCGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDLCGameInstance(UDLCGameInstance&&); \
	NO_API UDLCGameInstance(const UDLCGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDLCGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDLCGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDLCGameInstance)


#define FID_DLC_Source_DLC_DLCGameInstance_h_14_PROLOG
#define FID_DLC_Source_DLC_DLCGameInstance_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DLC_Source_DLC_DLCGameInstance_h_17_SPARSE_DATA \
	FID_DLC_Source_DLC_DLCGameInstance_h_17_RPC_WRAPPERS \
	FID_DLC_Source_DLC_DLCGameInstance_h_17_INCLASS \
	FID_DLC_Source_DLC_DLCGameInstance_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_DLC_Source_DLC_DLCGameInstance_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DLC_Source_DLC_DLCGameInstance_h_17_SPARSE_DATA \
	FID_DLC_Source_DLC_DLCGameInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DLC_Source_DLC_DLCGameInstance_h_17_INCLASS_NO_PURE_DECLS \
	FID_DLC_Source_DLC_DLCGameInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DLC_API UClass* StaticClass<class UDLCGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DLC_Source_DLC_DLCGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
