// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet2.h"
#include "Engine/Engine.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "DamageableActor.h"

// Sets default values
ABullet2::ABullet2()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	damage = 25.f;

	
	

	CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
	//CollisionSphere->SetupAttachment(RootComponent);
	CollisionSphere->SetSphereRadius(25.f);
	CollisionSphere->SetCollisionProfileName("Trigger");

	RootComponent = CollisionSphere;

	CollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &ABullet2::OnOverlapBegin);
	CollisionSphere->OnComponentEndOverlap.AddDynamic(this, &ABullet2::OnOverlapEnd);


	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>("ProjectileMovementComponent");
	ProjectileMovement->InitialSpeed = 100.f;
	ProjectileMovement->MaxSpeed = 100.f;
	ProjectileMovement->ProjectileGravityScale = 0.f;

	bReplicates = true; //setea la replicacion a true para este actor y todas sus subclasses

}



// Called when the game starts or when spawned
void ABullet2::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ABullet2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABullet2::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Cyan, "Entra al trigger");

	//ADamageableActor* OtherActor = Cast<ADamageableActor>(OtherActor);
	if (ADamageableActor* DamageableActorCheck = Cast<ADamageableActor>(OtherActor)) //if con casting para ver si el OtherActor es la bala
	{
		FString ObjName = OtherActor->GetName();
		UE_LOG(LogTemp, Warning, TEXT("Instant Shot %s"), *ObjName);
		DamageableActorCheck->MyTakeDamage(80.f);
	}
}

void ABullet2::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Cyan, "Sale del trigger");
}

