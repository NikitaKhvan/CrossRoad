// Fill out your copyright notice in the Description page of Project Settings.


#include "CarSpawnerActor.h"
#include "FroggoCharacter.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ACarSpawnerActor::ACarSpawnerActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACarSpawnerActor::BeginPlay()
{
	Super::BeginPlay();

    if (ActorToSpawn.Num()>0)
    {
        SpawnActor();
        UE_LOG(LogTemp, Warning, TEXT("TRYING TO SPAWN"));
        GetWorldTimerManager().SetTimer(
            SpawnTimerHandle,
            this,
            &ACarSpawnerActor::SpawnActor,
            FMath::FRandRange(2.5f, SpawnInterval),
            true
        );
        AFroggoCharacter* Frog = Cast<AFroggoCharacter>(UGameplayStatics::GetActorOfClass(GetWorld(), AFroggoCharacter::StaticClass()));
        if (Frog && Frog->Counter > 0 && Frog->Counter % 2) {
            SpawnInterval = FMath::Clamp(SpawnInterval - 0.5f, 0.0f, 2.5f);
        }
    }
	
}

void ACarSpawnerActor::SpawnActor()
{
    if (ActorToSpawn.Num()>0)
    {
        int32 RandomIndex = FMath::RandRange(0, ActorToSpawn.Num() - 1);
        TSubclassOf<AActor> SelectedClass = ActorToSpawn[RandomIndex];
        
        if (SelectedClass)
        {
            UWorld* World = GetWorld();
            if (World)
            {
                FActorSpawnParameters SpawnParams;
                SpawnParams.Owner = this;

                FVector Location = GetActorLocation();
                FRotator Rotation = GetActorRotation();

                GetWorld()->SpawnActor<AActor>(SelectedClass, Location, Rotation, SpawnParams);
                //UE_LOG(LogTemp, Warning, TEXT("SPAWN at: %f"), Location);
            }
        }
    }
}

// Called every frame
void ACarSpawnerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

