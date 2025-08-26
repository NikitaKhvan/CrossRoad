// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "CrossGameInstance.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class ECrossTheRoad : uint8
{
	WaitingToStart = 0,
	InProgress,
	Pause,
	GameOver
};
UCLASS()
class CROSSROAD_API UCrossGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	FName GetStartLevelName() const { return StartLevelName; }
	FName GetMainMenuLevelName() const { return MainMenuLevelName; }
	
protected:
	UPROPERTY(EditDefaultsOnly, Category = "Game")
	FName MainMenuLevelName = NAME_None;

	UPROPERTY(EditDefaultsOnly, Category = "Game")
	FName StartLevelName = NAME_None;
};
