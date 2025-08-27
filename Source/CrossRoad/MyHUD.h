// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "CrossGameInstance.h"
#include "MyHUD.generated.h"

/**
 * 
 */
UCLASS()
class CROSSROAD_API AMyHUD : public AHUD
{
	GENERATED_BODY()

private:
	void OnGameStateChanged(ECrossTheRoad State);

	UPROPERTY()
	TMap<ECrossTheRoad, UUserWidget*> GameWidgets;

	UUserWidget* CurrentWidget = nullptr;

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUserWidget> PlayerHUDWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUserWidget> PauseWidget;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
