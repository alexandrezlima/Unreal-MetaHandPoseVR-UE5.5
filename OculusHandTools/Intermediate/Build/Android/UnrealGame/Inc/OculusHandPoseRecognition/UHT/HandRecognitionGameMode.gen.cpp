// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusHandPoseRecognition/Public/HandRecognitionGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHandRecognitionGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
OCULUSHANDPOSERECOGNITION_API UClass* Z_Construct_UClass_AHandRecognitionGameMode();
OCULUSHANDPOSERECOGNITION_API UClass* Z_Construct_UClass_AHandRecognitionGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusHandPoseRecognition();
// End Cross Module References

// Begin Class AHandRecognitionGameMode Function LogHandPose
struct Z_Construct_UFunction_AHandRecognitionGameMode_LogHandPose_Statics
{
	struct HandRecognitionGameMode_eventLogHandPose_Parms
	{
		FString Side;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Prints a hand pose string in the output log.\n\x09 * @param Side - Either \"left\" or \"right\", case insensitive.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HandRecognitionGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prints a hand pose string in the output log.\n@param Side - Either \"left\" or \"right\", case insensitive." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Side;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AHandRecognitionGameMode_LogHandPose_Statics::NewProp_Side = { "Side", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandRecognitionGameMode_eventLogHandPose_Parms, Side), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHandRecognitionGameMode_LogHandPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHandRecognitionGameMode_LogHandPose_Statics::NewProp_Side,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHandRecognitionGameMode_LogHandPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHandRecognitionGameMode_LogHandPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHandRecognitionGameMode, nullptr, "LogHandPose", nullptr, nullptr, Z_Construct_UFunction_AHandRecognitionGameMode_LogHandPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHandRecognitionGameMode_LogHandPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHandRecognitionGameMode_LogHandPose_Statics::HandRecognitionGameMode_eventLogHandPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHandRecognitionGameMode_LogHandPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHandRecognitionGameMode_LogHandPose_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHandRecognitionGameMode_LogHandPose_Statics::HandRecognitionGameMode_eventLogHandPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHandRecognitionGameMode_LogHandPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHandRecognitionGameMode_LogHandPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHandRecognitionGameMode::execLogHandPose)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Side);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LogHandPose(Z_Param_Side);
	P_NATIVE_END;
}
// End Class AHandRecognitionGameMode Function LogHandPose

// Begin Class AHandRecognitionGameMode
void AHandRecognitionGameMode::StaticRegisterNativesAHandRecognitionGameMode()
{
	UClass* Class = AHandRecognitionGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LogHandPose", &AHandRecognitionGameMode::execLogHandPose },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHandRecognitionGameMode);
UClass* Z_Construct_UClass_AHandRecognitionGameMode_NoRegister()
{
	return AHandRecognitionGameMode::StaticClass();
}
struct Z_Construct_UClass_AHandRecognitionGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A game mode that offers some console commands to write poses to the log.\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "HandRecognitionGameMode.h" },
		{ "ModuleRelativePath", "Public/HandRecognitionGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A game mode that offers some console commands to write poses to the log." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AHandRecognitionGameMode_LogHandPose, "LogHandPose" }, // 1337782332
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHandRecognitionGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHandRecognitionGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusHandPoseRecognition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHandRecognitionGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHandRecognitionGameMode_Statics::ClassParams = {
	&AHandRecognitionGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHandRecognitionGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AHandRecognitionGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHandRecognitionGameMode()
{
	if (!Z_Registration_Info_UClass_AHandRecognitionGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHandRecognitionGameMode.OuterSingleton, Z_Construct_UClass_AHandRecognitionGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHandRecognitionGameMode.OuterSingleton;
}
template<> OCULUSHANDPOSERECOGNITION_API UClass* StaticClass<AHandRecognitionGameMode>()
{
	return AHandRecognitionGameMode::StaticClass();
}
AHandRecognitionGameMode::AHandRecognitionGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHandRecognitionGameMode);
AHandRecognitionGameMode::~AHandRecognitionGameMode() {}
// End Class AHandRecognitionGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_ep_vr_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandRecognitionGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHandRecognitionGameMode, AHandRecognitionGameMode::StaticClass, TEXT("AHandRecognitionGameMode"), &Z_Registration_Info_UClass_AHandRecognitionGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHandRecognitionGameMode), 4028683219U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ep_vr_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandRecognitionGameMode_h_2797669167(TEXT("/Script/OculusHandPoseRecognition"),
	Z_CompiledInDeferFile_FID_ep_vr_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandRecognitionGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ep_vr_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandRecognitionGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
