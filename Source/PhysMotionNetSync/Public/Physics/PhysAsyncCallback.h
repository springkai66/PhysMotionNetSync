#pragma once

#include "Chaos/SimCallbackInput.h"
#include "Chaos/SimCallbackObject.h"
#include "CoreMinimal.h"

// Data that will be used inside the physics thread
struct FPhysAsyncInput : public Chaos::FSimCallbackInput
{
  // Required method
  void Reset() {}
};

// Output from the physics thread
struct FPhysAsyncOutput : public Chaos::FSimCallbackOutput
{
  // Required method
  void Reset() {}
};

class FPhysAsyncCallback : public Chaos::TSimCallbackObject<FPhysAsyncInput, FPhysAsyncOutput> 
{
  // This is the function in which we will do our physics STUFF!
  virtual void OnPreSimulate_Internal() override;
};