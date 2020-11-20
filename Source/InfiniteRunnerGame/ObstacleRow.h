// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Obstacle.h"
#include "ObstacleRow.generated.h"

/**
 * 
 */
UCLASS()
class INFINITERUNNERGAME_API UObstacleRow : public UObject
{
	GENERATED_BODY()
	
	public:

	UFUNCTION(BlueprintCallable)
	void LocateRow();
};
