// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "InfiniteRunnerGameGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class INFINITERUNNERGAME_API AInfiniteRunnerGameGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
	public:

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void GameOver();
};
