// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "DoMoveAnimNotify.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnNotifiedSignature);

/**
 * 
 */
UCLASS()
class CROSSROAD_API UDoMoveAnimNotify : public UAnimNotify
{
	GENERATED_BODY()
	
public:
	FOnNotifiedSignature OnNotified;
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;
};
