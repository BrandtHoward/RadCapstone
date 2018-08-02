// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "RadSaveGame_C.generated.h"

/**
 * 
 */


UCLASS()
class RADCAPSTONE_API URadSaveGame_C : public USaveGame
{
	GENERATED_BODY()
public:
	URadSaveGame_C();
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "cool")
		TArray<int32> collectedCoins;

	

private:
	
};


