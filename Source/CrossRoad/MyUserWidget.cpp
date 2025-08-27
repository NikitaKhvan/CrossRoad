// Fill out your copyright notice in the Description page of Project Settings.


#include "MyUserWidget.h"
#include "FroggoCharacter.h"
#include "Kismet/GameplayStatics.h"

int32 UMyUserWidget::GetRoadsCount() const
{
	AFroggoCharacter* Frog = Cast<AFroggoCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	if (Frog)
	{
		return Frog->Counter;
	}
	return 0;
}
