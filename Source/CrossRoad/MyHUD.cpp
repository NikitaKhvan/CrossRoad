// Fill out your copyright notice in the Description page of Project Settings.


#include "MyHUD.h"
#include "Engine/Canvas.h"
#include "Blueprint/UserWidget.h"
#include "CrossRoadGameModeBase.h"

void AMyHUD::DrawHUD()
{
	float CenterX = Canvas->SizeX / 2;
	float CenterY = Canvas->SizeY / 2;
	DrawLine(CenterX, CenterY - 10, CenterX, CenterY + 10, FLinearColor::Green, 2.0f);
	DrawLine(CenterX + 10, CenterY, CenterX - 10, CenterY, FLinearColor::Green, 2.0f);
}

void AMyHUD::BeginPlay()
{
	Super::BeginPlay();


	GameWidgets.Add(ECrossTheRoad::InProgress, CreateWidget<UUserWidget>(GetWorld(), PlayerHUDWidget));
	GameWidgets.Add(ECrossTheRoad::Pause, CreateWidget<UUserWidget>(GetWorld(), PauseWidget));
	GameWidgets.Add(ECrossTheRoad::GameOver, CreateWidget<UUserWidget>(GetWorld(), PauseWidget));

	for (auto GameWidgetPair : GameWidgets) {
		const auto GameWidget = GameWidgetPair.Value;
		if (!GameWidget) continue;

		GameWidget->AddToViewport();
		GameWidget->SetVisibility(ESlateVisibility::Hidden);
	}

	if (GetWorld()) {
		const auto GameMode = Cast<ACrossRoadGameModeBase>(GetWorld()->GetAuthGameMode());
		if (GameMode) {
			GameMode->OnGameStateChanged.AddUObject(this, &AMyHUD::OnGameStateChanged);
		}
	}
}

void AMyHUD::OnGameStateChanged(ECrossTheRoad State)
{
	UE_LOG(LogTemp, Display, TEXT("Game mode changed: %s"), *UEnum::GetValueAsString(State));

	if (CurrentWidget) {
		CurrentWidget->SetVisibility(ESlateVisibility::Hidden);
	}

	if (GameWidgets.Contains(State)) {
		CurrentWidget = GameWidgets[State];
	}

	if (CurrentWidget) {
		CurrentWidget->SetVisibility(ESlateVisibility::Visible);
	}

}
