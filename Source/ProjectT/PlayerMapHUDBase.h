// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Engine/Canvas.h"
#include "PlayerMapHUDBase.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTT_API APlayerMapHUDBase : public AHUD
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CrossHair")
	UTexture2D* CrossHairTexture;

	APlayerMapHUDBase();

	UFUNCTION(BlueprintCallable, Category = "CrossHair")
	void DrawCrossHair(int32 SizeX, int32 SizeY);

protected:
	int32 CrossHairSizeAmount;


	virtual void BeginPlay() override;
	virtual void DrawHUD() override;
};
