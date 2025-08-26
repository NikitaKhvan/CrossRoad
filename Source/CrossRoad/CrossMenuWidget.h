// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CrossMenuWidget.generated.h"

/**
 * 
 */

class UButton;


UCLASS()
class CROSSROAD_API UCrossMenuWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeOnInitialized() override;

	UPROPERTY(meta = (BindWidget))
	UButton* StartGameButton;

	UPROPERTY(meta = (BindWidget))
	UButton* ExitGameButton;

private:
	UFUNCTION()
	void OnGameStart();

	UFUNCTION()
	void OnExitGame();

	
};
