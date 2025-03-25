// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HandPoseRecognizer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OCULUSHANDPOSERECOGNITION_HandPoseRecognizer_generated_h
#error "HandPoseRecognizer.generated.h already included, missing '#pragma once' in HandPoseRecognizer.h"
#endif
#define OCULUSHANDPOSERECOGNITION_HandPoseRecognizer_generated_h

#define FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandPoseRecognizer_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLogEncodedHandPose); \
	DECLARE_FUNCTION(execGetRecognizedHandPose);


#define FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandPoseRecognizer_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHandPoseRecognizer(); \
	friend struct Z_Construct_UClass_UHandPoseRecognizer_Statics; \
public: \
	DECLARE_CLASS(UHandPoseRecognizer, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusHandPoseRecognition"), NO_API) \
	DECLARE_SERIALIZER(UHandPoseRecognizer)


#define FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandPoseRecognizer_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHandPoseRecognizer(UHandPoseRecognizer&&); \
	UHandPoseRecognizer(const UHandPoseRecognizer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHandPoseRecognizer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHandPoseRecognizer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHandPoseRecognizer) \
	NO_API virtual ~UHandPoseRecognizer();


#define FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandPoseRecognizer_h_23_PROLOG
#define FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandPoseRecognizer_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandPoseRecognizer_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandPoseRecognizer_h_26_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandPoseRecognizer_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSHANDPOSERECOGNITION_API UClass* StaticClass<class UHandPoseRecognizer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandPoseRecognizer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
