// Fill out your copyright notice in the Description page of Project Settings.


#include "InfiniteRunnerPlayerController.h"

// Called when the game starts or when spawned
void AInfiniteRunnerPlayerController::BeginPlay()
{
	Super::BeginPlay();

	//characterOwned = Cast<AInfiniteRunnerCharacter>();
}

void AInfiniteRunnerPlayerController::MoveRightControl_Implementation(const TScriptInterface<IInputMovable> &movable)
{
	movable->MoveRight_Implementation();
}

void AInfiniteRunnerPlayerController::MoveLeftControl_Implementation(const TScriptInterface<IInputMovable> &movable)
{
	movable->MoveLeft_Implementation();
}