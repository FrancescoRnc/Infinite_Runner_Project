// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ScoreIncreaser.h"
#include "ScoreSystem.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class INFINITERUNNERGAME_API UScoreSystem : public UObject
{
	GENERATED_BODY()
	
	public:

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int32 ScoreValue;

	UFUNCTION(BlueprintCallable)
	void ResetScore();

	UFUNCTION(BlueprintCallable)
	void AddScore(const int32 amount);

	UFUNCTION(BlueprintCallable)
	void SaveScore();
};
