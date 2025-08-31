// Fill out your copyright notice in the Description page of Project Settings.


#include "DoMoveAnimNotify.h"

void UDoMoveAnimNotify::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	OnNotified.Broadcast();
	Super::Notify(MeshComp, Animation);
}
