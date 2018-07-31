// Fill out your copyright notice in the Description page of Project Settings.

#include "RadSaveGame_C.h"

int32 URadSaveGame_C::LoadMcGuff()
{
	return collectedMcGuffinite;
}

void URadSaveGame_C::SaveMcGuff(int32 numMcGuff)
{
	collectedMcGuffinite = numMcGuff;
}
