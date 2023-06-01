// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MPMoCap/Public/MPMoCapWebSocketServer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMPMoCapWebSocketServer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MPMOCAP_API UClass* Z_Construct_UClass_AMPMoCapWebSocketServer();
	MPMOCAP_API UClass* Z_Construct_UClass_AMPMoCapWebSocketServer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MPMoCap();
// End Cross Module References
	DEFINE_FUNCTION(AMPMoCapWebSocketServer::execIsRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRunning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMPMoCapWebSocketServer::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMPMoCapWebSocketServer::execStart)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Port);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Start(Z_Param_Port);
		P_NATIVE_END;
	}
	struct MPMoCapWebSocketServer_eventOnDataCallback_Parms
	{
		FString addr;
		TArray<float> data;
	};
	static FName NAME_AMPMoCapWebSocketServer_OnDataCallback = FName(TEXT("OnDataCallback"));
	void AMPMoCapWebSocketServer::OnDataCallback(const FString& addr, TArray<float> const& data)
	{
		MPMoCapWebSocketServer_eventOnDataCallback_Parms Parms;
		Parms.addr=addr;
		Parms.data=data;
		ProcessEvent(FindFunctionChecked(NAME_AMPMoCapWebSocketServer_OnDataCallback),&Parms);
	}
	void AMPMoCapWebSocketServer::StaticRegisterNativesAMPMoCapWebSocketServer()
	{
		UClass* Class = AMPMoCapWebSocketServer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsRunning", &AMPMoCapWebSocketServer::execIsRunning },
			{ "Start", &AMPMoCapWebSocketServer::execStart },
			{ "Stop", &AMPMoCapWebSocketServer::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMPMoCapWebSocketServer_IsRunning_Statics
	{
		struct MPMoCapWebSocketServer_eventIsRunning_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMPMoCapWebSocketServer_IsRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MPMoCapWebSocketServer_eventIsRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMPMoCapWebSocketServer_IsRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MPMoCapWebSocketServer_eventIsRunning_Parms), &Z_Construct_UFunction_AMPMoCapWebSocketServer_IsRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMPMoCapWebSocketServer_IsRunning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPMoCapWebSocketServer_IsRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPMoCapWebSocketServer_IsRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "MPMoCapWebSocketServer" },
		{ "Comment", "// Returns whether the server is currently running\n" },
		{ "ModuleRelativePath", "Public/MPMoCapWebSocketServer.h" },
		{ "ToolTip", "Returns whether the server is currently running" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPMoCapWebSocketServer_IsRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMPMoCapWebSocketServer, nullptr, "IsRunning", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMPMoCapWebSocketServer_IsRunning_Statics::MPMoCapWebSocketServer_eventIsRunning_Parms), Z_Construct_UFunction_AMPMoCapWebSocketServer_IsRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPMoCapWebSocketServer_IsRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMPMoCapWebSocketServer_IsRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPMoCapWebSocketServer_IsRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMPMoCapWebSocketServer_IsRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPMoCapWebSocketServer_IsRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMPMoCapWebSocketServer_OnDataCallback_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_addr_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_addr;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPMoCapWebSocketServer_OnDataCallback_Statics::NewProp_addr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMPMoCapWebSocketServer_OnDataCallback_Statics::NewProp_addr = { "addr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MPMoCapWebSocketServer_eventOnDataCallback_Parms, addr), METADATA_PARAMS(Z_Construct_UFunction_AMPMoCapWebSocketServer_OnDataCallback_Statics::NewProp_addr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPMoCapWebSocketServer_OnDataCallback_Statics::NewProp_addr_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMPMoCapWebSocketServer_OnDataCallback_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPMoCapWebSocketServer_OnDataCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMPMoCapWebSocketServer_OnDataCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MPMoCapWebSocketServer_eventOnDataCallback_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AMPMoCapWebSocketServer_OnDataCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPMoCapWebSocketServer_OnDataCallback_Statics::NewProp_data_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMPMoCapWebSocketServer_OnDataCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPMoCapWebSocketServer_OnDataCallback_Statics::NewProp_addr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPMoCapWebSocketServer_OnDataCallback_Statics::NewProp_data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPMoCapWebSocketServer_OnDataCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPMoCapWebSocketServer_OnDataCallback_Statics::Function_MetaDataParams[] = {
		{ "Category", "MPMoCapWebSocketServer" },
		{ "Comment", "// web client message callback\n" },
		{ "ModuleRelativePath", "Public/MPMoCapWebSocketServer.h" },
		{ "ToolTip", "web client message callback" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPMoCapWebSocketServer_OnDataCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMPMoCapWebSocketServer, nullptr, "OnDataCallback", nullptr, nullptr, sizeof(MPMoCapWebSocketServer_eventOnDataCallback_Parms), Z_Construct_UFunction_AMPMoCapWebSocketServer_OnDataCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPMoCapWebSocketServer_OnDataCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMPMoCapWebSocketServer_OnDataCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPMoCapWebSocketServer_OnDataCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMPMoCapWebSocketServer_OnDataCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPMoCapWebSocketServer_OnDataCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMPMoCapWebSocketServer_Start_Statics
	{
		struct MPMoCapWebSocketServer_eventStart_Parms
		{
			int32 Port;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Port;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMPMoCapWebSocketServer_Start_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MPMoCapWebSocketServer_eventStart_Parms, Port), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMPMoCapWebSocketServer_Start_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MPMoCapWebSocketServer_eventStart_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMPMoCapWebSocketServer_Start_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MPMoCapWebSocketServer_eventStart_Parms), &Z_Construct_UFunction_AMPMoCapWebSocketServer_Start_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMPMoCapWebSocketServer_Start_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPMoCapWebSocketServer_Start_Statics::NewProp_Port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPMoCapWebSocketServer_Start_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPMoCapWebSocketServer_Start_Statics::Function_MetaDataParams[] = {
		{ "Category", "MPMoCapWebSocketServer" },
		{ "Comment", "// Open WebSocket Server\n" },
		{ "ModuleRelativePath", "Public/MPMoCapWebSocketServer.h" },
		{ "ToolTip", "Open WebSocket Server" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPMoCapWebSocketServer_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMPMoCapWebSocketServer, nullptr, "Start", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMPMoCapWebSocketServer_Start_Statics::MPMoCapWebSocketServer_eventStart_Parms), Z_Construct_UFunction_AMPMoCapWebSocketServer_Start_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPMoCapWebSocketServer_Start_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMPMoCapWebSocketServer_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPMoCapWebSocketServer_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMPMoCapWebSocketServer_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPMoCapWebSocketServer_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMPMoCapWebSocketServer_Stop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMPMoCapWebSocketServer_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "MPMoCapWebSocketServer" },
		{ "Comment", "// Close WebSocket Server (The automatic call this func when BeginDestroy)\n" },
		{ "ModuleRelativePath", "Public/MPMoCapWebSocketServer.h" },
		{ "ToolTip", "Close WebSocket Server (The automatic call this func when BeginDestroy)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPMoCapWebSocketServer_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMPMoCapWebSocketServer, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMPMoCapWebSocketServer_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMPMoCapWebSocketServer_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMPMoCapWebSocketServer_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPMoCapWebSocketServer_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMPMoCapWebSocketServer);
	UClass* Z_Construct_UClass_AMPMoCapWebSocketServer_NoRegister()
	{
		return AMPMoCapWebSocketServer::StaticClass();
	}
	struct Z_Construct_UClass_AMPMoCapWebSocketServer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMPMoCapWebSocketServer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MPMoCap,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMPMoCapWebSocketServer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMPMoCapWebSocketServer_IsRunning, "IsRunning" }, // 1983472270
		{ &Z_Construct_UFunction_AMPMoCapWebSocketServer_OnDataCallback, "OnDataCallback" }, // 1942271683
		{ &Z_Construct_UFunction_AMPMoCapWebSocketServer_Start, "Start" }, // 3363136672
		{ &Z_Construct_UFunction_AMPMoCapWebSocketServer_Stop, "Stop" }, // 3473579
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMPMoCapWebSocketServer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MPMoCapWebSocketServer.h" },
		{ "ModuleRelativePath", "Public/MPMoCapWebSocketServer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMPMoCapWebSocketServer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMPMoCapWebSocketServer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMPMoCapWebSocketServer_Statics::ClassParams = {
		&AMPMoCapWebSocketServer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMPMoCapWebSocketServer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMPMoCapWebSocketServer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMPMoCapWebSocketServer()
	{
		if (!Z_Registration_Info_UClass_AMPMoCapWebSocketServer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMPMoCapWebSocketServer.OuterSingleton, Z_Construct_UClass_AMPMoCapWebSocketServer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMPMoCapWebSocketServer.OuterSingleton;
	}
	template<> MPMOCAP_API UClass* StaticClass<AMPMoCapWebSocketServer>()
	{
		return AMPMoCapWebSocketServer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMPMoCapWebSocketServer);
	AMPMoCapWebSocketServer::~AMPMoCapWebSocketServer() {}
	struct Z_CompiledInDeferFile_FID_UE_5_2_Engine_Plugins_MPMoCap_HostProject_Plugins_MPMoCap_Source_MPMoCap_Public_MPMoCapWebSocketServer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_5_2_Engine_Plugins_MPMoCap_HostProject_Plugins_MPMoCap_Source_MPMoCap_Public_MPMoCapWebSocketServer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMPMoCapWebSocketServer, AMPMoCapWebSocketServer::StaticClass, TEXT("AMPMoCapWebSocketServer"), &Z_Registration_Info_UClass_AMPMoCapWebSocketServer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMPMoCapWebSocketServer), 1820475012U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_5_2_Engine_Plugins_MPMoCap_HostProject_Plugins_MPMoCap_Source_MPMoCap_Public_MPMoCapWebSocketServer_h_3967105515(TEXT("/Script/MPMoCap"),
		Z_CompiledInDeferFile_FID_UE_5_2_Engine_Plugins_MPMoCap_HostProject_Plugins_MPMoCap_Source_MPMoCap_Public_MPMoCapWebSocketServer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_5_2_Engine_Plugins_MPMoCap_HostProject_Plugins_MPMoCap_Source_MPMoCap_Public_MPMoCapWebSocketServer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
