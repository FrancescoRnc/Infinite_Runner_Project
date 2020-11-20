// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstacle.h"

// Sets default values
AObstacle::AObstacle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MainMesh"));
	MeshComponent->SetMobility(EComponentMobility::Static);
	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("MainCollision"));
	//BoxCollision->SetRelativeLocation(FVector(0, 0, 0));
	BoxCollision->SetMobility(EComponentMobility::Static);
}

// Called when the game starts or when spawned
void AObstacle::BeginPlay()
{
	Super::BeginPlay();

	//MeshComponent->SetStaticMesh(Mesh);
	//BoxCollision->SetBoxExtent({30.f, 150.f, 100.f});
}

// Called every frame
void AObstacle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AObstacle::SetVisibility_Implementation(const bool value)
{
	MeshComponent->SetActive(value);
	BoxCollision->SetCollisionEnabled(value ?
									  ECollisionEnabled::QueryOnly : 
									  ECollisionEnabled::NoCollision);
}