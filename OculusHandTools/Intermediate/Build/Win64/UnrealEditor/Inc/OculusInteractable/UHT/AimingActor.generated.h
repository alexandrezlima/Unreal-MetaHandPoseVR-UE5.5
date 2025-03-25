// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AimingActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AInteractable;
#ifdef OCULUSINTERACTABLE_AimingActor_generated_h
#error "AimingActor.generated.h already included, missing '#pragma once' in AimingActor.h"
#endif
#define OCULUSINTERACTABLE_AimingActor_generated_h

#define FID_HostProject_Plugins_OculusHandTools_Source_OculusInteractable_Public_AimingActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Deactivate_Implementation(AInteractable* Selected); \
	virtual void Activate_Implementation(); \
	DECLARE_FUNCTION(execDeactivate); \
	DECLARE_FUNCTION(execActivate);


#define FID_HostProject_Plugins_OculusHandTools_Source_OculusInteractable_Public_AimingActor_h_18_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_OculusHandTools_Source_OculusInteractable_Public_AimingActor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAimingActor(); \
	friend struct Z_Construct_UClass_AAimingActor_Statics; \
public: \
	DECLARE_CLASS(AAimingActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteractable"), NO_API) \
	DECLARE_SERIALIZER(AAimingActor)


#define FID_HostProject_Plugins_OculusHandTools_Source_OculusInteractable_Public_AimingActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAimingActor(AAimingActor&&); \
	AAimingActor(const AAimingActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAimingActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAimingActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAimingActor) \
	NO_API virtual ~AAimingActor();


#define FID_HostProject_Plugins_OculusHandTools_Source_OculusInteractable_Public_AimingActor_h_15_PROLOG
#define FID_HostProject_Plugins_OculusHandTools_Source_OculusInteractable_Public_AimingActor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_OculusHandTools_Source_OculusInteractable_Public_AimingActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OculusHandTools_Source_OculusInteractable_Public_AimingActor_h_18_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_OculusHandTools_Source_OculusInteractable_Public_AimingActor_h_18_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OculusHandTools_Source_OculusInteractable_Public_AimingActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSINTERACTABLE_API UClass* StaticClass<class AAimingActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_OculusHandTools_Source_OculusInteractable_Public_AimingActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
