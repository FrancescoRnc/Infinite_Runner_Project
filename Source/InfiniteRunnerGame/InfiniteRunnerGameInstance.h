// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "InfiniteRunnerGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class INFINITERUNNERGAME_API UInfiniteRunnerGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
	public:

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int32 ScoreValueSaved;


};
