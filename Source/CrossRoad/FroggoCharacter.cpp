// Fill out your copyright notice in the Description page of Project Settings.


#include "FroggoCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Components/CapsuleComponent.h"
#include "CarsActor.h"
#include "PhysicalMaterials/PhysicalMaterial.h"


// Sets default values
AFroggoCharacter::AFroggoCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Counter = 0;

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
		if (!ProcessedComponents.Contains(OtherComp))
		{
			ProcessedComponents.Add(OtherComp);
			if (OtherComp->ComponentHasTag("Spawner")) {
				AMapGenerator* Spawner = Cast<AMapGenerator>(UGameplayStatics::GetActorOfClass(GetWorld(), AMapGenerator::StaticClass()));
				if (Spawner)
				{
					Spawner->GenChunkCollision(AFroggoCharacter::GetActorLocation());
				}
			}
			Counter++;
			UE_LOG(LogTemp, Warning, TEXT("CONGRATS POINTS: %i"), Counter)
			if (Counter>9 && Counter % 5 == 0)
			{
				if (AMapGenerator* Spawner = Cast<AMapGenerator>(
					UGameplayStatics::GetActorOfClass(GetWorld(), AMapGenerator::StaticClass())))
				{
					Spawner->RemoveOldRoads(5);
				}
			}

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
	//PlayerInputComponent->BindAction("Pause", EInputEvent::IE_Pressed, this, &AFroggoCharacter::OnPauseGame);
}

void AFroggoCharacter::MoveForward()
{
	if (bCanMove) {
		FVector Forward = GetActorForwardVector();
		FVector NewLocation = GetActorLocation() + Forward * 100.0f;
		PauseMovement();
		SetActorLocation(NewLocation, true);
		GetWorldTimerManager().SetTimer(TimerHandle, this, &AFroggoCharacter::PauseMovement, 0.3f, false);
	}
}

void AFroggoCharacter::MoveRight()
{
	if (bCanMove) {
		FVector Right = GetActorRightVector();
		FVector NewLocation = GetActorLocation() + Right * 100.0f;
		PauseMovement();
		SetActorLocation(NewLocation, true);
		GetWorldTimerManager().SetTimer(TimerHandle, this, &AFroggoCharacter::PauseMovement, 0.3f, false);
	}
}

void AFroggoCharacter::MoveLeft()
{
	if (bCanMove) {
		FVector Right = GetActorRightVector();
		FVector NewLocation = GetActorLocation() + Right * -100.0f;
		PauseMovement();
		SetActorLocation(NewLocation, true);
		GetWorldTimerManager().SetTimer(TimerHandle, this, &AFroggoCharacter::PauseMovement, 0.3f, false);
	}
}

void AFroggoCharacter::PauseMovement()
{
	bCanMove = !bCanMove;
}




