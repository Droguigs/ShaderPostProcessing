// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShaderPostProcessingGameMode.h"
#include "ShaderPostProcessingCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShaderPostProcessingGameMode::AShaderPostProcessingGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
