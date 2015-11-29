// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Footprints.h"
#include "FootprintsGameMode.h"
#include "FootprintsCharacter.h"

AFootprintsGameMode::AFootprintsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
