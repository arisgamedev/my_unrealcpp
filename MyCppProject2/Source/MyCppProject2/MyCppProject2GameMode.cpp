// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyCppProject2GameMode.h"
#include "MyCppProject2Character.h"
#include "UObject/ConstructorHelpers.h"

AMyCppProject2GameMode::AMyCppProject2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
