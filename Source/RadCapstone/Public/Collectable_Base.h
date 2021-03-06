// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Collectable_Base.generated.h"

class ARadGameState;
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))


class RADCAPSTONE_API UCollectable_Base : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCollectable_Base();

	

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:

	UFUNCTION(BlueprintCallable)
	void test(AGameStateBase* state);
		
	AGameStateBase* gameState;
	 
	
};
