// Fill out your copyright notice in the Description page of Project Settings.


#include "CrossTheRoadMenuGameModeBase.h"
#include "MenuPlayerController.h"
#include "MenuHUD.h"

ACrossTheRoadMenuGameModeBase::ACrossTheRoadMenuGameModeBase()
{
	PlayerControllerClass = AMenuPlayerController::StaticClass();
	HUDClass = AMenuHUD::StaticClass();
}
