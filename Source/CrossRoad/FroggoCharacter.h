// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MapGenerator.h"
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
	bool bCanMove = true;
	void MoveForward();
	void MoveRight();
	void MoveLeft();
	void PauseMovement();
	FTimerHandle TimerHandle;
	
};
