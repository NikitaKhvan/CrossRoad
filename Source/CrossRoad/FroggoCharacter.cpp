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
	bIsMoving = false;
}


// Called when the game starts or when spawned
void AFroggoCharacter::BeginPlay()
{
	Super::BeginPlay();
	GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &AFroggoCharacter::OnOverlapBegin);
}

//очень перегруженная функция которую неплохо было бы разделить, но пока не представляю как
//здесь происходит отслеженивание всех пересечений капсулы персонажа, что влияет на подсчет очков, вызов спауна дорог
//и конец игры при пересечении с коллизией транспорта
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
				if (Counter > 9 && Counter % 5 == 0)
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

	//костыльное решение чтобы камера не могла двигаться влево вправо, но работает и выглядит неплохо
	USpringArmComponent* SpringArm = FindComponentByClass<USpringArmComponent>();
	if (SpringArm)
	{
		FVector NewLocation = SpringArm->GetRelativeLocation();
		FVector CharLoc = GetActorLocation();
		//следим только по X
		NewLocation.X = CharLoc.X;
		//блокируем смещение по Y
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

//так как все движение проихсодит в аним нотифай стейте здесь мы просто вызываем проигрывание аним монтажа и передаем вектор
//направления движения в зависимости от нажатой клавиши
void AFroggoCharacter::MoveForward()
{
	TryMove(GetActorForwardVector());
}

void AFroggoCharacter::MoveRight()
{
	TryMove(GetActorRightVector());
}

void AFroggoCharacter::MoveLeft()
{
	TryMove(-GetActorRightVector());
}

void AFroggoCharacter::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted)
{
	if (Montage == MoveAnim)
	{
		bIsMoving = false;
	}
}

//непосредственно выполнение аним монтажа
void AFroggoCharacter::TryMove(const FVector& Direction)
{
	if (bIsMoving || !MoveAnim) return;
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance)
	{
		bIsMoving = true;
		MoveDirection = Direction;
		AnimInstance->Montage_Play(MoveAnim);
		AnimInstance->OnMontageEnded.AddDynamic(this, &AFroggoCharacter::OnMontageEnded);
	}
}