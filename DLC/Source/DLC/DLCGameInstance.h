// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "DLCGameInstance.generated.h"

struct FMapInfo;
class UDLCLoader;
/**
 * 
 */
UCLASS()
class DLC_API UDLCGameInstance : public UGameInstance
{
	GENERATED_BODY()
protected:
	UPROPERTY()
	UDLCLoader* _DLCLoader;

public:
	UFUNCTION(BlueprintCallable)
	TArray<FMapInfo> GetMapInfo();

protected:
	virtual void Init() override;
};
