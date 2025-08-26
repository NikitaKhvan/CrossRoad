// Fill out your copyright notice in the Description page of Project Settings.


#include "MenuHUD.h"
#include "Blueprint/UserWidget.h"

void AMenuHUD::BeginPlay()
{
	Super::BeginPlay();

	const auto MenuWidget = CreateWidget<UUserWidget>(GetWorld(), MenuWidgetClass);
	if (MenuWidget) {
		MenuWidget->AddToViewport();
	}
}
