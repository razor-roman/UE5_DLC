// Fill out your copyright notice in the Description page of Project Settings.


#include "MapInfoAsset.h"

FString FMapInfo::GetLevelName() const
{
	return _name.ToString();
}

FText FMapInfo::GetLevelDescription() const
{
	return _description;
}

FString FMapInfo::GetLevelReference()
{
	if(!_primaryAssetable)
	{
		_primaryAssetable = Cast<UPrimaryAssetLabel>(FStringAssetReference(_primaryAsset).TryLoad());
	}
	if(_primaryAssetable && _primaryAssetable->ExplicitAssets.Num() > 0)
		return _primaryAssetable->ExplicitAssets[0].GetLongPackageName();
	FString assetPath = _primaryAsset.GetAssetPathString();
	int32 dotPoint = assetPath.Find(".");
	assetPath = assetPath.Right(assetPath.Len() - dotPoint -1);
	return assetPath;
}
