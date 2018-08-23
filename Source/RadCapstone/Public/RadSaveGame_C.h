// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "WorldInfo_Struct_C.h"
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


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "cool")
	TArray<FTransform> coinTransforms;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "cool")
		TArray<bool> isCoinCollected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vistabell")


		TArray<FWorldInfo> worldInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vistabell")
		bool easyMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vistabell")
		int32 RADLevel;

private:
	
};


