// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InputMovable.h"
#include "InputMovableController.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInputMovableController : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class INFINITERUNNERGAME_API IInputMovableController
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
	public:
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void MoveRightControl(const TScriptInterface<IInputMovable> &movable);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void MoveLeftControl(const TScriptInterface<IInputMovable> &movable);
};
