// Fill out your copyright notice in the Description page of Project Settings.


#include "MapGenerator.h"
#include "EngineUtils.h"
#include "Kismet/GameplayStatics.h"

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
	
}

// Called every frame
void AMapGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMapGenerator::RemoveOldRoads(int32 NumToRemove)
{
	while (SpawnedRoads.Num() > 0 && NumToRemove > 0)
	{
		if (AActor* OldRoad = SpawnedRoads[0])
		{
			OldRoad->Destroy();
			TArray<AActor*> Roads;
			UGameplayStatics::GetAllActorsOfClass(GetWorld(), AActor::StaticClass(), Roads);

			for (AActor* Road : Roads)
			{
				if (Road && Road->GetName() == TEXT("BP_StartMapChunk_2"))
				{
					Road->Destroy();
					break;
				}
			}
		}
		SpawnedRoads.RemoveAt(0);
		NumToRemove--;
	}
}



void AMapGenerator::GenChunkCollision(FVector PawnLoc)
{
	PawnLoc.X += 350.0f;
	PawnLoc.Z = 110.0f;
	PawnLoc.Y = 0.f;
	FTransform test = FTransform(FRotator(0.0f, -90.0f, 0.0f), PawnLoc);
	UWorld* World = GetWorld();
	if (World) {
		AActor* NewRoad = World->SpawnActor<AMapChunk>(ChunkClass, test);
		SpawnedRoads.Add(NewRoad);
	}
}

