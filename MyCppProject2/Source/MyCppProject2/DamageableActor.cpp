// Fill out your copyright notice in the Description page of Project Settings.


#include "DamageableActor.h"

// Sets default values
ADamageableActor::ADamageableActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Health = 100.f;

	bReplicates = true;

}

// Called when the game starts or when spawned
void ADamageableActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADamageableActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADamageableActor::MyTakeDamage(float damage)
{	
	Health = Health - damage;
	if (Health <= 0)
	{
		BpOnDestroyObj();
		UE_LOG(LogTemp, Warning, TEXT("Destroy actor"));
	}
	else if (Health > 0)
	{
		BpOnTakeDamage();
		UE_LOG(LogTemp, Warning, TEXT("Actor is taking damage"));
	}
}

