// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPMoCap/Public/MPMoCapTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMPMoCapTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	MPMOCAP_API UScriptStruct* Z_Construct_UScriptStruct_FMPMoCapAnimationData();
	MPMOCAP_API UScriptStruct* Z_Construct_UScriptStruct_FMPMoCapBlendshapeData();
	MPMOCAP_API UScriptStruct* Z_Construct_UScriptStruct_FMPMoCapRawData();
	UPackage* Z_Construct_UPackage__Script_MPMoCap();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MPMoCapRawData;
class UScriptStruct* FMPMoCapRawData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MPMoCapRawData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MPMoCapRawData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMPMoCapRawData, Z_Construct_UPackage__Script_MPMoCap(), TEXT("MPMoCapRawData"));
	}
	return Z_Registration_Info_UScriptStruct_MPMoCapRawData.OuterSingleton;
}
template<> MPMOCAP_API UScriptStruct* StaticStruct<FMPMoCapRawData>()
{
	return FMPMoCapRawData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMPMoCapRawData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Blendshapes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Blendshapes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Blendshapes;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeadRotation_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadRotation_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HeadRotation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftEyeRotation_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftEyeRotation_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LeftEyeRotation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RightEyeRotation_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightEyeRotation_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RightEyeRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapRawData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMPMoCapRawData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMPMoCapRawData>();
	}
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapRawData_Statics::NewProp_Blendshapes_Inner = { "Blendshapes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapRawData_Statics::NewProp_Blendshapes_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMPMoCapRawData_Statics::NewProp_Blendshapes = { "Blendshapes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapRawData, Blendshapes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapRawData_Statics::NewProp_Blendshapes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapRawData_Statics::NewProp_Blendshapes_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapRawData_Statics::NewProp_HeadRotation_Inner = { "HeadRotation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapRawData_Statics::NewProp_HeadRotation_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMPMoCapRawData_Statics::NewProp_HeadRotation = { "HeadRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapRawData, HeadRotation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapRawData_Statics::NewProp_HeadRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapRawData_Statics::NewProp_HeadRotation_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapRawData_Statics::NewProp_LeftEyeRotation_Inner = { "LeftEyeRotation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapRawData_Statics::NewProp_LeftEyeRotation_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMPMoCapRawData_Statics::NewProp_LeftEyeRotation = { "LeftEyeRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapRawData, LeftEyeRotation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapRawData_Statics::NewProp_LeftEyeRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapRawData_Statics::NewProp_LeftEyeRotation_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapRawData_Statics::NewProp_RightEyeRotation_Inner = { "RightEyeRotation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapRawData_Statics::NewProp_RightEyeRotation_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMPMoCapRawData_Statics::NewProp_RightEyeRotation = { "RightEyeRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapRawData, RightEyeRotation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapRawData_Statics::NewProp_RightEyeRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapRawData_Statics::NewProp_RightEyeRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMPMoCapRawData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapRawData_Statics::NewProp_Blendshapes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapRawData_Statics::NewProp_Blendshapes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapRawData_Statics::NewProp_HeadRotation_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapRawData_Statics::NewProp_HeadRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapRawData_Statics::NewProp_LeftEyeRotation_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapRawData_Statics::NewProp_LeftEyeRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapRawData_Statics::NewProp_RightEyeRotation_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapRawData_Statics::NewProp_RightEyeRotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMPMoCapRawData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MPMoCap,
		nullptr,
		&NewStructOps,
		"MPMoCapRawData",
		sizeof(FMPMoCapRawData),
		alignof(FMPMoCapRawData),
		Z_Construct_UScriptStruct_FMPMoCapRawData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapRawData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapRawData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapRawData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMPMoCapRawData()
	{
		if (!Z_Registration_Info_UScriptStruct_MPMoCapRawData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MPMoCapRawData.InnerSingleton, Z_Construct_UScriptStruct_FMPMoCapRawData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MPMoCapRawData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MPMoCapBlendshapeData;
class UScriptStruct* FMPMoCapBlendshapeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MPMoCapBlendshapeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MPMoCapBlendshapeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData, Z_Construct_UPackage__Script_MPMoCap(), TEXT("MPMoCapBlendshapeData"));
	}
	return Z_Registration_Info_UScriptStruct_MPMoCapBlendshapeData.OuterSingleton;
}
template<> MPMOCAP_API UScriptStruct* StaticStruct<FMPMoCapBlendshapeData>()
{
	return FMPMoCapBlendshapeData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FFloatPropertyParams NewProp_blendshapes_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_blendshapes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_blendshapes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_blendshapes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_blendshapeNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_blendshapeNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_blendshapeNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_browInnerUp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_browInnerUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_browDownLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_browDownLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_browDownRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_browDownRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_browOuterUpLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_browOuterUpLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_browOuterUpRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_browOuterUpRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeLookUpLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeLookUpLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeLookUpRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeLookUpRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeLookDownLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeLookDownLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeLookDownRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeLookDownRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeLookInLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeLookInLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeLookInRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeLookInRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeLookOutLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeLookOutLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeLookOutRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeLookOutRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeBlinkLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeBlinkLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeBlinkRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeBlinkRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeSquintLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeSquintLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeSquintRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeSquintRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeWideLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeWideLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeWideRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeWideRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cheekPuff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_cheekPuff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cheekSquintLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_cheekSquintLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cheekSquintRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_cheekSquintRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_noseSneerLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_noseSneerLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_noseSneerRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_noseSneerRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthFunnel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthFunnel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthPucker_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthPucker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthRollUpper_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthRollUpper;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthRollLower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthRollLower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthShrugUpper_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthShrugUpper;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthShrugLower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthShrugLower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthClose_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthClose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthSmileLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthSmileLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthSmileRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthSmileRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthFrownLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthFrownLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthFrownRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthFrownRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthDimpleLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthDimpleLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthDimpleRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthDimpleRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthUpperUpLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthUpperUpLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthUpperUpRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthUpperUpRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthLowerDownLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthLowerDownLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthLowerDownRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthLowerDownRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthPressLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthPressLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthPressRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthPressRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthStretchLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthStretchLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthStretchRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthStretchRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_jawOpen_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_jawOpen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_jawForward_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_jawForward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_jawLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_jawLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_jawRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_jawRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tongueOut_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_tongueOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMPMoCapBlendshapeData>();
	}
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_blendshapes_ValueProp = { "blendshapes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_blendshapes_Key_KeyProp = { "blendshapes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_blendshapes_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_blendshapes = { "blendshapes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, blendshapes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_blendshapes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_blendshapes_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_blendshapeNames_Inner = { "blendshapeNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_blendshapeNames_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_blendshapeNames = { "blendshapeNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, blendshapeNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_blendshapeNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_blendshapeNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_browInnerUp_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_browInnerUp = { "browInnerUp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, browInnerUp), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_browInnerUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_browInnerUp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_browDownLeft_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_browDownLeft = { "browDownLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, browDownLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_browDownLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_browDownLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_browDownRight_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_browDownRight = { "browDownRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, browDownRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_browDownRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_browDownRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_browOuterUpLeft_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_browOuterUpLeft = { "browOuterUpLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, browOuterUpLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_browOuterUpLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_browOuterUpLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_browOuterUpRight_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_browOuterUpRight = { "browOuterUpRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, browOuterUpRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_browOuterUpRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_browOuterUpRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeLookUpLeft_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeLookUpLeft = { "eyeLookUpLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, eyeLookUpLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeLookUpLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeLookUpLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeLookUpRight_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeLookUpRight = { "eyeLookUpRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, eyeLookUpRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeLookUpRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeLookUpRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeLookDownLeft_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeLookDownLeft = { "eyeLookDownLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, eyeLookDownLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeLookDownLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeLookDownLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeLookDownRight_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeLookDownRight = { "eyeLookDownRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, eyeLookDownRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeLookDownRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeLookDownRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeLookInLeft_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeLookInLeft = { "eyeLookInLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, eyeLookInLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeLookInLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeLookInLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeLookInRight_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeLookInRight = { "eyeLookInRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, eyeLookInRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeLookInRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeLookInRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeLookOutLeft_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeLookOutLeft = { "eyeLookOutLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, eyeLookOutLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeLookOutLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeLookOutLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeLookOutRight_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeLookOutRight = { "eyeLookOutRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, eyeLookOutRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeLookOutRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeLookOutRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeBlinkLeft_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeBlinkLeft = { "eyeBlinkLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, eyeBlinkLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeBlinkLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeBlinkLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeBlinkRight_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeBlinkRight = { "eyeBlinkRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, eyeBlinkRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeBlinkRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeBlinkRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeSquintLeft_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeSquintLeft = { "eyeSquintLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, eyeSquintLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeSquintLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeSquintLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeSquintRight_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeSquintRight = { "eyeSquintRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, eyeSquintRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeSquintRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeSquintRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeWideLeft_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeWideLeft = { "eyeWideLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, eyeWideLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeWideLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeWideLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeWideRight_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeWideRight = { "eyeWideRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, eyeWideRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeWideRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeWideRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_cheekPuff_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_cheekPuff = { "cheekPuff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, cheekPuff), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_cheekPuff_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_cheekPuff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_cheekSquintLeft_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_cheekSquintLeft = { "cheekSquintLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, cheekSquintLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_cheekSquintLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_cheekSquintLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_cheekSquintRight_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_cheekSquintRight = { "cheekSquintRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, cheekSquintRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_cheekSquintRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_cheekSquintRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_noseSneerLeft_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_noseSneerLeft = { "noseSneerLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, noseSneerLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_noseSneerLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_noseSneerLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_noseSneerRight_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_noseSneerRight = { "noseSneerRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, noseSneerRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_noseSneerRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_noseSneerRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthFunnel_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthFunnel = { "mouthFunnel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, mouthFunnel), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthFunnel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthFunnel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthPucker_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthPucker = { "mouthPucker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, mouthPucker), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthPucker_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthPucker_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthRollUpper_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthRollUpper = { "mouthRollUpper", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, mouthRollUpper), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthRollUpper_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthRollUpper_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthRollLower_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthRollLower = { "mouthRollLower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, mouthRollLower), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthRollLower_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthRollLower_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthShrugUpper_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthShrugUpper = { "mouthShrugUpper", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, mouthShrugUpper), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthShrugUpper_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthShrugUpper_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthShrugLower_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthShrugLower = { "mouthShrugLower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, mouthShrugLower), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthShrugLower_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthShrugLower_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthClose_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthClose = { "mouthClose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, mouthClose), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthClose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthClose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthSmileLeft_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthSmileLeft = { "mouthSmileLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, mouthSmileLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthSmileLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthSmileLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthSmileRight_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthSmileRight = { "mouthSmileRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, mouthSmileRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthSmileRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthSmileRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthFrownLeft_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthFrownLeft = { "mouthFrownLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, mouthFrownLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthFrownLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthFrownLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthFrownRight_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthFrownRight = { "mouthFrownRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, mouthFrownRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthFrownRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthFrownRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthDimpleLeft_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthDimpleLeft = { "mouthDimpleLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, mouthDimpleLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthDimpleLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthDimpleLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthDimpleRight_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthDimpleRight = { "mouthDimpleRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, mouthDimpleRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthDimpleRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthDimpleRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthUpperUpLeft_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthUpperUpLeft = { "mouthUpperUpLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, mouthUpperUpLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthUpperUpLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthUpperUpLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthUpperUpRight_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthUpperUpRight = { "mouthUpperUpRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, mouthUpperUpRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthUpperUpRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthUpperUpRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthLowerDownLeft_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthLowerDownLeft = { "mouthLowerDownLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, mouthLowerDownLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthLowerDownLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthLowerDownLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthLowerDownRight_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthLowerDownRight = { "mouthLowerDownRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, mouthLowerDownRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthLowerDownRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthLowerDownRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthPressLeft_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthPressLeft = { "mouthPressLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, mouthPressLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthPressLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthPressLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthPressRight_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthPressRight = { "mouthPressRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, mouthPressRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthPressRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthPressRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthStretchLeft_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthStretchLeft = { "mouthStretchLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, mouthStretchLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthStretchLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthStretchLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthStretchRight_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthStretchRight = { "mouthStretchRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, mouthStretchRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthStretchRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthStretchRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthLeft_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthLeft = { "mouthLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, mouthLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthRight_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthRight = { "mouthRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, mouthRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_jawOpen_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_jawOpen = { "jawOpen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, jawOpen), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_jawOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_jawOpen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_jawForward_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_jawForward = { "jawForward", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, jawForward), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_jawForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_jawForward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_jawLeft_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_jawLeft = { "jawLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, jawLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_jawLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_jawLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_jawRight_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_jawRight = { "jawRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, jawRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_jawRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_jawRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_tongueOut_MetaData[] = {
		{ "Category", "MPMoCap" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_tongueOut = { "tongueOut", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapBlendshapeData, tongueOut), METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_tongueOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_tongueOut_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_blendshapes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_blendshapes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_blendshapes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_blendshapeNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_blendshapeNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_browInnerUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_browDownLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_browDownRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_browOuterUpLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_browOuterUpRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeLookUpLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeLookUpRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeLookDownLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeLookDownRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeLookInLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeLookInRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeLookOutLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeLookOutRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeBlinkLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeBlinkRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeSquintLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeSquintRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeWideLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_eyeWideRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_cheekPuff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_cheekSquintLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_cheekSquintRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_noseSneerLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_noseSneerRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthFunnel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthPucker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthRollUpper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthRollLower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthShrugUpper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthShrugLower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthClose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthSmileLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthSmileRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthFrownLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthFrownRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthDimpleLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthDimpleRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthUpperUpLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthUpperUpRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthLowerDownLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthLowerDownRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthPressLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthPressRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthStretchLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthStretchRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_mouthRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_jawOpen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_jawForward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_jawLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_jawRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewProp_tongueOut,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MPMoCap,
		nullptr,
		&NewStructOps,
		"MPMoCapBlendshapeData",
		sizeof(FMPMoCapBlendshapeData),
		alignof(FMPMoCapBlendshapeData),
		Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMPMoCapBlendshapeData()
	{
		if (!Z_Registration_Info_UScriptStruct_MPMoCapBlendshapeData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MPMoCapBlendshapeData.InnerSingleton, Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MPMoCapBlendshapeData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MPMoCapAnimationData;
class UScriptStruct* FMPMoCapAnimationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MPMoCapAnimationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MPMoCapAnimationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMPMoCapAnimationData, Z_Construct_UPackage__Script_MPMoCap(), TEXT("MPMoCapAnimationData"));
	}
	return Z_Registration_Info_UScriptStruct_MPMoCapAnimationData.OuterSingleton;
}
template<> MPMOCAP_API UScriptStruct* StaticStruct<FMPMoCapAnimationData>()
{
	return FMPMoCapAnimationData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMPMoCapAnimationData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendshapeData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendshapeData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeadRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftEyeRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftEyeRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightEyeRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightEyeRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapAnimationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMPMoCapAnimationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMPMoCapAnimationData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapAnimationData_Statics::NewProp_BlendshapeData_MetaData[] = {
		{ "Category", "MPMoCap Struct" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMPMoCapAnimationData_Statics::NewProp_BlendshapeData = { "BlendshapeData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapAnimationData, BlendshapeData), Z_Construct_UScriptStruct_FMPMoCapBlendshapeData, METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapAnimationData_Statics::NewProp_BlendshapeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapAnimationData_Statics::NewProp_BlendshapeData_MetaData)) }; // 3750980539
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapAnimationData_Statics::NewProp_HeadRotation_MetaData[] = {
		{ "Category", "MPMoCap Struct" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMPMoCapAnimationData_Statics::NewProp_HeadRotation = { "HeadRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapAnimationData, HeadRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapAnimationData_Statics::NewProp_HeadRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapAnimationData_Statics::NewProp_HeadRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapAnimationData_Statics::NewProp_LeftEyeRotation_MetaData[] = {
		{ "Category", "MPMoCap Struct" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMPMoCapAnimationData_Statics::NewProp_LeftEyeRotation = { "LeftEyeRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapAnimationData, LeftEyeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapAnimationData_Statics::NewProp_LeftEyeRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapAnimationData_Statics::NewProp_LeftEyeRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPMoCapAnimationData_Statics::NewProp_RightEyeRotation_MetaData[] = {
		{ "Category", "MPMoCap Struct" },
		{ "ModuleRelativePath", "Public/MPMoCapTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMPMoCapAnimationData_Statics::NewProp_RightEyeRotation = { "RightEyeRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMPMoCapAnimationData, RightEyeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapAnimationData_Statics::NewProp_RightEyeRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapAnimationData_Statics::NewProp_RightEyeRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMPMoCapAnimationData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapAnimationData_Statics::NewProp_BlendshapeData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapAnimationData_Statics::NewProp_HeadRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapAnimationData_Statics::NewProp_LeftEyeRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPMoCapAnimationData_Statics::NewProp_RightEyeRotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMPMoCapAnimationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MPMoCap,
		nullptr,
		&NewStructOps,
		"MPMoCapAnimationData",
		sizeof(FMPMoCapAnimationData),
		alignof(FMPMoCapAnimationData),
		Z_Construct_UScriptStruct_FMPMoCapAnimationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapAnimationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMPMoCapAnimationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPMoCapAnimationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMPMoCapAnimationData()
	{
		if (!Z_Registration_Info_UScriptStruct_MPMoCapAnimationData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MPMoCapAnimationData.InnerSingleton, Z_Construct_UScriptStruct_FMPMoCapAnimationData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MPMoCapAnimationData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UE_5_2_Engine_Plugins_MPMoCap_HostProject_Plugins_MPMoCap_Source_MPMoCap_Public_MPMoCapTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_5_2_Engine_Plugins_MPMoCap_HostProject_Plugins_MPMoCap_Source_MPMoCap_Public_MPMoCapTypes_h_Statics::ScriptStructInfo[] = {
		{ FMPMoCapRawData::StaticStruct, Z_Construct_UScriptStruct_FMPMoCapRawData_Statics::NewStructOps, TEXT("MPMoCapRawData"), &Z_Registration_Info_UScriptStruct_MPMoCapRawData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMPMoCapRawData), 232723405U) },
		{ FMPMoCapBlendshapeData::StaticStruct, Z_Construct_UScriptStruct_FMPMoCapBlendshapeData_Statics::NewStructOps, TEXT("MPMoCapBlendshapeData"), &Z_Registration_Info_UScriptStruct_MPMoCapBlendshapeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMPMoCapBlendshapeData), 3750980539U) },
		{ FMPMoCapAnimationData::StaticStruct, Z_Construct_UScriptStruct_FMPMoCapAnimationData_Statics::NewStructOps, TEXT("MPMoCapAnimationData"), &Z_Registration_Info_UScriptStruct_MPMoCapAnimationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMPMoCapAnimationData), 2642854529U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_5_2_Engine_Plugins_MPMoCap_HostProject_Plugins_MPMoCap_Source_MPMoCap_Public_MPMoCapTypes_h_4044564881(TEXT("/Script/MPMoCap"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UE_5_2_Engine_Plugins_MPMoCap_HostProject_Plugins_MPMoCap_Source_MPMoCap_Public_MPMoCapTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_5_2_Engine_Plugins_MPMoCap_HostProject_Plugins_MPMoCap_Source_MPMoCap_Public_MPMoCapTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
