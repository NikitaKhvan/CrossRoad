// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CrossGameInstance.h"
#include "CrossRoadGameModeBase.generated.h"

/**
 * 
 */
DECLARE_MULTICAST_DELEGATE_OneParam(FOnGameStateChangedSignature, ECrossTheRoad);

UCLASS()
class CROSSROAD_API ACrossRoadGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
	ACrossRoadGameModeBase();

public:
	
	FOnGameStateChangedSignature OnGameStateChanged;
	virtual bool SetPause(APlayerController* PC, FCanUnpause CanUnpauseDelegate = FCanUnpause()) override;
	virtual bool ClearPause() override;
	void SetGameover();

private:
	void StartPlay() override;

	ECrossTheRoad GameState = ECrossTheRoad::WaitingToStart;


	void SetGameState(ECrossTheRoad State);

	void GameOver();
};
