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

	UPROPERTY(EditAnywhere, Category = "MovementAttributes")
	float m_WalkSpeed = 275.0f;

	UPROPERTY(EditAnywhere, Category = "MovementAttributes")
	float m_SprintSpeed = 500.0f;

	UPROPERTY(EditAnywhere, Category = "MovementAttributes")
	float m_CameraRotationSpeed = 500.0f;

	UPROPERTY(EditAnywhere, Category = "MovementAttributes")
	float MaxSprintTime;

	UPROPERTY(EditAnywhere, Category = "MovementAttributes")
	float SlideDecelerationRate;

	UPROPERTY(EditDefaultsOnly, Category = "Movement Check")
	bool bSprintPressed = false;

	UPROPERTY(EditDefaultsOnly, Category = "Movement Check")
	bool bIsCrouching = false;

protected:

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/* Input Actions */

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Input")
	UInputAction* _MoveAction;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Input")
	UInputAction* _LookAction;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Input")
	UInputAction* _SprintAction;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Input")
	UInputAction* _JumpAction;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Input")
	UInputAction* _CrouchSlideAction;

	void HandleMoveInput(const FInputActionValue& InputValue);

	void HandleLookInput(const FInputActionValue& InputValue);

	void HandleCrouchInput();

public:

	ATP_Character_Player();

	UFUNCTION(BlueprintCallable)
	void PlayerMovement(float Right, float Forward);

	UFUNCTION(BlueprintCallable)
	void PlayerLook(float Yaw, float Pitch);

	UFUNCTION(BlueprintCallable)
	void PlayerSprintStart();

	UFUNCTION(BlueprintCallable)
	virtual void PlayerSprintStop();

	UFUNCTION(BlueprintCallable)
	virtual void PlayerJumpStart();

	UFUNCTION(BlueprintCallable)
	void PlayerJumpEnd();

	UFUNCTION(BlueprintCallable)
	void PlayerCrouch();

	UFUNCTION(BlueprintCallable)
	void PlayerSlideStart();

	UFUNCTION(BlueprintCallable)
	bool GetIsCrouching() const { return bIsCrouching; }

	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return m_CameraBoom; }

	FORCEINLINE class UCameraComponent* GetCamera() const { return m_Camera; }
};