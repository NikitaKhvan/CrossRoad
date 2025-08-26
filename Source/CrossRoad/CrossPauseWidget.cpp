// Fill out your copyright notice in the Description page of Project Settings.


#include "CrossPauseWidget.h"
#include "GameFramework/GameModeBase.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"

void UCrossPauseWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	if (ClearPauseButton) {
		ClearPauseButton->OnClicked.AddDynamic(this, &UCrossPauseWidget::OnClearPause);
	}

	if (RestartButton) {
		RestartButton->OnClicked.AddDynamic(this, &UCrossPauseWidget::OnRestart);
	}

	if (MainMenuButton) {
		MainMenuButton->OnClicked.AddDynamic(this, &UCrossPauseWidget::OnMainMenu);
	}

	WidgetTitles.Add(ECrossTheRoad::Pause, FText::FromString("Pause"));
	WidgetTitles.Add(ECrossTheRoad::GameOver, FText::FromString("Game Over"));

	if (GetWorld()) {
		const auto GameMode = Cast<ACrossRoadGameModeBase>(GetWorld()->GetAuthGameMode());
		if (GameMode) {
			GameMode->OnGameStateChanged.AddUObject(this, &UCrossPauseWidget::OnGameStateChanged);
		}
	}
}

void UCrossPauseWidget::OnClearPause()
{
	if (!GetWorld() || !GetWorld()->GetAuthGameMode()) return;

	GetWorld()->GetAuthGameMode()->ClearPause();
}

void UCrossPauseWidget::OnRestart()
{
	const FString CurrentLevelName = UGameplayStatics::GetCurrentLevelName(this);
	UGameplayStatics::OpenLevel(this, FName(CurrentLevelName));
}

void UCrossPauseWidget::OnMainMenu()
{
	if (!GetWorld()) return;

	const auto CrossGameInstance = GetWorld()->GetGameInstance<UCrossGameInstance>();

	if (!CrossGameInstance) return;

	if (CrossGameInstance->GetMainMenuLevelName().IsNone()) {
		UE_LOG(LogTemp, Error, TEXT("MainMenu name in NONE"));
		return;
	}
	UGameplayStatics::OpenLevel(this, CrossGameInstance->GetMainMenuLevelName());
}

void UCrossPauseWidget::OnGameStateChanged(ECrossTheRoad State)
{
	UE_LOG(LogTemp, Error, TEXT("Game State Name is %s"), *UEnum::GetValueAsString(State))

		if (WidgetTitles.Contains(State)) {
			MenuTitle->SetText(WidgetTitles[State]);
		}

	switch (State) {
	case ECrossTheRoad::GameOver:
		ClearPauseButton->SetVisibility(ESlateVisibility::Hidden);
		break;
	}
}
