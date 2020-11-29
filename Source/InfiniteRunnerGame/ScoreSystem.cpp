// Fill out your copyright notice in the Description page of Project Settings.


#include "ScoreSystem.h"
#include "Kismet/GameplayStatics.h"
#include "InfiniteRunnerGameInstance.h"

int32 UScoreSystem::Calculate(float time)
{
	int32 result = 0;

	result += time * 10;

	return result;
}

void UScoreSystem::ResetScore()
{

}

void UScoreSystem::AddScore(const int32 amount)
{
	ScoreValue += amount;
}

void UScoreSystem::SaveScore()
{
	auto GI = Cast<UInfiniteRunnerGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	GI->ScoreValueSaved = ScoreValue;
}