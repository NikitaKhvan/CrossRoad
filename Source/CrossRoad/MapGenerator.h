// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapChunk.h"
#include "MapGenerator.generated.h"



UCLASS()
class CROSSROAD_API AMapGenerator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMapGenerator();
	void GenChunkCollision();
	void RemoveOldRoads(int32 NumToRemove);

protected:
	//Задается зона спауна дорог
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn")
	TSubclassOf<AMapChunk> SafeZoneSpawner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn")
	TSubclassOf<AMapChunk> SafeZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn")
	TSubclassOf<AMapChunk> RoadsActor;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY()
	TArray<AActor*> SpawnedRoads;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	FVector SpawnLoc = FVector(660.0f, 0.0f, 110.0f);
};
