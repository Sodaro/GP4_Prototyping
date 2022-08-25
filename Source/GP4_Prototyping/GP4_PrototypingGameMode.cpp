// Copyright Epic Games, Inc. All Rights Reserved.

#include "GP4_PrototypingGameMode.h"
#include "GP4_PrototypingCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGP4_PrototypingGameMode::AGP4_PrototypingGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
