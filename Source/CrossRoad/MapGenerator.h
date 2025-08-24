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
	void GenChunkCollision(FVector PawnLoc);

protected:

	UPROPERTY(EditAnywhere)
	TSubclassOf<AMapChunk> ChunkClass;
	UPROPERTY(EditAnywhere)
	TSubclassOf<AMapChunk> ChunkClassInitial;
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	/*void GenChunkInitial();*/
};
