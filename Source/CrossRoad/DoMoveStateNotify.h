// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "DoMoveStateNotify.generated.h"



/**
 * 
 */
UCLASS()
class CROSSROAD_API UDoMoveStateNotify : public UAnimNotifyState
{
	GENERATED_BODY()

public:
    // Длина смещения
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
    float MoveDistance = 100.f;

protected:
    virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) override;
    virtual void NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime) override;
    virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;

private:
    FVector StartLocation;
    FVector TargetLocation;
    float Duration;
    float Elapsed;
};
