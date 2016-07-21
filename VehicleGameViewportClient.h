// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "VehicleGameViewportClient.generated.h"

class UCanvas;

UCLASS(Within=Engine, transient, config=Engine)
class UVehicleGameViewportClient : public UGameViewportClient
{
	GENERATED_UCLASS_BODY()

public:


#if WITH_EDITOR
	virtual void DrawTransition(UCanvas* Canvas) override;
#endif //WITH_EDITOR	
};