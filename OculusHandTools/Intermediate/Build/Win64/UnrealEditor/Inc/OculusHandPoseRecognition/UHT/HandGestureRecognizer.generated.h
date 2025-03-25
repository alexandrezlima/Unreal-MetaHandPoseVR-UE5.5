// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HandGestureRecognizer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGestureConsumptionBehavior : uint8;
enum class EGestureState : uint8;
#ifdef OCULUSHANDPOSERECOGNITION_HandGestureRecognizer_generated_h
#error "HandGestureRecognizer.generated.h already included, missing '#pragma once' in HandGestureRecognizer.h"
#endif
#define OCULUSHANDPOSERECOGNITION_HandGestureRecognizer_generated_h

#define FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandGestureRecognizer_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDumpAllGestureStates); \
	DECLARE_FUNCTION(execResetAllHandGestures); \
	DECLARE_FUNCTION(execResetHandGesture); \
	DECLARE_FUNCTION(execGetGestureRecognitionState); \
	DECLARE_FUNCTION(execGetRecognizedHandGesture);


#define FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandGestureRecognizer_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHandGestureRecognizer(); \
	friend struct Z_Construct_UClass_UHandGestureRecognizer_Statics; \
public: \
	DECLARE_CLASS(UHandGestureRecognizer, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusHandPoseRecognition"), NO_API) \
	DECLARE_SERIALIZER(UHandGestureRecognizer)


#define FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandGestureRecognizer_h_73_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHandGestureRecognizer(UHandGestureRecognizer&&); \
	UHandGestureRecognizer(const UHandGestureRecognizer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHandGestureRecognizer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHandGestureRecognizer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHandGestureRecognizer) \
	NO_API virtual ~UHandGestureRecognizer();


#define FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandGestureRecognizer_h_70_PROLOG
#define FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandGestureRecognizer_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandGestureRecognizer_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandGestureRecognizer_h_73_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandGestureRecognizer_h_73_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSHANDPOSERECOGNITION_API UClass* StaticClass<class UHandGestureRecognizer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandGestureRecognizer_h


#define FOREACH_ENUM_EGESTURECONSUMPTIONBEHAVIOR(op) \
	op(EGestureConsumptionBehavior::Reset) \
	op(EGestureConsumptionBehavior::ResetAll) \
	op(EGestureConsumptionBehavior::NoReset) 

enum class EGestureConsumptionBehavior : uint8;
template<> struct TIsUEnumClass<EGestureConsumptionBehavior> { enum { Value = true }; };
template<> OCULUSHANDPOSERECOGNITION_API UEnum* StaticEnum<EGestureConsumptionBehavior>();

#define FOREACH_ENUM_EGESTURESTRENGTHBONE(op) \
	op(EGestureStrengthBone::Thumb0) \
	op(EGestureStrengthBone::Thumb1) \
	op(EGestureStrengthBone::Thumb2) \
	op(EGestureStrengthBone::Thumb3) \
	op(EGestureStrengthBone::Index1) \
	op(EGestureStrengthBone::Index2) \
	op(EGestureStrengthBone::Index3) \
	op(EGestureStrengthBone::Middle1) \
	op(EGestureStrengthBone::Middle2) \
	op(EGestureStrengthBone::Middle3) \
	op(EGestureStrengthBone::Ring1) \
	op(EGestureStrengthBone::Ring2) \
	op(EGestureStrengthBone::Ring3) \
	op(EGestureStrengthBone::Pinky0) \
	op(EGestureStrengthBone::Pinky1) \
	op(EGestureStrengthBone::Pinky2) \
	op(EGestureStrengthBone::Pinky3) \
	op(EGestureStrengthBone::Wrist) 

enum class EGestureStrengthBone : uint8;
template<> struct TIsUEnumClass<EGestureStrengthBone> { enum { Value = true }; };
template<> OCULUSHANDPOSERECOGNITION_API UEnum* StaticEnum<EGestureStrengthBone>();

#define FOREACH_ENUM_EGESTURESTRENGTHBONEANGLE(op) \
	op(EGestureStrengthBoneAngle::Pitch) \
	op(EGestureStrengthBoneAngle::Yaw) \
	op(EGestureStrengthBoneAngle::Roll) 

enum class EGestureStrengthBoneAngle : uint8;
template<> struct TIsUEnumClass<EGestureStrengthBoneAngle> { enum { Value = true }; };
template<> OCULUSHANDPOSERECOGNITION_API UEnum* StaticEnum<EGestureStrengthBoneAngle>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
