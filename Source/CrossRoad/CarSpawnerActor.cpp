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
    //спаун машин происходит по таймеру
    if (ActorToSpawn.Num()>0)
    {
        SpawnActor();
        GetWorldTimerManager().SetTimer(
            SpawnTimerHandle,
            this,
            &ACarSpawnerActor::SpawnActor,
            FMath::FRandRange(2.5f, SpawnInterval),
            true
        );
        //возможно неправильно расположил данный элемент, по задумке наращивание сложности происходит по достижению четного кол-ва
        //очков, расчет на то что бегин плей вызывается при создании нового спаунера потому происходит проверка четности очков
        //и если количество очков четное то спаун интервал сокращается на пол секунды, до тех пор пока не достигнет 2.5 секунд
        //меньший интервал приводил к непроходимым дорогам.
        AFroggoCharacter* Frog = Cast<AFroggoCharacter>(UGameplayStatics::GetActorOfClass(GetWorld(), AFroggoCharacter::StaticClass()));
        if (Frog && Frog->Counter > 0 && Frog->Counter % 2) {
            SpawnInterval = FMath::Clamp(SpawnInterval - 0.5f, 0.0f, 2.5f);
        }
    }
	
}
//функция для спауна актеров класса ACarsActor
//рандомно из массива берет одно из значений и пробует спаунить его в мире
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
            }
        }
    }
}

// Called every frame
void ACarSpawnerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

