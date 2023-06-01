// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPMoCap/Public/MPMoCapFunctionLibrary.h"
#include "MPMoCap/Public/MPMoCapTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMPMoCapFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MPMOCAP_API UClass* Z_Construct_UClass_UMPMoCapFunctionLibrary();
	MPMOCAP_API UClass* Z_Construct_UClass_UMPMoCapFunctionLibrary_NoRegister();
	MPMOCAP_API UScriptStruct* Z_Construct_UScriptStruct_FMPMoCapBlendshapeData();
	UPackage* Z_Construct_UPackage__Script_MPMoCap();
// End Cross Module References
	DEFINE_FUNCTION(UMPMoCapFunctionLibrary::execBlendshapeDataRemap)
	{
		P_GET_TARRAY(float,Z_Param_floatArrayData);
		P_GET_STRUCT_REF(FMPMoCapBlendshapeData,Z_Param_Out_blendshapeData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMPMoCapFunctionLibrary::BlendshapeDataRemap(Z_Param_floatArrayData,Z_Param_Out_blendshapeData);
		P_NATIVE_END;
	}
	void UMPMoCapFunctionLibrary::StaticRegisterNativesUMPMoCapFunctionLibrary()
	{
		UClass* Class = UMPMoCapFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BlendshapeDataRemap", &UMPMoCapFunctionLibrary::execBlendshapeDataRemap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMPMoCapFunctionLibrary_BlendshapeDataRemap_Statics
	{
		struct MPMoCapFunctionLibrary_eventBlendshapeDataRemap_Parms
		{
			TArray<float> floatArrayData;
			FMPMoCapBlendshapeData blendshapeData;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_floatArrayData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floatArrayData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_floatArrayData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_blendshapeData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMPMoCapFunctionLibrary_BlendshapeDataRemap_Statics::NewProp_floatArrayData_Inner = { "floatArrayData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMPMoCapFunctionLibrary_BlendshapeDataRemap_Statics::NewProp_floatArrayData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMPMoCapFunctionLibrary_BlendshapeDataRemap_Statics::NewProp_floatArrayData = { "floatArrayData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MPMoCapFunctionLibrary_eventBlendshapeDataRemap_Parms, floatArrayData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMPMoCapFunctionLibrary_BlendshapeDataRemap_Statics::NewProp_floatArrayData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMPMoCapFunctionLibrary_BlendshapeDataRemap_Statics::NewProp_floatArrayData_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMPMoCapFunctionLibrary_BlendshapeDataRemap_Statics::NewProp_blendshapeData = { "blendshapeData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MPMoCapFunctionLibrary_eventBlendshapeDataRemap_Parms, blendshapeData), Z_Construct_UScriptStruct_FMPMoCapBlendshapeData, METADATA_PARAMS(nullptr, 0) }; // 3750980539
	void Z_Construct_UFunction_UMPMoCapFunctionLibrary_BlendshapeDataRemap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MPMoCapFunctionLibrary_eventBlendshapeDataRemap_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMPMoCapFunctionLibrary_BlendshapeDataRemap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MPMoCapFunctionLibrary_eventBlendshapeDataRemap_Parms), &Z_Construct_UFunction_UMPMoCapFunctionLibrary_BlendshapeDataRemap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMPMoCapFunctionLibrary_BlendshapeDataRemap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMPMoCapFunctionLibrary_BlendshapeDataRemap_Statics::NewProp_floatArrayData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMPMoCapFunctionLibrary_BlendshapeDataRemap_Statics::NewProp_floatArrayData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMPMoCapFunctionLibrary_BlendshapeDataRemap_Statics::NewProp_blendshapeData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMPMoCapFunctionLibrary_BlendshapeDataRemap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMPMoCapFunctionLibrary_BlendshapeDataRemap_Statics::Function_MetaDataParams[] = {
		{ "Category", "MPMoCap" },
		{ "Comment", "/**\n\x09\x09 * Remap the raw float array data into individual blendshapes' value\n\x09\x09 * @param\x09""blendshapeData  Custom blendshape struct with all blendshapes and values\n\x09\x09 * @return  Return false if the input array and the output blendshape count doesn't match\n\x09\x09 */" },
		{ "DisplayName", "Blendshape Data Remap" },
		{ "ModuleRelativePath", "Public/MPMoCapFunctionLibrary.h" },
		{ "ToolTip", "Remap the raw float array data into individual blendshapes' value\n@param       blendshapeData  Custom blendshape struct with all blendshapes and values\n@return  Return false if the input array and the output blendshape count doesn't match" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMPMoCapFunctionLibrary_BlendshapeDataRemap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMPMoCapFunctionLibrary, nullptr, "BlendshapeDataRemap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMPMoCapFunctionLibrary_BlendshapeDataRemap_Statics::MPMoCapFunctionLibrary_eventBlendshapeDataRemap_Parms), Z_Construct_UFunction_UMPMoCapFunctionLibrary_BlendshapeDataRemap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMPMoCapFunctionLibrary_BlendshapeDataRemap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMPMoCapFunctionLibrary_BlendshapeDataRemap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMPMoCapFunctionLibrary_BlendshapeDataRemap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMPMoCapFunctionLibrary_BlendshapeDataRemap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMPMoCapFunctionLibrary_BlendshapeDataRemap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMPMoCapFunctionLibrary);
	UClass* Z_Construct_UClass_UMPMoCapFunctionLibrary_NoRegister()
	{
		return UMPMoCapFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMPMoCapFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMPMoCapFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MPMoCap,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMPMoCapFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMPMoCapFunctionLibrary_BlendshapeDataRemap, "BlendshapeDataRemap" }, // 1321920712
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMPMoCapFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MPMoCapFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/MPMoCapFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMPMoCapFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMPMoCapFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMPMoCapFunctionLibrary_Statics::ClassParams = {
		&UMPMoCapFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMPMoCapFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMPMoCapFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMPMoCapFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UMPMoCapFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMPMoCapFunctionLibrary.OuterSingleton, Z_Construct_UClass_UMPMoCapFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMPMoCapFunctionLibrary.OuterSingleton;
	}
	template<> MPMOCAP_API UClass* StaticClass<UMPMoCapFunctionLibrary>()
	{
		return UMPMoCapFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMPMoCapFunctionLibrary);
	UMPMoCapFunctionLibrary::~UMPMoCapFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_UE_5_2_Engine_Plugins_MPMoCap_HostProject_Plugins_MPMoCap_Source_MPMoCap_Public_MPMoCapFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_5_2_Engine_Plugins_MPMoCap_HostProject_Plugins_MPMoCap_Source_MPMoCap_Public_MPMoCapFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMPMoCapFunctionLibrary, UMPMoCapFunctionLibrary::StaticClass, TEXT("UMPMoCapFunctionLibrary"), &Z_Registration_Info_UClass_UMPMoCapFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMPMoCapFunctionLibrary), 2155552315U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_5_2_Engine_Plugins_MPMoCap_HostProject_Plugins_MPMoCap_Source_MPMoCap_Public_MPMoCapFunctionLibrary_h_1060114314(TEXT("/Script/MPMoCap"),
		Z_CompiledInDeferFile_FID_UE_5_2_Engine_Plugins_MPMoCap_HostProject_Plugins_MPMoCap_Source_MPMoCap_Public_MPMoCapFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_5_2_Engine_Plugins_MPMoCap_HostProject_Plugins_MPMoCap_Source_MPMoCap_Public_MPMoCapFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
