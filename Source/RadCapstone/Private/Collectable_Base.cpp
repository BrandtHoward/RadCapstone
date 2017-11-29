// Fill out your copyright notice in the Description page of Project Settings.

#include "Collectable_Base.h"
#include "RadGameState.h"

// Sets default values for this component's properties
UCollectable_Base::UCollectable_Base()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCollectable_Base::BeginPlay()
{
	Super::BeginPlay();


	
	
}


// Called every frame
void UCollectable_Base::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UCollectable_Base::test(AGameStateBase* state)
{
	gameState = state;

	if (gameState) {
		//int32 length = gameState->Coins.length;
		
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Bad"));
	}

}

