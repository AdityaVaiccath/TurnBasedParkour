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
	

/*
	//////////PRIVATE///////////
*/
private:

	UPROPERTY(EditAnywhere, Category = "Components")
	USpringArmComponent* m_CameraBoom;

	UPROPERTY(EditAnywhere, Category = "Components")
	UCameraComponent* m_Camera;

	UPROPERTY(EditAnywhere, Category = "MovementAttributes")
	float m_WalkSpeed = 360.0f;

	UPROPERTY(EditAnywhere, Category = "MovementAttributes")
	float m_SprintSpeed = 500.0f;

	UPROPERTY(EditAnywhere, Category = "MovementAttributes")
	float m_CameraRotationSpeed = 500.0f;

	UPROPERTY(EditAnywhere, Category = "MovementAttributes")
	float MaxSprintTime;

	UPROPERTY(EditAnywhere, Category = "MovementAttributes")
	float SprintSlowDelta;


/*
	/////////PROTECTED/////////
*/
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
	UInputAction* _SlideAction;

	void HandleMoveInput(const FInputActionValue& InputValue);

	void HandleLookInput(const FInputActionValue& InputValue);


/*
	/////////PUBLIC///////////
*/
public:

	ATP_Character_Player();

	UFUNCTION(BlueprintCallable)
	void PlayerMovement(float Right, float Forward);

	UFUNCTION(BlueprintCallable)
	void PlayerLook(float Yaw, float Pitch);

	UFUNCTION(BlueprintCallable)
	void PlayerSprintStart();

	UFUNCTION(BlueprintCallable)
	void PlayerSprintStop();

	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return m_CameraBoom; }

	FORCEINLINE class UCameraComponent* GetCamera() const { return m_Camera; }
};