// Fill out your copyright notice in the Description page of Project Settings.


#include "InfiniteRunnerPlayerController.h"

// Called when the game starts or when spawned
void AInfiniteRunnerPlayerController::BeginPlay()
{
	Super::BeginPlay();

	//characterOwned = Cast<AInfiniteRunnerCharacter>();
}

void AInfiniteRunnerPlayerController::HorizontalMoveControl_Implementation(
	const TScriptInterface<IInputMovable> &movable, const FVector newpos)
{
	movable->MoveHorizontal_Implementation(newpos);
}

void AInfiniteRunnerPlayerController::SetPoints(const TArray<FVector> points)
{
	PlayerPoints = points;
}