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
	//GenChunkInitial();
	
}

// Called every frame
void AMapGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//void amapgenerator::genchunkinitial()
//{
//	ftransform test = ftransform(frotator(0.0f, -90.0f, 0.0f), fvector(-140.0f, 0.0f, 110.0f));
//	uworld* world = getworld();
//	if (world) {
//		world->spawnactor<amapchunk>(chunkclassinitial, test);
//	}
//	ue_log(logtemp, display, text("generated successfuly"));
//}

void AMapGenerator::GenChunkCollision(FVector PawnLoc)
{
	PawnLoc.X += 350.0f;
	PawnLoc.Z = 110.0f;
	PawnLoc.Y = 0.f;
	FTransform test = FTransform(FRotator(0.0f, -90.0f, 0.0f), PawnLoc);
	UWorld* World = GetWorld();
	if (World) {
		World->SpawnActor<AMapChunk>(ChunkClass, test);
	}
	//UE_LOG(LogTemp, Display, TEXT("GENERATED SUCCESSFULY"));
}

