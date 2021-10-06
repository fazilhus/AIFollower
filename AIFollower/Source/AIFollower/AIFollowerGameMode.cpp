// Copyright Epic Games, Inc. All Rights Reserved.

#include "AIFollowerGameMode.h"
#include "AIFollowerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAIFollowerGameMode::AAIFollowerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
