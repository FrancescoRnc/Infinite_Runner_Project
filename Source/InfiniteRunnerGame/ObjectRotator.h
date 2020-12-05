// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ObjectRotator.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UObjectRotator : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */

// This Interface gives a constant rotating movement to its Actor

class INFINITERUNNERGAME_API IObjectRotator
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
	public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void Rotate();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void InitializeRotation();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void StartRotating();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void StopRotating();
};
