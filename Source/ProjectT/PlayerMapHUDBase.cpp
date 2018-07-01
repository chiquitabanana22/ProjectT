// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerMapHUDBase.h"

APlayerMapHUDBase::APlayerMapHUDBase()
{

}

void APlayerMapHUDBase::DrawCrossHair(int32 SizeX, int32 SizeY)
{
	DrawTextureSimple(CrossHairTexture, SizeX / 2 - CrossHairSizeAmount, SizeY / 2 - CrossHairSizeAmount);
}

void APlayerMapHUDBase::BeginPlay()
{
	CrossHairSizeAmount = CrossHairTexture->GetSizeX() / 2;
}

void APlayerMapHUDBase::DrawHUD()
{
	AHUD::DrawHUD();
	DrawCrossHair(AHUD::Canvas->SizeX, AHUD::Canvas->SizeY);
}
