// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ObstacleLocator.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UObstacleLocator : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */

// Interface which handles the disposition of Obstacle Actors in a row given a Stock.

class INFINITERUNNERGAME_API IObstacleLocator
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
	public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void LocateObstacles(
		UPARAM(ref) TArray<AObstacle*> &buffer);
};
