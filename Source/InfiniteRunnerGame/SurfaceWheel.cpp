// Fill out your copyright notice in the Description page of Project Settings.


#include "SurfaceWheel.h"

// Sets default values
ASurfaceWheel::ASurfaceWheel()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASurfaceWheel::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASurfaceWheel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//void ASurfaceWheel::AttachObstacle(const AObstacle &_obs)
//{
//
//}