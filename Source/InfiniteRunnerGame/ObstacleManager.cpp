// Fill out your copyright notice in the Description page of Project Settings.


#include "ObstacleManager.h"

// Sets default values
AObstacleManager::AObstacleManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AObstacleManager::BeginPlay()
{
	Super::BeginPlay();
	
	CreateStock_Implementation(MainStock, 30);
}

// Called every frame
void AObstacleManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AObstacleManager::CreateStock_Implementation(UPARAM(ref) TArray<AObstacle*> &inStock, const int32 quantity)
{
	for (int32 i = 0; i < quantity; i++)
	{
		FActorSpawnParameters spawnParams;
		auto item = GetWorld()->SpawnActor<AObstacle>(spawnParams);
		inStock.Add(item);
	}
}

void AObstacleManager::LocateObstacles_Implementation(UPARAM(ref) TArray<AObstacle*> &stock, const int32 dispositionIndex)
{
	//auto item = 
}