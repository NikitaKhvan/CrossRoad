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

	FVector MoveDirection;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	//переменная в которой хранятся уже затронутые колижен боксы 
	UPROPERTY()
	TSet<UPrimitiveComponent*> ProcessedComponents;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
	bool bIsMoving;

	//монтаж движения
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Animation")
	UAnimMontage* MoveAnim;

	//монтаж смерти
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Animation")
	UAnimMontage* DieAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound")
	USoundBase* DeathSound;

	//вызов анимации движения
	void TryMove(const FVector& Direction);

	//callback для конца анимации
	UFUNCTION()
	void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	void MoveForward();
	void MoveRight();
	void MoveLeft();
	bool bAlive = true;
};
