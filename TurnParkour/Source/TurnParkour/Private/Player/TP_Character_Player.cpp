// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/TP_Character_Player.h"
#include "EnhancedInputSubsystems.h" // For InputActionValue
#include "EnhancedInputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"


ATP_Character_Player::ATP_Character_Player()
{
	// Setting Tick Component
	SetActorTickEnabled(false);

	// Movement Setup
	GetCharacterMovement()->MaxWalkSpeed = m_WalkSpeed;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.0f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;
	GetCharacterMovement()->bOrientRotationToMovement = true;

	// Rotataion Setup
	GetCharacterMovement()->RotationRate = FRotator(0.0f, m_CameraRotationSpeed, 0.0f);
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Creating Camera Boom
	m_CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	m_CameraBoom->SetupAttachment(RootComponent);
	m_CameraBoom->TargetArmLength = 400.0f;
	m_CameraBoom->bUsePawnControlRotation = true;

	// Camera Setup
	m_Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	m_Camera->SetupAttachment(m_CameraBoom, USpringArmComponent::SocketName);
	m_Camera->bUsePawnControlRotation = false;

	// Jump Setup
	if (m_JumpCurve) m_JumpCurve->GetTimeRange(m_Min_JumpTime, m_Max_JumpTime);	
}

void ATP_Character_Player::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (m_JumpTime <= m_Max_JumpTime)
	{
		m_JumpTime += DeltaTime;

		float m_CurrentJumpValue = m_JumpCurve->GetFloatValue(m_JumpTime);
		float m_JumpTime_Delta = m_CurrentJumpValue - m_PrevJumpValue;
		m_PrevJumpValue = m_CurrentJumpValue;

		
	}
}

void ATP_Character_Player::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(_MoveAction, ETriggerEvent::Triggered, this, &ATP_Character_Player::HandleMoveInput);
		EnhancedInputComponent->BindAction(_LookAction, ETriggerEvent::Triggered, this, &ATP_Character_Player::HandleLookInput);
		EnhancedInputComponent->BindAction(_CrouchSlideAction, ETriggerEvent::Started, this, &ATP_Character_Player::HandleCrouchInput);

		EnhancedInputComponent->BindAction(_SprintAction, ETriggerEvent::Triggered, this, &ATP_Character_Player::PlayerSprintStart);
		EnhancedInputComponent->BindAction(_SprintAction, ETriggerEvent::Completed, this, &ATP_Character_Player::PlayerSprintStop);
	}
}

void ATP_Character_Player::HandleMoveInput(const FInputActionValue& Value)
{
	FVector2D MovementVector = Value.Get<FVector2D>();

	PlayerMovement(MovementVector.X, MovementVector.Y);
}

void ATP_Character_Player::HandleLookInput(const FInputActionValue& Value)
{
	FVector2D LookVector = Value.Get<FVector2D>();

	PlayerLook(LookVector.X, LookVector.Y);
}

void ATP_Character_Player::HandleCrouchInput()
{
	bSprintPressed ? PlayerSlideStart() : PlayerCrouch();
}

void ATP_Character_Player::PlayerMovement(float Right, float Forward)
{
	if (GetController() != NULL)
	{
		const FRotator Rotation = GetController()->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		//Get Forward Vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		//Get Right Vector
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// Apply the Movement to the player
		AddMovementInput(ForwardDirection, Forward);
		AddMovementInput(RightDirection, Right);
	}
}

void ATP_Character_Player::PlayerLook(float Yaw, float Pitch)
{
	if (GetController() != NULL)
	{
		// Apply the Look to the player
		AddControllerYawInput(Yaw);
		AddControllerPitchInput(Pitch);
	}
}

void ATP_Character_Player::PlayerSprintStart()
{
	if (bIsCrouching) return;

	bSprintPressed = true;
	GetCharacterMovement()->MaxWalkSpeed = 500.0f;
}

void ATP_Character_Player::PlayerSprintStop()
{
	if (bIsCrouching) return;

	bSprintPressed = false;
	GetCharacterMovement()->MaxWalkSpeed = 360.0f;
}

void ATP_Character_Player::PlayerJumpStart()
{
	if (!bIsJumping && m_JumpCurve)
	{
		if (!GetCharacterMovement()->bConstrainToPlane || 
			FMath::Abs(GetCharacterMovement()->GetPlaneConstraintNormal().Z) != 1)
		{
			bIsJumping = true;

			m_JumpTime = m_Min_JumpTime;
			m_PrevJumpValue = m_JumpCurve->GetFloatValue(m_JumpTime);

			SetActorTickEnabled(true);
		}
	}
}

void ATP_Character_Player::PlayerJumpEnd()
{
	SetActorTickEnabled(false);
}

void ATP_Character_Player::PlayerCrouch()
{
	if (bSprintPressed) return; // Will Add the slide mechanic later on

	bIsCrouching = !bIsCrouching;
	
	if (bIsCrouching)
	{
		// Crouching Height
		GetCharacterMovement()->MaxWalkSpeed = m_WalkSpeed / 2.0f;
		//GetCapsuleComponent()->SetCapsuleSize(42.0f,48.0f);
	}
	else
	{
		// Standing Height
		GetCharacterMovement()->MaxWalkSpeed = m_WalkSpeed;
		//GetCapsuleComponent()->SetCapsuleSize(42.0f, 96.0f);
	}
}

void ATP_Character_Player::PlayerSlideStart()
{

}
