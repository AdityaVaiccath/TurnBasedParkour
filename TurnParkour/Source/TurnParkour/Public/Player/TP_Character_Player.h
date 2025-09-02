// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Player/TP_Character_Base.h"
#include "TP_Character_Player.generated.h"

/**
 * 
 */

class UCameraComponent;
class USpringArmComponent;
class UInputAction;
struct FInputActionValue;

UCLASS()
class TURNPARKOUR_API ATP_Character_Player : public ATP_Character_Base
{
	GENERATED_BODY()
	
private:

	UPROPERTY(EditAnywhere, Category = "Components")
	USpringArmComponent* m_CameraBoom;

	UPROPERTY(EditAnywhere, Category = "Components")
	UCameraComponent* m_Camera;


protected:

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/* Input Actions */

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* MoveAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* LookAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* SprintAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* JumpAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* SlideAction;

	void HandleMoveInput(const FInputActionValue& InputValue);

	void HandleLookInput(const FInputActionValue& InputValue);

public:

	ATP_Character_Player();

	UFUNCTION(BlueprintCallable)
	void PlayerMovement(float Right, float Left);

	UFUNCTION(BlueprintCallable)
	void PlayerLook(float Yaw, float Pitch);

	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return m_CameraBoom; }

	FORCEINLINE class UCameraComponent* GetCamera() const { return m_Camera; }
};
