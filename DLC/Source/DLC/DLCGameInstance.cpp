// Fill out your copyright notice in the Description page of Project Settings.


#include "DLCGameInstance.h"

#include "DLCLoader.h"

TArray<FMapInfo> UDLCGameInstance::GetMapInfo()
{
	return _DLCLoader->GetMapsInfo();
}

void UDLCGameInstance::Init()
{
	Super::Init();
	_DLCLoader = NewObject<UDLCLoader>(this,"DLC_Loader");
}
