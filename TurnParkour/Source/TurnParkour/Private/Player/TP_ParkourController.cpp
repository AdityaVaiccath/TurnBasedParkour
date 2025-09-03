// Fill out your copyright notice in the Description page of Project Settings.

#include "Player/TP_ParkourController.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "Engine/LocalPlayer.h"

void ATP_ParkourController::BeginPlay()
{
	Super::BeginPlay();

	// Logic
}

void ATP_ParkourController::SetupInputComponent()
{
	Super::SetupInputComponent();

	if (IsLocalPlayerController())
	{
		if (UEnhancedInputLocalPlayerSubsystem* SubSystem = 
			ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
		{
			SubSystem->AddMappingContext(_InputMappingContext, 0);
		}
	}
}
