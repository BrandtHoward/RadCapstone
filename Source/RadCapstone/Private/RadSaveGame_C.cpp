// Fill out your copyright notice in the Description page of Project Settings.

#include "RadSaveGame_C.h"

void URadSaveGame_C::TestSave(FString input)
{
	Testing = input;

}

FString URadSaveGame_C::ExportTest()
{
	return Testing;
}
