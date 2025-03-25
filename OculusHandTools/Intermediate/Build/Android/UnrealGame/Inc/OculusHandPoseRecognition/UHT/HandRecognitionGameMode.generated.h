// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HandRecognitionGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OCULUSHANDPOSERECOGNITION_HandRecognitionGameMode_generated_h
#error "HandRecognitionGameMode.generated.h already included, missing '#pragma once' in HandRecognitionGameMode.h"
#endif
#define OCULUSHANDPOSERECOGNITION_HandRecognitionGameMode_generated_h

#define FID_ep_vr_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandRecognitionGameMode_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLogHandPose);


#define FID_ep_vr_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandRecognitionGameMode_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHandRecognitionGameMode(); \
	friend struct Z_Construct_UClass_AHandRecognitionGameMode_Statics; \
public: \
	DECLARE_CLASS(AHandRecognitionGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusHandPoseRecognition"), NO_API) \
	DECLARE_SERIALIZER(AHandRecognitionGameMode)


#define FID_ep_vr_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandRecognitionGameMode_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHandRecognitionGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHandRecognitionGameMode(AHandRecognitionGameMode&&); \
	AHandRecognitionGameMode(const AHandRecognitionGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHandRecognitionGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHandRecognitionGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHandRecognitionGameMode) \
	NO_API virtual ~AHandRecognitionGameMode();


#define FID_ep_vr_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandRecognitionGameMode_h_19_PROLOG
#define FID_ep_vr_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandRecognitionGameMode_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ep_vr_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandRecognitionGameMode_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ep_vr_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandRecognitionGameMode_h_22_INCLASS_NO_PURE_DECLS \
	FID_ep_vr_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandRecognitionGameMode_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSHANDPOSERECOGNITION_API UClass* StaticClass<class AHandRecognitionGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ep_vr_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandRecognitionGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
