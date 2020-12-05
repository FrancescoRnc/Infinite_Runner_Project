// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Containers/CircularQueue.h"
#include "Engine/World.h"
#include "Obstacle.h"
#include "ObstacleCreator.h"
#include "ObstacleLocator.h"
#include "ObstacleManager.generated.h"

// This Actor creates, locates and manages all Obstacle Actors.

UCLASS()
class INFINITERUNNERGAME_API AObstacleManager : 
	public AActor, 
	public IObstacleCreator, 
	public IObstacleLocator
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AObstacleManager();

	protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	public:

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<AObstacle*> MainStock;

	// Reference to the rotating Wheel, where the Obstacles should attach to.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	AActor* AttachTarget;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	TArray<AObstacle*> ExtractItemsFromStock(const int32 lines);

	UFUNCTION(BlueprintCallable)
	void ReinsertItemsInStock();

	UFUNCTION(BlueprintCallable)
	void ResetItem(AObstacle* item);

	UFUNCTION(BlueprintCallable)
	AObstacle* GetFirstAvailableItem(UPARAM(ref) TArray<AObstacle*> &buffer);

	virtual TArray<AObstacle*> CreateStock_Implementation(
		TSubclassOf<AObstacle> classType, const int32 quantity);

	virtual void LocateObstacles_Implementation(
		UPARAM(ref) TArray<AObstacle*> &buffer);

	
};
