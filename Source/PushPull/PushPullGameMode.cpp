// Copyright Epic Games, Inc. All Rights Reserved.

#include "PushPullGameMode.h"
#include "PushPullCharacter.h"
#include "UObject/ConstructorHelpers.h"

APushPullGameMode::APushPullGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
