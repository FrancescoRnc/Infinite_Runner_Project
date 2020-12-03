// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InputContainerDispatcher.h"
#include "MultiInputControlComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class INFINITERUNNERGAME_API UMultiInputControlComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMultiInputControlComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

// Properties

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UInputContainerDispatcher*> InputMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EInputButtonType, UInputContainerDispatcher*> InputPressMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EInputButtonType, UInputContainerDispatcher*> InputReleaseMap;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//TArray<TMap<EInputButtonType, UInputContainerDispatcher*>> InputWholeMap;

	// Used to exclude containers, by given button types, to be executed
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<EInputButtonType> ButtonExclusionMap;

// Functions

	// Initialization of the containers
	UFUNCTION(BlueprintCallable)
	void MakeMap();

	// Push / Pop
	// Same as the container base, but given a button type
	UFUNCTION(BlueprintCallable)
	void PushNewFunction(const EInputButtonType type, const FFuncParam binder);

	UFUNCTION(BlueprintCallable)
	void PushNullFunction(const EInputButtonType type);

	UFUNCTION(BlueprintCallable)
	FFuncParam PopLastFunction(const EInputButtonType type);

	// Binding
	UFUNCTION(BlueprintCallable)
	void BindLastFunction(const EInputButtonType type);

	UFUNCTION(BlueprintCallable)
	void UnbindFunction(const EInputButtonType type);

	// Execution
	UFUNCTION(BlueprintCallable)
	void Execute(const EInputButtonType type);

	// Exclusion
	// Function used to manage the button exclusion system
	UFUNCTION(BlueprintCallable)
	void SetExclusion(const TSet< EInputButtonType> map);

	UFUNCTION(BlueprintCallable)
	void AddExclusion(const TSet< EInputButtonType> map);

	UFUNCTION(BlueprintCallable)
	void ShrinkExclusion(const TSet< EInputButtonType> map);

	UFUNCTION(BlueprintCallable)
	void ResetExclusion();

	UFUNCTION(BlueprintCallable)
	void UpdateMapAvaliability();
};
