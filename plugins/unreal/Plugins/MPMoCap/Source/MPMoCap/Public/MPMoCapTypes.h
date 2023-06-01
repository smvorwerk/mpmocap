#pragma once

#include "MPMoCapTypes.generated.h"

USTRUCT(BlueprintType)
struct FMPMoCapRawData
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
		TArray<float> Blendshapes = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
		TArray<float> HeadRotation = { 0,0,0,0 };

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
		TArray<float> LeftEyeRotation = { 0,0,0,0 };

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
		TArray<float> RightEyeRotation = { 0,0,0,0 };
};

USTRUCT(BlueprintType)
struct FMPMoCapBlendshapeData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	TMap<FString, float> blendshapes = {
		{"browInnerUp", 0.0},
		{"browDownLeft", 0.0},
		{"browDownRight", 0.0},
		{"browOuterUpLeft", 0.0},
		{"browOuterUpRight", 0.0},
		{"eyeLookUpLeft", 0.0},
		{"eyeLookUpRight", 0.0},
		{"eyeLookDownLeft", 0.0},
		{"eyeLookDownRight", 0.0},
		{"eyeLookInLeft", 0.0},
		{"eyeLookInRight", 0.0},
		{"eyeLookOutLeft", 0.0},
		{"eyeLookOutRight", 0.0},
		{"eyeBlinkLeft", 0.0},
		{"eyeBlinkRight", 0.0},
		{"eyeSquintLeft", 0.0},
		{"eyeSquintRight", 0.0},
		{"eyeWideLeft", 0.0},
		{"eyeWideRight", 0.0},
		{"cheekPuff", 0.0},
		{"cheekSquintLeft", 0.0},
		{"cheekSquintRight", 0.0},
		{"noseSneerLeft", 0.0},
		{"noseSneerRight", 0.0},
		{"mouthFunnel", 0.0},
		{"mouthPucker", 0.0},
		{"mouthRollUpper", 0.0},
		{"mouthRollLower", 0.0},
		{"mouthShrugUpper", 0.0},
		{"mouthShrugLower", 0.0},
		{"mouthClose", 0.0},
		{"mouthSmileLeft", 0.0},
		{"mouthSmileRight", 0.0},
		{"mouthFrownLeft", 0.0},
		{"mouthFrownRight", 0.0},
		{"mouthDimpleLeft", 0.0},
		{"mouthDimpleRight", 0.0},
		{"mouthUpperUpLeft", 0.0},
		{"mouthUpperUpRight", 0.0},
		{"mouthLowerDownLeft", 0.0},
		{"mouthLowerDownRight", 0.0},
		{"mouthPressLeft", 0.0},
		{"mouthPressRight", 0.0},
		{"mouthStretchLeft", 0.0},
		{"mouthStretchRight", 0.0},
		{"mouthLeft", 0.0},
		{"mouthRight", 0.0},
		{"jawOpen", 0.0},
		{"jawForward", 0.0},
		{"jawLeft", 0.0},
		{"jawRight", 0.0},
		{"tongueOut", 0.0}
	};

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	TArray<FString> blendshapeNames = {
		"browInnerUp",
		"browDownLeft",
		"browDownRight",
		"browOuterUpLeft",
		"browOuterUpRight",
		"eyeLookUpLeft",
		"eyeLookUpRight",
		"eyeLookDownLeft",
		"eyeLookDownRight",
		"eyeLookInLeft",
		"eyeLookInRight",
		"eyeLookOutLeft",
		"eyeLookOutRight",
		"eyeBlinkLeft",
		"eyeBlinkRight",
		"eyeSquintLeft",
		"eyeSquintRight",
		"eyeWideLeft",
		"eyeWideRight",
		"cheekPuff",
		"cheekSquintLeft",
		"cheekSquintRight",
		"noseSneerLeft",
		"noseSneerRight",
		"mouthFunnel",
		"mouthPucker",
		"mouthRollUpper",
		"mouthRollLower",
		"mouthShrugUpper",
		"mouthShrugLower",
		"mouthClose",
		"mouthSmileLeft",
		"mouthSmileRight",
		"mouthFrownLeft",
		"mouthFrownRight",
		"mouthDimpleLeft",
		"mouthDimpleRight",
		"mouthUpperUpLeft",
		"mouthUpperUpRight",
		"mouthLowerDownLeft",
		"mouthLowerDownRight",
		"mouthPressLeft",
		"mouthPressRight",
		"mouthStretchLeft",
		"mouthStretchRight",
		"mouthLeft",
		"mouthRight",
		"jawOpen",
		"jawForward",
		"jawLeft",
		"jawRight",
		"tongueOut"
	};
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float browInnerUp = 0.0;
		
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float browDownLeft = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float browDownRight = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float browOuterUpLeft = 0.0;
		
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float browOuterUpRight = 0.0;
		
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float eyeLookUpLeft = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float eyeLookUpRight = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float eyeLookDownLeft = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float eyeLookDownRight = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float eyeLookInLeft = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float eyeLookInRight = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float eyeLookOutLeft = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float eyeLookOutRight = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float eyeBlinkLeft = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float eyeBlinkRight = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float eyeSquintLeft = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float eyeSquintRight = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float eyeWideLeft = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float eyeWideRight = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float cheekPuff = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float cheekSquintLeft = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float cheekSquintRight = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float noseSneerLeft = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float noseSneerRight = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float mouthFunnel = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float mouthPucker = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float mouthRollUpper = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float mouthRollLower = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float mouthShrugUpper = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float mouthShrugLower = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float mouthClose = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float mouthSmileLeft = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float mouthSmileRight = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float mouthFrownLeft = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float mouthFrownRight = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float mouthDimpleLeft = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float mouthDimpleRight = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float mouthUpperUpLeft = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float mouthUpperUpRight = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float mouthLowerDownLeft = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float mouthLowerDownRight = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float mouthPressLeft = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float mouthPressRight = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float mouthStretchLeft = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float mouthStretchRight = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float mouthLeft = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float mouthRight = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float jawOpen = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float jawForward = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float jawLeft = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float jawRight = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap")
	float tongueOut = 0.0;
	
	float blendshapeCount = 52;
};

USTRUCT(BlueprintType)
struct FMPMoCapAnimationData {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap Struct")
	FMPMoCapBlendshapeData BlendshapeData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap Struct")
	FRotator HeadRotation = FRotator::ZeroRotator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap Struct")
	FRotator LeftEyeRotation = FRotator::ZeroRotator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MPMoCap Struct")
	FRotator RightEyeRotation = FRotator::ZeroRotator;
};

