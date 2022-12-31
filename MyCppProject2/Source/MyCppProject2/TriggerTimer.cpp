// Fill out your copyright notice in the Description page of Project Settings.


#include "TriggerTimer.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"

// Sets default values
ATriggerTimer::ATriggerTimer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Component"));
	CollisionBox->SetBoxExtent(FVector(32.f, 32.f, 32.f));
	CollisionBox->SetCollisionProfileName("Trigger");
	RootComponent = CollisionBox;

	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ATriggerTimer::OnOverlapBegin);
	CollisionBox->OnComponentEndOverlap.AddDynamic(this, &ATriggerTimer::OnOverlapEnd);

	bIsInTrigger = false;

}

void ATriggerTimer::DoTimedFunction()
{
	if (bIsInTrigger == true)
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Cyan, "Delayed message DENTRO DEL TRIGGER!!!");
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Cyan, "Delayed message FUERA DEL TRIGGER!!!");
	}
	GetWorldTimerManager().ClearTimer(TriggerTimerHandle);
}

// Called when the game starts or when spawned
void ATriggerTimer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATriggerTimer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATriggerTimer::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Cyan, "Entra al trigger");
	bIsInTrigger = true;
	GetWorld()->GetTimerManager().SetTimer(TriggerTimerHandle, this, &ATriggerTimer::DoTimedFunction, 3.0f, false);
}

void ATriggerTimer::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Cyan, "Sale del trigger");
	bIsInTrigger = false;
}

