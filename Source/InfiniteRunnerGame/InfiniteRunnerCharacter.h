// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputMovable.h"
#include "InfiniteRunnerCharacter.generated.h"

// This is our possessed Character. This can move horizontally by an Interface

UCLASS()
class INFINITERUNNERGAME_API AInfiniteRunnerCharacter : public ACharacter, public IInputMovable
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AInfiniteRunnerCharacter();

	// Locations where our character have to move by input
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVector> Points;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void MoveHorizontal_Implementation(const FVector newpos);
};
