// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InfiniteRunnerCharacter.h"
#include "InputMovableController.h"
#include "InfiniteRunnerPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class INFINITERUNNERGAME_API AInfiniteRunnerPlayerController : public APlayerController, public IInputMovableController
{
	GENERATED_BODY()
	
	protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	AInfiniteRunnerCharacter* characterOwned;

	virtual void HorizontalMoveControl_Implementation(
		const TScriptInterface<IInputMovable> &movable, const FVector newpos);

};
