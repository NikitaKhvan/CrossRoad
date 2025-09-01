// Fill out your copyright notice in the Description page of Project Settings.

/*бейс мод для главного меню, передаем какой виджет отображать и кто будет управлять*/
#include "CrossTheRoadMenuGameModeBase.h"
#include "MenuPlayerController.h"
#include "MenuHUD.h"

ACrossTheRoadMenuGameModeBase::ACrossTheRoadMenuGameModeBase()
{
	PlayerControllerClass = AMenuPlayerController::StaticClass();
	HUDClass = AMenuHUD::StaticClass();
}
