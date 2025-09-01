// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TP_ParkourController.generated.h"

/**
 * 
 */

class UInputMappingContext;

UCLASS()
class TURNPARKOUR_API ATP_ParkourController : public APlayerController
{
	GENERATED_BODY()
	
protected:

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputMappingContext> _inputMappingContext;

	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;
};
