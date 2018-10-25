// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANCOMVIS_WebcamActor_generated_h
#error "WebcamActor.generated.h already included, missing '#pragma once' in WebcamActor.h"
#endif
#define ANCOMVIS_WebcamActor_generated_h

#define AnComVisSource_Plugins_AnComVis_Source_AnComVis_Public_WebcamActor_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFaceDetected_Statics; \
	ANCOMVIS_API static class UScriptStruct* StaticStruct();


#define AnComVisSource_Plugins_AnComVis_Source_AnComVis_Public_WebcamActor_h_35_RPC_WRAPPERS \
	virtual void OnNextFrame_Implementation(); \
 \
	DECLARE_FUNCTION(execOnNextFrame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnNextFrame_Implementation(); \
		P_NATIVE_END; \
	}


#define AnComVisSource_Plugins_AnComVis_Source_AnComVis_Public_WebcamActor_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnNextFrame_Implementation(); \
 \
	DECLARE_FUNCTION(execOnNextFrame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnNextFrame_Implementation(); \
		P_NATIVE_END; \
	}


#define AnComVisSource_Plugins_AnComVis_Source_AnComVis_Public_WebcamActor_h_35_EVENT_PARMS
#define AnComVisSource_Plugins_AnComVis_Source_AnComVis_Public_WebcamActor_h_35_CALLBACK_WRAPPERS
#define AnComVisSource_Plugins_AnComVis_Source_AnComVis_Public_WebcamActor_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWebcamActor(); \
	friend struct Z_Construct_UClass_AWebcamActor_Statics; \
public: \
	DECLARE_CLASS(AWebcamActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnComVis"), NO_API) \
	DECLARE_SERIALIZER(AWebcamActor)


#define AnComVisSource_Plugins_AnComVis_Source_AnComVis_Public_WebcamActor_h_35_INCLASS \
private: \
	static void StaticRegisterNativesAWebcamActor(); \
	friend struct Z_Construct_UClass_AWebcamActor_Statics; \
public: \
	DECLARE_CLASS(AWebcamActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnComVis"), NO_API) \
	DECLARE_SERIALIZER(AWebcamActor)


#define AnComVisSource_Plugins_AnComVis_Source_AnComVis_Public_WebcamActor_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWebcamActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWebcamActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWebcamActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWebcamActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWebcamActor(AWebcamActor&&); \
	NO_API AWebcamActor(const AWebcamActor&); \
public:


#define AnComVisSource_Plugins_AnComVis_Source_AnComVis_Public_WebcamActor_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWebcamActor(AWebcamActor&&); \
	NO_API AWebcamActor(const AWebcamActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWebcamActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWebcamActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWebcamActor)


#define AnComVisSource_Plugins_AnComVis_Source_AnComVis_Public_WebcamActor_h_35_PRIVATE_PROPERTY_OFFSET
#define AnComVisSource_Plugins_AnComVis_Source_AnComVis_Public_WebcamActor_h_32_PROLOG \
	AnComVisSource_Plugins_AnComVis_Source_AnComVis_Public_WebcamActor_h_35_EVENT_PARMS


#define AnComVisSource_Plugins_AnComVis_Source_AnComVis_Public_WebcamActor_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnComVisSource_Plugins_AnComVis_Source_AnComVis_Public_WebcamActor_h_35_PRIVATE_PROPERTY_OFFSET \
	AnComVisSource_Plugins_AnComVis_Source_AnComVis_Public_WebcamActor_h_35_RPC_WRAPPERS \
	AnComVisSource_Plugins_AnComVis_Source_AnComVis_Public_WebcamActor_h_35_CALLBACK_WRAPPERS \
	AnComVisSource_Plugins_AnComVis_Source_AnComVis_Public_WebcamActor_h_35_INCLASS \
	AnComVisSource_Plugins_AnComVis_Source_AnComVis_Public_WebcamActor_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AnComVisSource_Plugins_AnComVis_Source_AnComVis_Public_WebcamActor_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnComVisSource_Plugins_AnComVis_Source_AnComVis_Public_WebcamActor_h_35_PRIVATE_PROPERTY_OFFSET \
	AnComVisSource_Plugins_AnComVis_Source_AnComVis_Public_WebcamActor_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	AnComVisSource_Plugins_AnComVis_Source_AnComVis_Public_WebcamActor_h_35_CALLBACK_WRAPPERS \
	AnComVisSource_Plugins_AnComVis_Source_AnComVis_Public_WebcamActor_h_35_INCLASS_NO_PURE_DECLS \
	AnComVisSource_Plugins_AnComVis_Source_AnComVis_Public_WebcamActor_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AnComVisSource_Plugins_AnComVis_Source_AnComVis_Public_WebcamActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
