// Copyright Epic Games, Inc. All Rights Reserved.

#include "EdgeOfCurlsGameMode.h"
#include "EdgeOfCurlsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEdgeOfCurlsGameMode::AEdgeOfCurlsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
