// Fill out your copyright notice in the Description page of Project Settings.


#include "CrossMenuWidget.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "CrossGameInstance.h"

void UCrossMenuWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	if (StartBTN) {
		StartBTN->OnClicked.AddDynamic(this, &UCrossMenuWidget::OnGameStart);
	}

	if (QuitBTN) {
		QuitBTN->OnClicked.AddDynamic(this, &UCrossMenuWidget::OnExitGame);
	}
}

void UCrossMenuWidget::OnGameStart()
{
	UE_LOG(LogTemp, Error, TEXT("Level name in NONE"));
	if (!GetWorld()) {  return; }

	const auto CrossGameInstance = GetWorld()->GetGameInstance<UCrossGameInstance>();
	UE_LOG(LogTemp, Error, TEXT("Level name in NONE"));

	if (!CrossGameInstance) {
		UE_LOG(LogTemp, Error, TEXT("Level name in NONE")); return;
	}

	if (CrossGameInstance->GetStartLevelName().IsNone()) {
		UE_LOG(LogTemp, Error, TEXT("Level name in NONE"));
		return;
	}

	UGameplayStatics::OpenLevel(this, CrossGameInstance->GetStartLevelName());
}

void UCrossMenuWidget::OnExitGame()
{
	UKismetSystemLibrary::QuitGame(this, GetOwningPlayer(), EQuitPreference::Quit, true);
}
