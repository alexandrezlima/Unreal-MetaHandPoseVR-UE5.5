// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interactable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AInteractableSelector;
#ifdef OCULUSINTERACTABLE_Interactable_generated_h
#error "Interactable.generated.h already included, missing '#pragma once' in Interactable.h"
#endif
#define OCULUSINTERACTABLE_Interactable_generated_h

#define FID_ep_vr_Plugins_OculusHandTools_Source_OculusInteractable_Public_Interactable_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetInteractablePhysicsSimulation_Implementation(bool SimulatePhysics); \
	virtual void EndSelection_Implementation(AInteractableSelector* Selector); \
	virtual void BeginSelection_Implementation(AInteractableSelector* Selector); \
	DECLARE_FUNCTION(execSetInteractablePhysicsSimulation); \
	DECLARE_FUNCTION(execIsSelected); \
	DECLARE_FUNCTION(execEndSelection); \
	DECLARE_FUNCTION(execBeginSelection);


#define FID_ep_vr_Plugins_OculusHandTools_Source_OculusInteractable_Public_Interactable_h_21_CALLBACK_WRAPPERS
#define FID_ep_vr_Plugins_OculusHandTools_Source_OculusInteractable_Public_Interactable_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractable(); \
	friend struct Z_Construct_UClass_AInteractable_Statics; \
public: \
	DECLARE_CLASS(AInteractable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteractable"), NO_API) \
	DECLARE_SERIALIZER(AInteractable)


#define FID_ep_vr_Plugins_OculusHandTools_Source_OculusInteractable_Public_Interactable_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AInteractable(AInteractable&&); \
	AInteractable(const AInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractable) \
	NO_API virtual ~AInteractable();


#define FID_ep_vr_Plugins_OculusHandTools_Source_OculusInteractable_Public_Interactable_h_18_PROLOG
#define FID_ep_vr_Plugins_OculusHandTools_Source_OculusInteractable_Public_Interactable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ep_vr_Plugins_OculusHandTools_Source_OculusInteractable_Public_Interactable_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ep_vr_Plugins_OculusHandTools_Source_OculusInteractable_Public_Interactable_h_21_CALLBACK_WRAPPERS \
	FID_ep_vr_Plugins_OculusHandTools_Source_OculusInteractable_Public_Interactable_h_21_INCLASS_NO_PURE_DECLS \
	FID_ep_vr_Plugins_OculusHandTools_Source_OculusInteractable_Public_Interactable_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSINTERACTABLE_API UClass* StaticClass<class AInteractable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ep_vr_Plugins_OculusHandTools_Source_OculusInteractable_Public_Interactable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
