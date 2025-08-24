// Fill out your copyright notice in the Description page of Project Settings.


#include "FroggoCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Components/CapsuleComponent.h"
#include "CarsActor.h"

// Sets default values
AFroggoCharacter::AFroggoCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


}

// Called when the game starts or when spawned
void AFroggoCharacter::BeginPlay()
{
	Super::BeginPlay();
	GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &AFroggoCharacter::OnOverlapBegin);																			
	
}

void AFroggoCharacter::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	

	if (OtherActor && OtherActor != this)
	{	
		if (OtherActor->IsA(ACarsActor::StaticClass()))
		{
			//UE_LOG(LogTemp, Warning, TEXT("Character hit by car! Restarting level..."));
			UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
			return;
		}
		if (!ProcessedActors.Contains(OtherActor))
		{
			ProcessedActors.Add(OtherActor);
			//UE_LOG(LogTemp, Warning, TEXT("First overlap with: %s"), *OtherActor->GetName());
			AMapGenerator* Spawner = Cast<AMapGenerator>(UGameplayStatics::GetActorOfClass(GetWorld(), AMapGenerator::StaticClass())); 
				if (Spawner)
				{
					Spawner->GenChunkCollision(AFroggoCharacter::GetActorLocation());
				}

		}
		else
		{

			//UE_LOG(LogTemp, Warning, TEXT("Ignored repeat overlap with: %s"), *OtherActor->GetName());
		}
	}
}

// Called every frame
void AFroggoCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFroggoCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction("M_Forward", EInputEvent::IE_Pressed, this, &AFroggoCharacter::MoveForward);
	PlayerInputComponent->BindAction("M_Left", EInputEvent::IE_Pressed, this, &AFroggoCharacter::MoveLeft);
	PlayerInputComponent->BindAction("M_Right", EInputEvent::IE_Pressed, this, &AFroggoCharacter::MoveRight);

}

void AFroggoCharacter::MoveForward()
{
	FVector Forward = GetActorForwardVector();
	FVector NewLocation = GetActorLocation() + Forward * 100.0f;

	SetActorLocation(NewLocation, true);
}

void AFroggoCharacter::MoveRight()
{
	FVector Right = GetActorRightVector();
	FVector NewLocation = GetActorLocation() + Right * 100.0f;

	SetActorLocation(NewLocation, true);
}

void AFroggoCharacter::MoveLeft()
{
	FVector Right = GetActorRightVector();
	FVector NewLocation = GetActorLocation() + Right * -100.0f;

	SetActorLocation(NewLocation, true);
}

