// Fill out your copyright notice in the Description page of Project Settings.


#include "MapChunk.h"
#include "CarsActor.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AMapChunk::AMapChunk()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMapChunk::BeginPlay()
{
	Super::BeginPlay();
	ACarsActor* Car = Cast<ACarsActor>(UGameplayStatics::GetActorOfClass(GetWorld(), ACarsActor::StaticClass()));
	if (Car) {
		Car->Speed += 50.0f;
	}
}

// Called every frame
void AMapChunk::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

