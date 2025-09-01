// Fill out your copyright notice in the Description page of Project Settings.


#include "DoMoveStateNotify.h"
#include "FroggoCharacter.h"

void UDoMoveStateNotify::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
    if (AFroggoCharacter* Char = Cast<AFroggoCharacter>(MeshComp->GetOwner()))
    {
        StartLocation = Char->GetActorLocation(); //получаем стартовую локацию персонажа
        TargetLocation = StartLocation + Char->MoveDirection.GetSafeNormal() * MoveDistance; //получаем конечную локацию персонажа
        Duration = TotalDuration;
        Elapsed = 0.f;
    }
    
}

void UDoMoveStateNotify::NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime)
{
    if (ACharacter* Char = Cast<ACharacter>(MeshComp->GetOwner()))
    {
        Elapsed += FrameDeltaTime;
        float Alpha = FMath::Clamp(Elapsed / Duration, 0.f, 1.f);
        float SmoothAlpha = FMath::InterpEaseInOut(0.f, 1.f, Alpha, 2.0f);
        FVector NewLocation = FMath::Lerp(StartLocation, TargetLocation, SmoothAlpha); //плавно смещаем персонажа со стартовой позции на конечную
        Char->SetActorLocation(NewLocation, true);
    }
}

void UDoMoveStateNotify::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
    if (ACharacter* Char = Cast<ACharacter>(MeshComp->GetOwner()))
    {
        Char->SetActorLocation(TargetLocation, true);
    }
}
