// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractableSelector.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AInteractable;
#ifdef OCULUSINTERACTABLE_InteractableSelector_generated_h
#error "InteractableSelector.generated.h already included, missing '#pragma once' in InteractableSelector.h"
#endif
#define OCULUSINTERACTABLE_InteractableSelector_generated_h

#define FID_ep_vr_Plugins_OculusHandTools_Source_OculusInteractable_Public_InteractableSelector_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNonInteractableHit); \
	DECLARE_FUNCTION(execGetSelectedInteractable); \
	DECLARE_FUNCTION(execActivateSelector);


#define FID_ep_vr_Plugins_OculusHandTools_Source_OculusInteractable_Public_InteractableSelector_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractableSelector(); \
	friend struct Z_Construct_UClass_AInteractableSelector_Statics; \
public: \
	DECLARE_CLASS(AInteractableSelector, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteractable"), NO_API) \
	DECLARE_SERIALIZER(AInteractableSelector)


#define FID_ep_vr_Plugins_OculusHandTools_Source_OculusInteractable_Public_InteractableSelector_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AInteractableSelector(AInteractableSelector&&); \
	AInteractableSelector(const AInteractableSelector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractableSelector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractableSelector); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractableSelector) \
	NO_API virtual ~AInteractableSelector();


#define FID_ep_vr_Plugins_OculusHandTools_Source_OculusInteractable_Public_InteractableSelector_h_23_PROLOG
#define FID_ep_vr_Plugins_OculusHandTools_Source_OculusInteractable_Public_InteractableSelector_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ep_vr_Plugins_OculusHandTools_Source_OculusInteractable_Public_InteractableSelector_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ep_vr_Plugins_OculusHandTools_Source_OculusInteractable_Public_InteractableSelector_h_28_INCLASS_NO_PURE_DECLS \
	FID_ep_vr_Plugins_OculusHandTools_Source_OculusInteractable_Public_InteractableSelector_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSINTERACTABLE_API UClass* StaticClass<class AInteractableSelector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ep_vr_Plugins_OculusHandTools_Source_OculusInteractable_Public_InteractableSelector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
