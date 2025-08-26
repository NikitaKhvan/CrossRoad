// Copyright Epic Games, Inc. All Rights Reserved.


#include "CrossRoadGameModeBase.h"
#include "FroggoCharacter.h"
#include "MyPlayerController.h"
#include "EngineUtils.h"

ACrossRoadGameModeBase::ACrossRoadGameModeBase()
{
	DefaultPawnClass = AFroggoCharacter::StaticClass();
	PlayerControllerClass = AMyPlayerController::StaticClass();
}

void ACrossRoadGameModeBase::StartPlay()
{
	Super::StartPlay();
	SetGameState(ECrossTheRoad::InProgress);
}

void ACrossRoadGameModeBase::SetGameState(ECrossTheRoad State)
{
	if (GameState == State) return;

	GameState = State;
	OnGameStateChanged.Broadcast(GameState);
}

void ACrossRoadGameModeBase::GameOver()
{
	SetGameState(ECrossTheRoad::GameOver);

	for (auto Pawn : TActorRange<APawn>(GetWorld())) {
		if (Pawn) {
			Pawn->TurnOff();
			Pawn->DisableInput(nullptr);
		}
	}
}
