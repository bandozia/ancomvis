// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnComVis/Public/WebcamActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebcamActor() {}
// Cross Module References
	ANCOMVIS_API UScriptStruct* Z_Construct_UScriptStruct_FFaceDetected();
	UPackage* Z_Construct_UPackage__Script_AnComVis();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	ANCOMVIS_API UClass* Z_Construct_UClass_AWebcamActor_NoRegister();
	ANCOMVIS_API UClass* Z_Construct_UClass_AWebcamActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ANCOMVIS_API UFunction* Z_Construct_UFunction_AWebcamActor_OnNextFrame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FFaceDetected::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANCOMVIS_API uint32 Get_Z_Construct_UScriptStruct_FFaceDetected_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFaceDetected, Z_Construct_UPackage__Script_AnComVis(), TEXT("FaceDetected"), sizeof(FFaceDetected), Get_Z_Construct_UScriptStruct_FFaceDetected_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFaceDetected(FFaceDetected::StaticStruct, TEXT("/Script/AnComVis"), TEXT("FaceDetected"), false, nullptr, nullptr);
static struct FScriptStruct_AnComVis_StaticRegisterNativesFFaceDetected
{
	FScriptStruct_AnComVis_StaticRegisterNativesFFaceDetected()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FaceDetected")),new UScriptStruct::TCppStructOps<FFaceDetected>);
	}
} ScriptStruct_AnComVis_StaticRegisterNativesFFaceDetected;
	struct Z_Construct_UScriptStruct_FFaceDetected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandMarks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LandMarks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LandMarks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Angle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Neighbors_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Neighbors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FaceRect_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FaceRect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFaceDetected_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WebcamActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFaceDetected_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFaceDetected>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFaceDetected_Statics::NewProp_LandMarks_MetaData[] = {
		{ "Category", "FaceDetection" },
		{ "ModuleRelativePath", "Public/WebcamActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFaceDetected_Statics::NewProp_LandMarks = { UE4CodeGen_Private::EPropertyClass::Array, "LandMarks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FFaceDetected, LandMarks), METADATA_PARAMS(Z_Construct_UScriptStruct_FFaceDetected_Statics::NewProp_LandMarks_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFaceDetected_Statics::NewProp_LandMarks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFaceDetected_Statics::NewProp_LandMarks_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "LandMarks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFaceDetected_Statics::NewProp_Angle_MetaData[] = {
		{ "Category", "FaceDetection" },
		{ "ModuleRelativePath", "Public/WebcamActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFaceDetected_Statics::NewProp_Angle = { UE4CodeGen_Private::EPropertyClass::Int, "Angle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FFaceDetected, Angle), METADATA_PARAMS(Z_Construct_UScriptStruct_FFaceDetected_Statics::NewProp_Angle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFaceDetected_Statics::NewProp_Angle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFaceDetected_Statics::NewProp_Neighbors_MetaData[] = {
		{ "Category", "FaceDetection" },
		{ "ModuleRelativePath", "Public/WebcamActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFaceDetected_Statics::NewProp_Neighbors = { UE4CodeGen_Private::EPropertyClass::Int, "Neighbors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FFaceDetected, Neighbors), METADATA_PARAMS(Z_Construct_UScriptStruct_FFaceDetected_Statics::NewProp_Neighbors_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFaceDetected_Statics::NewProp_Neighbors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFaceDetected_Statics::NewProp_FaceRect_MetaData[] = {
		{ "Category", "FaceDetection" },
		{ "ModuleRelativePath", "Public/WebcamActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFaceDetected_Statics::NewProp_FaceRect = { UE4CodeGen_Private::EPropertyClass::Struct, "FaceRect", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FFaceDetected, FaceRect), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FFaceDetected_Statics::NewProp_FaceRect_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFaceDetected_Statics::NewProp_FaceRect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFaceDetected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFaceDetected_Statics::NewProp_LandMarks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFaceDetected_Statics::NewProp_LandMarks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFaceDetected_Statics::NewProp_Angle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFaceDetected_Statics::NewProp_Neighbors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFaceDetected_Statics::NewProp_FaceRect,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFaceDetected_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnComVis,
		nullptr,
		&NewStructOps,
		"FaceDetected",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FFaceDetected),
		alignof(FFaceDetected),
		Z_Construct_UScriptStruct_FFaceDetected_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FFaceDetected_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFaceDetected_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFaceDetected_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFaceDetected()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFaceDetected_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnComVis();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FaceDetected"), sizeof(FFaceDetected), Get_Z_Construct_UScriptStruct_FFaceDetected_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFaceDetected_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFaceDetected_CRC() { return 925656783U; }
	static FName NAME_AWebcamActor_OnNextFrame = FName(TEXT("OnNextFrame"));
	void AWebcamActor::OnNextFrame()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWebcamActor_OnNextFrame),NULL);
	}
	void AWebcamActor::StaticRegisterNativesAWebcamActor()
	{
		UClass* Class = AWebcamActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnNextFrame", &AWebcamActor::execOnNextFrame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWebcamActor_OnNextFrame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWebcamActor_OnNextFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Webcam" },
		{ "ModuleRelativePath", "Public/WebcamActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWebcamActor_OnNextFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWebcamActor, "OnNextFrame", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWebcamActor_OnNextFrame_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWebcamActor_OnNextFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWebcamActor_OnNextFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWebcamActor_OnNextFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWebcamActor_NoRegister()
	{
		return AWebcamActor::StaticClass();
	}
	struct Z_Construct_UClass_AWebcamActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugFaceLandmarks_MetaData[];
#endif
		static void NewProp_bDebugFaceLandmarks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugFaceLandmarks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectedFaces_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DetectedFaces;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DetectedFaces_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFaceDetect_MetaData[];
#endif
		static void NewProp_bFaceDetect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFaceDetect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CameraData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCamOpen_MetaData[];
#endif
		static void NewProp_bCamOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCamOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VideoTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefreshTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RefreshTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefreshFPS_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RefreshFPS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VideoSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CameraID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWebcamActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AnComVis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWebcamActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWebcamActor_OnNextFrame, "OnNextFrame" }, // 3470616229
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWebcamActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WebcamActor.h" },
		{ "ModuleRelativePath", "Public/WebcamActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWebcamActor_Statics::NewProp_bDebugFaceLandmarks_MetaData[] = {
		{ "Category", "FaceDetection" },
		{ "ModuleRelativePath", "Public/WebcamActor.h" },
	};
#endif
	void Z_Construct_UClass_AWebcamActor_Statics::NewProp_bDebugFaceLandmarks_SetBit(void* Obj)
	{
		((AWebcamActor*)Obj)->bDebugFaceLandmarks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWebcamActor_Statics::NewProp_bDebugFaceLandmarks = { UE4CodeGen_Private::EPropertyClass::Bool, "bDebugFaceLandmarks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AWebcamActor), &Z_Construct_UClass_AWebcamActor_Statics::NewProp_bDebugFaceLandmarks_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWebcamActor_Statics::NewProp_bDebugFaceLandmarks_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWebcamActor_Statics::NewProp_bDebugFaceLandmarks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWebcamActor_Statics::NewProp_DetectedFaces_MetaData[] = {
		{ "Category", "FaceDetection" },
		{ "ModuleRelativePath", "Public/WebcamActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWebcamActor_Statics::NewProp_DetectedFaces = { UE4CodeGen_Private::EPropertyClass::Array, "DetectedFaces", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(AWebcamActor, DetectedFaces), METADATA_PARAMS(Z_Construct_UClass_AWebcamActor_Statics::NewProp_DetectedFaces_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWebcamActor_Statics::NewProp_DetectedFaces_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWebcamActor_Statics::NewProp_DetectedFaces_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "DetectedFaces", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FFaceDetected, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWebcamActor_Statics::NewProp_bFaceDetect_MetaData[] = {
		{ "Category", "FaceDetection" },
		{ "ModuleRelativePath", "Public/WebcamActor.h" },
	};
#endif
	void Z_Construct_UClass_AWebcamActor_Statics::NewProp_bFaceDetect_SetBit(void* Obj)
	{
		((AWebcamActor*)Obj)->bFaceDetect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWebcamActor_Statics::NewProp_bFaceDetect = { UE4CodeGen_Private::EPropertyClass::Bool, "bFaceDetect", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AWebcamActor), &Z_Construct_UClass_AWebcamActor_Statics::NewProp_bFaceDetect_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWebcamActor_Statics::NewProp_bFaceDetect_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWebcamActor_Statics::NewProp_bFaceDetect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWebcamActor_Statics::NewProp_CameraData_MetaData[] = {
		{ "Category", "WebcamData" },
		{ "ModuleRelativePath", "Public/WebcamActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWebcamActor_Statics::NewProp_CameraData = { UE4CodeGen_Private::EPropertyClass::Array, "CameraData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(AWebcamActor, CameraData), METADATA_PARAMS(Z_Construct_UClass_AWebcamActor_Statics::NewProp_CameraData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWebcamActor_Statics::NewProp_CameraData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWebcamActor_Statics::NewProp_CameraData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "CameraData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWebcamActor_Statics::NewProp_bCamOpen_MetaData[] = {
		{ "Category", "WebcamInternals" },
		{ "ModuleRelativePath", "Public/WebcamActor.h" },
	};
#endif
	void Z_Construct_UClass_AWebcamActor_Statics::NewProp_bCamOpen_SetBit(void* Obj)
	{
		((AWebcamActor*)Obj)->bCamOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWebcamActor_Statics::NewProp_bCamOpen = { UE4CodeGen_Private::EPropertyClass::Bool, "bCamOpen", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AWebcamActor), &Z_Construct_UClass_AWebcamActor_Statics::NewProp_bCamOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWebcamActor_Statics::NewProp_bCamOpen_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWebcamActor_Statics::NewProp_bCamOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWebcamActor_Statics::NewProp_VideoTexture_MetaData[] = {
		{ "Category", "WebcamTexture" },
		{ "ModuleRelativePath", "Public/WebcamActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWebcamActor_Statics::NewProp_VideoTexture = { UE4CodeGen_Private::EPropertyClass::Object, "VideoTexture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(AWebcamActor, VideoTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWebcamActor_Statics::NewProp_VideoTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWebcamActor_Statics::NewProp_VideoTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWebcamActor_Statics::NewProp_RefreshTime_MetaData[] = {
		{ "Category", "Webcam" },
		{ "ModuleRelativePath", "Public/WebcamActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWebcamActor_Statics::NewProp_RefreshTime = { UE4CodeGen_Private::EPropertyClass::Float, "RefreshTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(AWebcamActor, RefreshTime), METADATA_PARAMS(Z_Construct_UClass_AWebcamActor_Statics::NewProp_RefreshTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWebcamActor_Statics::NewProp_RefreshTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWebcamActor_Statics::NewProp_RefreshFPS_MetaData[] = {
		{ "Category", "Webcam" },
		{ "ModuleRelativePath", "Public/WebcamActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWebcamActor_Statics::NewProp_RefreshFPS = { UE4CodeGen_Private::EPropertyClass::Float, "RefreshFPS", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AWebcamActor, RefreshFPS), METADATA_PARAMS(Z_Construct_UClass_AWebcamActor_Statics::NewProp_RefreshFPS_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWebcamActor_Statics::NewProp_RefreshFPS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWebcamActor_Statics::NewProp_VideoSize_MetaData[] = {
		{ "Category", "Webcam" },
		{ "ModuleRelativePath", "Public/WebcamActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWebcamActor_Statics::NewProp_VideoSize = { UE4CodeGen_Private::EPropertyClass::Struct, "VideoSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(AWebcamActor, VideoSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AWebcamActor_Statics::NewProp_VideoSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWebcamActor_Statics::NewProp_VideoSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWebcamActor_Statics::NewProp_CameraID_MetaData[] = {
		{ "Category", "Webcam" },
		{ "ModuleRelativePath", "Public/WebcamActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWebcamActor_Statics::NewProp_CameraID = { UE4CodeGen_Private::EPropertyClass::Int, "CameraID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AWebcamActor, CameraID), METADATA_PARAMS(Z_Construct_UClass_AWebcamActor_Statics::NewProp_CameraID_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWebcamActor_Statics::NewProp_CameraID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWebcamActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWebcamActor_Statics::NewProp_bDebugFaceLandmarks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWebcamActor_Statics::NewProp_DetectedFaces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWebcamActor_Statics::NewProp_DetectedFaces_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWebcamActor_Statics::NewProp_bFaceDetect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWebcamActor_Statics::NewProp_CameraData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWebcamActor_Statics::NewProp_CameraData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWebcamActor_Statics::NewProp_bCamOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWebcamActor_Statics::NewProp_VideoTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWebcamActor_Statics::NewProp_RefreshTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWebcamActor_Statics::NewProp_RefreshFPS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWebcamActor_Statics::NewProp_VideoSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWebcamActor_Statics::NewProp_CameraID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWebcamActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWebcamActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWebcamActor_Statics::ClassParams = {
		&AWebcamActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AWebcamActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AWebcamActor_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AWebcamActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AWebcamActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWebcamActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWebcamActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWebcamActor, 2437445470);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWebcamActor(Z_Construct_UClass_AWebcamActor, &AWebcamActor::StaticClass, TEXT("/Script/AnComVis"), TEXT("AWebcamActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWebcamActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
