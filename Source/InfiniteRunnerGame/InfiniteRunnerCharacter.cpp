// Fill out your copyright notice in the Description page of Project Settings.


#include "InfiniteRunnerCharacter.h"

// Sets default values
AInfiniteRunnerCharacter::AInfiniteRunnerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AInfiniteRunnerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInfiniteRunnerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AInfiniteRunnerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AInfiniteRunnerCharacter::MoveHorizontal_Implementation(const FVector newpos)
{
	SetActorLocation(newpos);
}