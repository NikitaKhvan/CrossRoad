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
//оптимизатор который удаляет дороги, принимает на вход количество удаляемых дорог, проходится по списку заспаунленых и удаляет их
//также насильно удаляет стартовый чанк (костыль так как он чисто булпринтовый и не хотелось его делать с нуля)
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


//Здесь происходит генерация дорог
void AMapGenerator::GenChunkCollision()
{
	UWorld* World = GetWorld();
	if (World) {
		//код выполняется дважды, в начале каждой итерации добавляется одна сейфзона и происходит смещение спаун локации
		//на ширину одного блока дороги, после рандомно спаунится от 1 до 3 дорог и на второй прогон добавляется зона спаунер
		//также все добавленные дороги записываются в SpawnedRoads для дальнейшей работы оптимизатора который удаляет дороги
		for (int i = 0; i<2; i++){
			AActor* NewSafeZone = World->SpawnActor<AMapChunk>(SafeZone, FTransform(FRotator(0.0f, -90.0f, 0.0f), SpawnLoc));
			SpawnLoc.X += 100.0f;
			SpawnedRoads.Add(NewSafeZone);
			int32 j = FMath::FRandRange(1, 3);
			for (j; j > 0; j--) {
				AActor* SpawnedActor = World->SpawnActor<AActor>(RoadsActor, FTransform(FRotator(0.0f,-90.0f, 0), SpawnLoc));
				SpawnedRoads.Add(SpawnedActor);
				SpawnLoc.X += 200.0f;
			}
			if (i < 1) {
				AActor* NewSpawnerZone = World->SpawnActor<AMapChunk>(SafeZoneSpawner, FTransform(FRotator(0.0f, -90.0f, 0.0f), SpawnLoc));
				SpawnLoc.X += 200.0f;
				SpawnedRoads.Add(NewSpawnerZone);
			}
		}
	}
}

