// Fill out your copyright notice in the Description page of Project Settings.


#include "FroggoCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Components/CapsuleComponent.h"
#include "CarsActor.h"
#include "CrossRoadGameModeBase.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "PhysicalMaterials/PhysicalMaterial.h"


// Sets default values
AFroggoCharacter::AFroggoCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Counter = 0;
	MovementTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("MovementTimeline"));

	// ��������� ���������� Timeline
	MovementTimeline->SetLooping(false);
	MovementTimeline->SetIgnoreTimeDilation(false);
	MovementTimeline->SetTimelineLength(0.2f); // ������������ �������� � ��������
	MovementTimeline->SetTimelineLengthMode(ETimelineLengthMode::TL_LastKeyFrame);

	// ������������� ����������
	bCanMove = true;
	bIsMoving = false;
}


// Called when the game starts or when spawned
void AFroggoCharacter::BeginPlay()
{
	Super::BeginPlay();
	GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &AFroggoCharacter::OnOverlapBegin);

	if (!MovementCurve)
	{
		UE_LOG(LogTemp, Error, TEXT("MovementCurve is not set for %s! Please assign a curve in the blueprint."), *GetName());
		return;
	}

	// ��������� ���������
	TimelineProgressDelegate.BindUFunction(this, FName("HandleTimelineProgress"));
	TimelineFinishedDelegate.BindUFunction(this, FName("HandleTimelineFinished"));

	// ���������� ������������ � ���������
	MovementTimeline->AddInterpFloat(MovementCurve, TimelineProgressDelegate);
	MovementTimeline->SetTimelineFinishedFunc(TimelineFinishedDelegate);

}

void AFroggoCharacter::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{


	if (OtherActor && OtherActor != this)
	{
		if (OtherActor->IsA(ACarsActor::StaticClass()))
		{
			if (GetWorld()) {
				const auto GameMode = Cast<ACrossRoadGameModeBase>(GetWorld()->GetAuthGameMode());
				if (GameMode) {
					GameMode->SetGameover();
				}
			}
			return;
		}
		if (!ProcessedComponents.Contains(OtherComp))
		{
			ProcessedComponents.Add(OtherComp);
			if (OtherComp->ComponentHasTag("Spawner")) {
				AMapGenerator* Spawner = Cast<AMapGenerator>(UGameplayStatics::GetActorOfClass(GetWorld(), AMapGenerator::StaticClass()));
				if (Spawner)
				{
					Spawner->GenChunkCollision();
				}
			}

			if (OtherComp->ComponentHasTag("Road")) {
				Counter++;
			}
			
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

	// ����������� ����������� ������ �� ���� ���� ����� ��� X
	USpringArmComponent* SpringArm = FindComponentByClass<USpringArmComponent>();
	if (SpringArm)
	{
		FVector NewLocation = SpringArm->GetRelativeLocation();

		// �������� ������� ��������� � ��������� �����������
		FVector CharLoc = GetActorLocation();

		// ������ ������ �� X
		NewLocation.X = CharLoc.X;

		// ��������� �������� �� Y
		NewLocation.Z = 0.0f;

		SpringArm->SetRelativeLocation(NewLocation);
	}
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
	if (bCanMove && !bIsMoving)
	{
		// ��������� ��������� �������
		MovementStartLocation = GetActorLocation();

		// ������������ ������� �������
		MovementTargetLocation = MovementStartLocation + GetActorForwardVector() * 100.0f;

		// ������������� ���� ��������
		bIsMoving = true;

		// �������� ���� ������� �����
		PauseMovement();

		// ��������� �������� � ������
		MovementTimeline->PlayFromStart();

		// ������������� ������ (���� �� ��� ��� �����)
		GetWorldTimerManager().SetTimer(MovementTimerHandle, this, &AFroggoCharacter::PauseMovement, 0.2f, false);

		UE_LOG(LogTemp, Log, TEXT("Starting movement from %s to %s"),
			*MovementStartLocation.ToString(),
			*MovementTargetLocation.ToString());
	}
	else if (!bCanMove)
	{
		UE_LOG(LogTemp, Warning, TEXT("Cannot move - bCanMove is false"));
	}
	else if (bIsMoving)
	{
		UE_LOG(LogTemp, Warning, TEXT("Already moving - wait for current movement to finish"));
	}
}

void AFroggoCharacter::MoveRight()
{
	if (bCanMove) {
		
		FVector Right = GetActorRightVector();
		FVector NewLocation = GetActorLocation() + Right * 100.0f;
		bIsMoving = true;
		PauseMovement();
		SetActorLocation(NewLocation, true);
		GetWorldTimerManager().SetTimer(TimerHandle, this, &AFroggoCharacter::PauseMovement, 0.1f, false);
	}
}

void AFroggoCharacter::MoveLeft()
{
	if (bCanMove) {
		
		FVector Right = GetActorRightVector();
		FVector NewLocation = GetActorLocation() + Right * -100.0f;
		bIsMoving = true;
		PauseMovement();
		SetActorLocation(NewLocation, true);
		GetWorldTimerManager().SetTimer(TimerHandle, this, &AFroggoCharacter::PauseMovement, 0.1f, false);
	}
}

void AFroggoCharacter::PauseMovement()
{
	bIsMoving = false;
	bCanMove = !bCanMove;
}

void AFroggoCharacter::HandleTimelineProgress(float Value)
{
	// ������� ������������ �������
	FVector NewLocation = FMath::Lerp(MovementStartLocation, MovementTargetLocation, Value);

	// ������������� ����� ������� ��� �������� �������� (��� ���������)
	SetActorLocation(NewLocation, false);
}

void AFroggoCharacter::HandleTimelineFinished()
{
	SetActorLocation(MovementTargetLocation, true); // � ��������� ��������

	// ���������� ���� ��������
	bIsMoving = false;

	// �������������� �������� ����� ���������� ��������
	UE_LOG(LogTemp, Log, TEXT("Movement finished"));
}
