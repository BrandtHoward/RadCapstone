// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedStruct.h"
#include "WorldInfo_Struct_C.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FWorldInfo {
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 numCollectedCoin;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<bool> isCoinCollected;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FTransform> CoinLocations;
};


//UCLASS()
//class RADCAPSTONE_API UWorldInfo_Struct_C : public UUserDefinedStruct
//{
	
//	GENERATED_BODY()

//public:
	

	
//};

