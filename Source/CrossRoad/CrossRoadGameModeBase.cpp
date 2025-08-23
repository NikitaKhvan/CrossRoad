// Copyright Epic Games, Inc. All Rights Reserved.


#include "CrossRoadGameModeBase.h"
#include "PlayerPawn.h"

ACrossRoadGameModeBase::ACrossRoadGameModeBase()
{
	DefaultPawnClass = APlayerPawn::StaticClass();
}
