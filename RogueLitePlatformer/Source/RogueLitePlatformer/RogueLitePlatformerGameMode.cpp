// Copyright Epic Games, Inc. All Rights Reserved.

#include "RogueLitePlatformerGameMode.h"
#include "RogueLitePlatformerCharacter.h"

ARogueLitePlatformerGameMode::ARogueLitePlatformerGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = ARogueLitePlatformerCharacter::StaticClass();	
}
