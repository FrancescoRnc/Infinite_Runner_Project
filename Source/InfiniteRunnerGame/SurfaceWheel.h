// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ObjectRotator.h"
#include "Obstacle.h"
#include "SurfaceWheel.generated.h"

// This Actor is used as the environment where our Character and the Obstacles move.
// It rotates like an Hamster Wheel

UCLASS()
class INFINITERUNNERGAME_API ASurfaceWheel : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASurfaceWheel();

	protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
