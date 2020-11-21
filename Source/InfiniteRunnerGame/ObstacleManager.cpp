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
	
}

TArray<AObstacle*> AObstacleManager::CreateStock_Implementation(
	TSubclassOf<AObstacle> classType, const int32 quantity)
{
	TArray<AObstacle*> _tmp;
	for (int32 i = 0; i < quantity; i++)
	{
		FActorSpawnParameters spawnParams;
		auto item = GetWorld()->SpawnActor<AObstacle>(classType, GetActorTransform(), spawnParams);
		_tmp.Push(item);
	}

	return _tmp;
}

void AObstacleManager::LocateObstacles_Implementation(
	UPARAM(ref) TArray<AObstacle*> &buffer, const int32 dispositionIndex)
{
	FAttachmentTransformRules rules
	{
		EAttachmentRule::KeepWorld, 
		EAttachmentRule::KeepWorld, 
		EAttachmentRule::KeepRelative, false
	};

	int32 randIndex = FMath::RandRange(1, 6);
	FTransform t = GetActorTransform();
	FVector right = GetActorRightVector();

	for (size_t i = 0; i < 3; i++)
	{
		if (randIndex % 2 != 0)
		{
			auto obs = buffer[i];
			obs->SetVisibility_Implementation(true);
			obs->SetActorTransform(t);
			obs->AttachToActor(AttachTarget, rules);
			obs->AddActorLocalOffset({0, i * 300.f, 0}, true);
		}
		randIndex = randIndex >> 1;
	}
}

