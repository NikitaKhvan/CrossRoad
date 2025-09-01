// Fill out your copyright notice in the Description page of Project Settings.


#include "CarsActor.h"
#include "FroggoCharacter.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ACarsActor::ACarsActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACarsActor::BeginPlay()
{
    //����������� ������� �� �������, ������ ����� �� 10 ������
	Super::BeginPlay();
    GetWorldTimerManager().SetTimer(
        DestroyTimerHandle,
        this,
        &ACarsActor::DestroyCar,
        10.0f,
        true
    );
}

// Called every frame
void ACarsActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    Drive(Speed, DeltaTime);//���������� � ���� ����� �������� ���� �����������
}

//������� �������� ��� �������, ������ �������� ������ � �������� ���������
void ACarsActor::Drive(float Velocity, float DeltaTime)
{   
    if (Velocity <= 0) {
        return;
    }
    StartDistance = GetActorLocation();
    const FVector NewLocation = GetActorLocation() + GetActorRightVector() * Velocity * DeltaTime;
    SetActorLocation(NewLocation);
}

void ACarsActor::DestroyCar()
{
    Destroy();
}

