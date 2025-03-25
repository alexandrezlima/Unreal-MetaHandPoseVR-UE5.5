// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusUtilsLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UActorComponent;
#ifdef OCULUSUTILS_OculusUtilsLibrary_generated_h
#error "OculusUtilsLibrary.generated.h already included, missing '#pragma once' in OculusUtilsLibrary.h"
#endif
#define OCULUSUTILS_OculusUtilsLibrary_generated_h

#define FID_ep_vr_Plugins_OculusHandTools_Source_OculusUtils_Public_OculusUtilsLibrary_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBuildInfo(); \
	friend struct Z_Construct_UClass_UBuildInfo_Statics; \
public: \
	DECLARE_CLASS(UBuildInfo, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusUtils"), NO_API) \
	DECLARE_SERIALIZER(UBuildInfo) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_ep_vr_Plugins_OculusHandTools_Source_OculusUtils_Public_OculusUtilsLibrary_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBuildInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBuildInfo(UBuildInfo&&); \
	UBuildInfo(const UBuildInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBuildInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuildInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBuildInfo) \
	NO_API virtual ~UBuildInfo();


#define FID_ep_vr_Plugins_OculusHandTools_Source_OculusUtils_Public_OculusUtilsLibrary_h_19_PROLOG
#define FID_ep_vr_Plugins_OculusHandTools_Source_OculusUtils_Public_OculusUtilsLibrary_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ep_vr_Plugins_OculusHandTools_Source_OculusUtils_Public_OculusUtilsLibrary_h_22_INCLASS_NO_PURE_DECLS \
	FID_ep_vr_Plugins_OculusHandTools_Source_OculusUtils_Public_OculusUtilsLibrary_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSUTILS_API UClass* StaticClass<class UBuildInfo>();

#define FID_ep_vr_Plugins_OculusHandTools_Source_OculusUtils_Public_OculusUtilsLibrary_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSortComponentsByName); \
	DECLARE_FUNCTION(execGetOculusBuildInfo);


#define FID_ep_vr_Plugins_OculusHandTools_Source_OculusUtils_Public_OculusUtilsLibrary_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusUtilsLibrary(); \
	friend struct Z_Construct_UClass_UOculusUtilsLibrary_Statics; \
public: \
	DECLARE_CLASS(UOculusUtilsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusUtils"), NO_API) \
	DECLARE_SERIALIZER(UOculusUtilsLibrary)


#define FID_ep_vr_Plugins_OculusHandTools_Source_OculusUtils_Public_OculusUtilsLibrary_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusUtilsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOculusUtilsLibrary(UOculusUtilsLibrary&&); \
	UOculusUtilsLibrary(const UOculusUtilsLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusUtilsLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusUtilsLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusUtilsLibrary) \
	NO_API virtual ~UOculusUtilsLibrary();


#define FID_ep_vr_Plugins_OculusHandTools_Source_OculusUtils_Public_OculusUtilsLibrary_h_37_PROLOG
#define FID_ep_vr_Plugins_OculusHandTools_Source_OculusUtils_Public_OculusUtilsLibrary_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ep_vr_Plugins_OculusHandTools_Source_OculusUtils_Public_OculusUtilsLibrary_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ep_vr_Plugins_OculusHandTools_Source_OculusUtils_Public_OculusUtilsLibrary_h_40_INCLASS_NO_PURE_DECLS \
	FID_ep_vr_Plugins_OculusHandTools_Source_OculusUtils_Public_OculusUtilsLibrary_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSUTILS_API UClass* StaticClass<class UOculusUtilsLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ep_vr_Plugins_OculusHandTools_Source_OculusUtils_Public_OculusUtilsLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
