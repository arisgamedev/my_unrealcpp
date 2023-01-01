// Copyright Epic Games, Inc. All Rights Reserved.
//hay que agregar los includes a TODO lo que se está usando, por ejemplo el character movement, el controller, y aquí también puse bullet.h porque se está disparando la balita

#include "MyCppProject2Character.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "Bullet.h"
#include "Engine/World.h"
#include "CollisionQueryParams.h"
#include "WorldCollision.h"
#include "Engine/Engine.h"
#include "DamageableActor.h"
#include "Engine/EngineTypes.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"



//////////////////////////////////////////////////////////////////////////
// AMyCppProject2Character

AMyCppProject2Character::AMyCppProject2Character()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;
	InstaShotRange = 3000.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	//set the instant shot range


	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)
}

//////////////////////////////////////////////////////////////////////////
// Input

void AMyCppProject2Character::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAction("Shoot", IE_Pressed, this, &AMyCppProject2Character::Shoot);
	PlayerInputComponent->BindAction("InstaShoot", IE_Pressed, this, &AMyCppProject2Character::TraceShoot);



	PlayerInputComponent->BindAxis("MoveForward", this, &AMyCppProject2Character::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMyCppProject2Character::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AMyCppProject2Character::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AMyCppProject2Character::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &AMyCppProject2Character::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &AMyCppProject2Character::TouchStopped);

	// VR headset functionality
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &AMyCppProject2Character::OnResetVR);
}


void AMyCppProject2Character::BeginPlay()
{
	Super::BeginPlay();

	Player = Cast<AMyCppProject2Character>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
}


// Called every frame
void AMyCppProject2Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	SphereTrace();

}


//implementing a server shoot, so when clients shoot, the server performs the actual shoot
void AMyCppProject2Character::ServerShoot_Implementation()
{
	Shoot();
}


//implementing a server shoot, so when clients shoot, the server performs the actual shoot
void AMyCppProject2Character::ServerInstantShoot_Implementation()
{
	TraceShoot();
}

void AMyCppProject2Character::Shoot()
{
	if (GetLocalRole() < ROLE_Authority) //checks if the shooter role is inferior to ROLE_Authority, which is the server (so shooter would be a client). If shooter is a client, tell the server to shoot
	{
		ServerShoot();
		return;
	}
	//FOR SPAWN TO WORK MUST ADD THE INCLUDE WITH BULLET.H!!!
	FTransform SpawnTransform = GetActorTransform();
	SpawnTransform.TransformPosition(FVector(0.f, 0.f, 100.f));
	FActorSpawnParameters SpawnParams;

	FVector Location = GetActorLocation();
	FRotator Rotation = GetActorRotation();
	
	GetWorld()->SpawnActor(Bullet, &Location, &Rotation, SpawnParams);
	
}




FHitResult AMyCppProject2Character::InstantShoot()
{
	//UE_LOG(LogTemp, Warning, TEXT("Instant Shot"));
	FVector Location = GetActorLocation();
	FRotator Rotation = GetActorRotation();

	FVector EndTrace = Location + (Rotation.Vector() * InstaShotRange);
	FCollisionQueryParams TraceParams(SCENE_QUERY_STAT(InstantShoot), true, GetInstigator());
	FHitResult hit(ForceInit);
	GetWorld()->LineTraceSingleByChannel(hit, Location, EndTrace, ECC_Visibility, TraceParams);
	
	return hit;
	
}

void AMyCppProject2Character::TraceShoot()
{
	if (GetLocalRole() < ROLE_Authority) //checks if the shooter role is inferior to ROLE_Authority, which is the server (so shooter would be a client). If shooter is a client, tell the server to shoot
	{
		ServerInstantShoot();
		return;
	}
	FHitResult hit = InstantShoot();
	

	if (hit.Actor != NULL)
	
	{ 
		ADamageableActor* hitActor = Cast<ADamageableActor>(hit.Actor);
		if (hitActor)
		{
			FString ObjName = hit.Actor->GetName();
			UE_LOG(LogTemp, Warning, TEXT("Instant Shot %s"), *ObjName);
			hitActor->MyTakeDamage(10.f);
		}
		
	}
}



void AMyCppProject2Character::OnResetVR()
{
	// If MyCppProject2 is added to a project via 'Add Feature' in the Unreal Editor the dependency on HeadMountedDisplay in MyCppProject2.Build.cs is not automatically propagated
	// and a linker error will result.
	// You will need to either:
	//		Add "HeadMountedDisplay" to [YourProject].Build.cs PublicDependencyModuleNames in order to build successfully (appropriate if supporting VR).
	// or:
	//		Comment or delete the call to ResetOrientationAndPosition below (appropriate if not supporting VR)
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void AMyCppProject2Character::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
		Jump();
}

void AMyCppProject2Character::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
		StopJumping();
}

void AMyCppProject2Character::SphereTrace()
{
	const FVector PlayerPos = Player->GetActorLocation();
	const FVector Forward = Player->GetActorForwardVector()*75.f;
	const FVector TraceOffset = FVector(0.f, 0.f, 150.f);
	const FVector TraceDistance = FVector(0.f, 0.f, -170.f);
	const FVector Start = PlayerPos + Forward + TraceOffset;	
	const FVector End = Start + TraceDistance;

	TArray<AActor*> ActorsToIgnore;

	ActorsToIgnore.Add(Player);

	TArray<FHitResult> HitArray;

	const bool Hit = UKismetSystemLibrary::SphereTraceMulti(GetWorld(), Start, End, TraceRadius, UEngineTypes::ConvertToTraceType(ECC_Visibility), false, ActorsToIgnore, EDrawDebugTrace::ForDuration, HitArray, true, FLinearColor::Gray, FLinearColor::Blue, 0.2f);

	if (Hit == true)
	{
		for (const FHitResult HitResult : HitArray)
		{	
			const FVector ImpactPoint = HitResult.ImpactPoint;
			const float ImpactX = ImpactPoint.X;
			const float ImpactY = ImpactPoint.Y;
			const float ImpactZ = ImpactPoint.Z;
			const float Distance = HitResult.Distance;
			GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Cyan, FString::Printf(TEXT("Hit object: %s | Impact distance: %f | Impact point: %f %f %f"), *HitResult.Actor->GetName(), Distance, ImpactX, ImpactY, ImpactZ));

		}
			 
	}

}

void AMyCppProject2Character::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AMyCppProject2Character::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AMyCppProject2Character::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void AMyCppProject2Character::MoveRight(float Value)
{
	if ( (Controller != nullptr) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}

