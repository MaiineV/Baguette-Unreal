// Copyright Epic Games, Inc. All Rights Reserved.

#include "BaguetteGameMode.h"
#include "BaguetteCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABaguetteGameMode::ABaguetteGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
