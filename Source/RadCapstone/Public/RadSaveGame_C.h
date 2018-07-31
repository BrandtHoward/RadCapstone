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


		UFUNCTION(BlueprintCallable, Category = "SaveGameFunction")
		void SaveMcGuff(int32 numMcGuff);

		UFUNCTION(BlueprintCallable, Category = "SaveGameFunction")
			int32 LoadMcGuff();


private:
	UPROPERTY(EditAnywhere)
		int32 collectedMcGuffinite;
	
	struct VistabellSave
	{
		int32 collectedComicBook;
	};
	
};


