// Copyright Epic Games, Inc. All Rights Reserved.

/*базовый гейм мод, здесь происходит инициализация уровня, персонажа, худа, контроллера и всего прочего, в том числе смена
стейтов: пауза, прогресс, гейм овер*/
#include "CrossRoadGameModeBase.h"
#include "FroggoCharacter.h"
#include "MyPlayerController.h"
#include "EngineUtils.h"
#include "MyHUD.h"

ACrossRoadGameModeBase::ACrossRoadGameModeBase()
{
	DefaultPawnClass = AFroggoCharacter::StaticClass();
	PlayerControllerClass = AMyPlayerController::StaticClass();
	HUDClass = AMyHUD::StaticClass();
}

bool ACrossRoadGameModeBase::SetPause(APlayerController* PC, FCanUnpause CanUnpauseDelegate)
{
	const bool isPaused = Super::SetPause(PC, CanUnpauseDelegate);

	if (isPaused) SetGameState(ECrossTheRoad::Pause);

	return isPaused;
}

bool ACrossRoadGameModeBase::ClearPause()
{
	const auto PauseCleared = Super::ClearPause();
	if (PauseCleared) {
		SetGameState(ECrossTheRoad::InProgress);
	}

	return PauseCleared;
}

void ACrossRoadGameModeBase::SetGameover()
{
	SetGameState(ECrossTheRoad::GameOver);
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
