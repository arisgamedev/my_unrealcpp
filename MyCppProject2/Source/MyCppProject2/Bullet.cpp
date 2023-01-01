// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet.h"
#include "Engine/Engine.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "DamageableActor.h"

// Sets default values
ABullet::ABullet()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	damage = 25.f;



	// must add the "include" for the component before adding the component
	CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));	
	CollisionSphere->SetSphereRadius(25.f);
	CollisionSphere->SetCollisionProfileName("Trigger");

	RootComponent = CollisionSphere; //setting the sphere as root component

	CollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &ABullet::OnOverlapBegin);
	CollisionSphere->OnComponentEndOverlap.AddDynamic(this, &ABullet::OnOverlapEnd);


	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>("ProjectileMovementComponent");
	ProjectileMovement->InitialSpeed = 100.f;
	ProjectileMovement->MaxSpeed = 100.f;
	ProjectileMovement->ProjectileGravityScale = 0.f;

	bReplicates = true; //setea la replicacion a true para este actor y todas sus subclasses

}



// Called when the game starts or when spawned
void ABullet::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABullet::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Cyan, "enters object");

	//ADamageableActor* OtherActor = Cast<ADamageableActor>(OtherActor);
	if (ADamageableActor* DamageableActorCheck = Cast<ADamageableActor>(OtherActor)) //if con casting para ver si el OtherActor es la bala
	{
		FString ObjName = OtherActor->GetName();
		//UE_LOG(LogTemp, Warning, TEXT("Instant Shot %s"), *ObjName);
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Cyan, FString::Printf(TEXT("enters damageable object %s"), *ObjName));
		DamageableActorCheck->MyTakeDamage(damage);
	}
}

void ABullet::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Cyan, "exits object");
}

