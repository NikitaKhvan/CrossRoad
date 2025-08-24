// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPawn.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
APlayerPawn::APlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//SceneComponent = CreateDefaultSubobject<USceneComponent>("SceneComp");
	//SetRootComponent(SceneComponent);

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("StaticMeshComponent");
	StaticMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	StaticMeshComponent->SetCollisionObjectType(ECC_Pawn);
	StaticMeshComponent->SetCollisionResponseToAllChannels(ECR_Block);
	StaticMeshComponent->SetupAttachment(SceneComponent);

	CameraComponent = CreateDefaultSubobject<UCameraComponent>("CameraComponent");
	CameraComponent->SetupAttachment(StaticMeshComponent);
	
	CollisionSphere = CreateDefaultSubobject<USphereComponent>("CollisionSphere");
	CollisionSphere->SetupAttachment(SceneComponent);
	CollisionSphere->InitSphereRadius(25.0f);
	CollisionSphere->SetGenerateOverlapEvents(true);
	CollisionSphere->SetCollisionProfileName(TEXT("Pawn"));

}



void APlayerPawn::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor != this)
	{
		if (!ProcessedActors.Contains(OtherActor))
		{
			ProcessedActors.Add(OtherActor); 
			UE_LOG(LogTemp, Warning, TEXT("First overlap with: %s"), *OtherActor->GetName());
			AMapGenerator* Spawner = Cast<AMapGenerator>(UGameplayStatics::GetActorOfClass(GetWorld(), AMapGenerator::StaticClass()));\
				if (Spawner)
				{
					Spawner->GenChunkCollision(APlayerPawn::GetActorLocation());
				}
			
		}
		else
		{
			
			UE_LOG(LogTemp, Warning, TEXT("Ignored repeat overlap with: %s"), *OtherActor->GetName());
		}
	}
}

// Called when the game starts or when spawned
void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	CollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &APlayerPawn::OnOverlapBegin);
}

// Called every frame
void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Speed.IsZero()) { return; }
	
	const FVector NewLocation = GetActorLocation() + Speed * 10.0f;
	
	SetActorLocation(NewLocation, true);
	Speed = FVector::ZeroVector;


}

// Called to bind functionality to input
void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("M_Forward", EInputEvent::IE_Pressed, this, &APlayerPawn::MoveForward);
	PlayerInputComponent->BindAction("M_Left", EInputEvent::IE_Pressed, this, &APlayerPawn::MoveLeft);
	PlayerInputComponent->BindAction("M_Right", EInputEvent::IE_Pressed, this, &APlayerPawn::MoveRight);

}

void APlayerPawn::MoveForward()
{
	if (bCanMove) {
		Speed.X += 10;
		MovementPause();
		GetWorldTimerManager().SetTimer(TimerHandle, this, &APlayerPawn::MovementPause, 0.3f, false);
	}
	
}



void APlayerPawn::MoveLeft()
{	
	if (bCanMove) {
		Speed.Y -= 10;
		MovementPause();
		GetWorldTimerManager().SetTimer(TimerHandle, this, &APlayerPawn::MovementPause, 0.3f, false);
	}
}

void APlayerPawn::MoveRight()
{
	if (bCanMove) {
		Speed.Y += 10;
		MovementPause();
		GetWorldTimerManager().SetTimer(TimerHandle, this, &APlayerPawn::MovementPause, 0.3f, false);
	}
}

void APlayerPawn::MovementPause()
{
	bCanMove = !bCanMove;
	UE_LOG(LogTemp, Display, TEXT("ZA WARUDOOOO"));
}



