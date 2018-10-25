// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "AnComVis.h"

#define LOCTEXT_NAMESPACE "FAnComVisModule"

void FAnComVisModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FAnComVisModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FAnComVisModule, AnComVis)