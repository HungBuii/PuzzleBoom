// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/MyPlayerController.h"

AMyPlayerController::AMyPlayerController()
{
	bShowMouseCursor = true;
	
	bEnableTouchEvents = bEnableClickEvents = true;
	bEnableTouchOverEvents = bEnableMouseOverEvents = true;
}
