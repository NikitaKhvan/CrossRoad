// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MapGenerator.h"
#include "Components/TimelineComponent.h"
#include "Curves/CurveFloat.h"
#include "FroggoCharacter.generated.h"

UCLASS()
class CROSSROAD_API AFroggoCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFroggoCharacter();

	UPROPERTY(BlueprintReadOnly)
	int32 Counter;

	UPROPERTY(EditDefaultsOnly, Category ="Animation")
	UAnimMontage* MoveAnim;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UPROPERTY()
	TSet<UPrimitiveComponent*> ProcessedComponents;

	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	//bool bCanMove = true;
	void MoveForward();
	void MoveRight();
	void MoveLeft();
	void PauseMovement();
	FTimerHandle TimerHandle;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	UTimelineComponent* MovementTimeline;

	// Кривая для управления интерполяцией
	UPROPERTY(EditAnywhere, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	UCurveFloat* MovementCurve;

	// Начальная и конечная позиции движения
	FVector MovementStartLocation;
	FVector MovementTargetLocation;

	// Флаги состояния
	bool bCanMove;
	bool bIsMoving;

	// Таймер хендл
	FTimerHandle MovementTimerHandle;

	// Делегаты для таймлайна
	FOnTimelineFloat TimelineProgressDelegate;
	FOnTimelineEvent TimelineFinishedDelegate;

	// Функции обратного вызова для таймлайна
	UFUNCTION()
	void HandleTimelineProgress(float Value);

	UFUNCTION()
	void HandleTimelineFinished();

};
