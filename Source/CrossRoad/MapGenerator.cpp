// Fill out your copyright notice in the Description page of Project Settings.


#include "MapGenerator.h"

// Sets default values
AMapGenerator::AMapGenerator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMapGenerator::BeginPlay()
{
	Super::BeginPlay();
	//GenChunk();
	
}

// Called every frame
void AMapGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMapGenerator::GenChunk(FVector PawnLoc)
{
	PawnLoc.X += 250.0f;
	FTransform test = FTransform(FRotator(0.0f, -90.0f, 0.0f), PawnLoc);
	UWorld* World = GetWorld();
	if (World) {
		World->SpawnActor<AMapChunk>(ChunkClass, test);
	}
	UE_LOG(LogTemp, Display, TEXT("GENERATED SUCCESSFULY"),);
}

