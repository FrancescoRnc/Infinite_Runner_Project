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
	
	//MainStock = CreateStock_Implementation(MainStock, 30);
	Rows = TArray<UObstacleRow*>
	{
		NewObject<UObstacleRow>(),
		NewObject<UObstacleRow>(),
		NewObject<UObstacleRow>(),
		NewObject<UObstacleRow>()
	};
}

// Called every frame
void AObstacleManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

TArray<AObstacle*> AObstacleManager::ExtractItemsFromStock(const int32 lines)
{
	TArray<AObstacle*> _tmp;

	auto amount = lines * 3;
	if (amount > MainStock.Num()) amount = MainStock.Num();

	for (int32 i = 0; i < amount; i++)
	{
		auto item = MainStock.Pop();
		_tmp.Add(item);
	}

	return _tmp;
}

void AObstacleManager::ReinsertItemsInStock()
{
	auto length = ActiveItems.Num();
	for (int32 i = 0; i < length; i++)
	{
		auto item = ActiveItems.Pop();
		MainStock.Push(item);
	}
}

TArray<AObstacle*> AObstacleManager::CreateStock_Implementation(
	TSubclassOf<AObstacle> classType, const int32 quantity)
{
	TArray<AObstacle*> _tmp;
	for (int32 i = 0; i < quantity; i++)
	{
		FActorSpawnParameters spawnParams;
		auto item = GetWorld()->SpawnActor<AObstacle>(classType, spawnParams);
		_tmp.Push(item);
	}

	return _tmp;
}

void AObstacleManager::LocateObstacles_Implementation(
	UPARAM(ref) TArray<AObstacle*> &stock, const int32 dispositionIndex)
{
	

	for (size_t i = 0; i < stock.Num(); i++)
	{

	}
}

