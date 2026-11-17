// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperSpriteActor.h"
#include "Tile.generated.h"

/**
 * 
 */
UCLASS()
class PUZZLEBOOM_API ATile : public APaperSpriteActor
{
	GENERATED_BODY()
	
public:
	ATile();
	
protected:
	virtual void BeginPlay() override;
};
