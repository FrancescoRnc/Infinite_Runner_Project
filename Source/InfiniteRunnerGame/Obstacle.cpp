// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstacle.h"

// Sets default values
AObstacle::AObstacle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MainMesh"));
	MeshComponent->SetMobility(EComponentMobility::Movable);

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("MainCollision"));
	BoxCollision->SetMobility(EComponentMobility::Movable);
	//BoxCollision->SetCollisionObjectType(ECollisionChannel::ECC_GameTraceChannel1);
	BoxCollision->SetCollisionProfileName("ObstacleProfile");

	//MeshComponent->SetupAttachment(RootComponent);
	RootComponent = MeshComponent;
	BoxCollision->SetupAttachment(MeshComponent);
	BoxCollision->SetRelativeLocation({0, 0, 0});
	
	SetVisibility_Implementation(false);
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
	bInUse = value;
	MeshComponent->SetVisibility(value);
	BoxCollision->SetRelativeLocation({0, 0, 0});
	BoxCollision->SetCollisionEnabled(value ?
									  ECollisionEnabled::QueryOnly : 
									  ECollisionEnabled::NoCollision);
}