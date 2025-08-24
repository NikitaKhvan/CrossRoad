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
	Super::BeginPlay();
    GetWorldTimerManager().SetTimer(
        DestroyTimerHandle,
        this,
        &ACarsActor::DestroyCar,
        7.0f,
        true
    );
}

// Called every frame
void ACarsActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (Speed <= 0) {
		return;
	}
    StartDistance = GetActorLocation();
	const FVector NewLocation = GetActorLocation() + GetActorRightVector() * Speed * DeltaTime;
	SetActorLocation(NewLocation);
    
	//UE_LOG(LogTemp, Display, TEXT("POEHALI"));
}

void ACarsActor::NotifyHit(
    UPrimitiveComponent* MyComp,
    AActor* Other,
    UPrimitiveComponent* OtherComp,
    bool bSelfMoved,
    FVector HitLocation,
    FVector HitNormal,
    FVector NormalImpulse,
    const FHitResult& Hit)
{
    Super::NotifyHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);

    if (Other && Other->IsA(AFroggoCharacter::StaticClass()))
    {
        UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
    }
}

void ACarsActor::Drive()
{
	
}

void ACarsActor::DestroyCar()
{
    Destroy();
}

