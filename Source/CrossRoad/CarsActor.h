// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CarsActor.generated.h"

UCLASS()
class CROSSROAD_API ACarsActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACarsActor();

	UPROPERTY(EditAnywhere, Category="Speed")
	float Speed = 100.0f;

	UPROPERTY(EditAnywhere)
	float Disatance = 1000.0f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);

private:
	FVector StartDistance;

	FTimerHandle DestroyTimerHandle;

	void Drive();

	void DestroyCar();
};
