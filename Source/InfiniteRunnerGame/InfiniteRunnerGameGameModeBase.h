// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "InfiniteRunnerGameGameModeBase.generated.h"

/**
 * 
 */

// This is our Game Mode, that handles Game Over event, and contains our Widgets (by Blueprint)

UCLASS()
class INFINITERUNNERGAME_API AInfiniteRunnerGameGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
	public:

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void GameOver();
};
