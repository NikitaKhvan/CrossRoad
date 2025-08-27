// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CrossRoadGameModeBase.h"
#include "CrossPauseWidget.generated.h"

/**
 * 
 */
class UButton;
class UTextBlock;
UCLASS()
class CROSSROAD_API UCrossPauseWidget : public UUserWidget
{
	GENERATED_BODY()

protected:

	virtual void NativeOnInitialized() override;

	UPROPERTY(meta = (BindWidget))
	UButton* ResumeBTN;

	UPROPERTY(meta = (BindWidget))
	UButton* RestartBTN;

	UPROPERTY(meta = (BindWidget))
	UButton* MMBTN;

	UPROPERTY(meta = (BindWidget))
	UButton* QuitBTN;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* MenuTitle;


private:
	UFUNCTION()
	void OnClearPause();

	UFUNCTION()
	void OnRestart();

	UFUNCTION()
	void OnMainMenu();

	UFUNCTION()
	void OnQuit();

	void OnGameStateChanged(ECrossTheRoad State);

	TMap<ECrossTheRoad, FText> WidgetTitles;
};
