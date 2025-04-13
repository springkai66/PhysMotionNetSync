// Copyright Epic Games, Inc. All Rights Reserved.

#include "PhysMotionNetSync.h"

#define LOCTEXT_NAMESPACE "FPhysMotionNetSyncModule"

void FPhysMotionNetSyncModule::StartupModule()
{
	this->OnPhysSceneInit = FPhysicsDelegates::OnPhysSceneInit.AddRaw(this, &FPhysMotionNetSyncModule::PhysScene_OnPhysSceneInit);
	this->OnPhysSceneTerm = FPhysicsDelegates::OnPhysSceneTerm.AddRaw(this, &FPhysMotionNetSyncModule::PhysScene_OnPhysSceneTerm);
}

void FPhysMotionNetSyncModule::ShutdownModule()
{
	FPhysicsDelegates::OnPhysSceneInit.Remove(this->OnPhysSceneInit);
	FPhysicsDelegates::OnPhysSceneTerm.Remove(this->OnPhysSceneTerm);
}

void FPhysMotionNetSyncModule::PhysScene_OnPhysSceneInit(FPhysScene *Scene)
{
	
}

void FPhysMotionNetSyncModule::PhysScene_OnPhysSceneTerm(FPhysScene *Scene)
{
	
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FPhysMotionNetSyncModule, PhysMotionNetSync)