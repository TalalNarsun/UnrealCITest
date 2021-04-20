// Copyright Epic Games, Inc. All Rights Reserved.

#include "CITestGameMode.h"
#include "CITestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACITestGameMode::ACITestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
