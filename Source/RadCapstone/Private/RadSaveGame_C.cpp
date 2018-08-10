// Fill out your copyright notice in the Description page of Project Settings.

#include "RadSaveGame_C.h"


URadSaveGame_C::URadSaveGame_C() {

	collectedCoins = { 10,0,0,0,0,0,0,0 };
	isCoinCollected.Init(false, 0);
	FVector pos = FVector(0, 0, 0);
	FQuat rot = FQuat(0, 0, 0,0);
	FVector scale = FVector(1, 1, 1);
	FTransform trans = FTransform(rot, scale, pos);

	coinTransforms.Init(trans, 500);

	
	
}
