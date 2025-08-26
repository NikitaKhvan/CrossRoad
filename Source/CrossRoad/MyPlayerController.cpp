// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"
#include "GameFramework/GameModeBase.h"
#include "CrossRoadGameModeBase.h"

void AMyPlayerController::BeginPlay()
{
	if (GetWorld()) {
		const auto GameMode = Cast<ACrossRoadGameModeBase>(GetWorld()->GetAuthGameMode());
		if (GameMode) {
			GameMode->OnGameStateChanged.AddUObject(this, &AMyPlayerController::OnGameStateChanged);
		}
	}
}

void AMyPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	if (!InputComponent) return;
	InputComponent->BindAction("Pause", EInputEvent::IE_Pressed, this, &AMyPlayerController::OnPauseGame);
}

void AMyPlayerController::OnPauseGame()
{
	if (!GetWorld() || !GetWorld()->GetAuthGameMode()) return;

	GetWorld()->GetAuthGameMode()->SetPause(this);
}

void AMyPlayerController::OnGameStateChanged(ECrossTheRoad State)
{
	if (State == ECrossTheRoad::InProgress) {
		SetInputMode(FInputModeGameOnly());
		bShowMouseCursor = false;
	}
	else {
		SetInputMode(FInputModeUIOnly());
		bShowMouseCursor = true;
	}
}
