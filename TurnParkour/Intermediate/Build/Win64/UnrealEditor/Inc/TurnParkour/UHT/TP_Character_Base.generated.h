// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/TP_Character_Base.h"

#ifdef TURNPARKOUR_TP_Character_Base_generated_h
#error "TP_Character_Base.generated.h already included, missing '#pragma once' in TP_Character_Base.h"
#endif
#define TURNPARKOUR_TP_Character_Base_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATP_Character_Base *******************************************************
TURNPARKOUR_API UClass* Z_Construct_UClass_ATP_Character_Base_NoRegister();

#define FID_UnrealProj_TurnBasedParkour_TurnParkour_Source_TurnParkour_Public_Player_TP_Character_Base_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATP_Character_Base(); \
	friend struct Z_Construct_UClass_ATP_Character_Base_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TURNPARKOUR_API UClass* Z_Construct_UClass_ATP_Character_Base_NoRegister(); \
public: \
	DECLARE_CLASS2(ATP_Character_Base, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TurnParkour"), Z_Construct_UClass_ATP_Character_Base_NoRegister) \
	DECLARE_SERIALIZER(ATP_Character_Base)


#define FID_UnrealProj_TurnBasedParkour_TurnParkour_Source_TurnParkour_Public_Player_TP_Character_Base_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATP_Character_Base(ATP_Character_Base&&) = delete; \
	ATP_Character_Base(const ATP_Character_Base&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATP_Character_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATP_Character_Base); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATP_Character_Base) \
	NO_API virtual ~ATP_Character_Base();


#define FID_UnrealProj_TurnBasedParkour_TurnParkour_Source_TurnParkour_Public_Player_TP_Character_Base_h_9_PROLOG
#define FID_UnrealProj_TurnBasedParkour_TurnParkour_Source_TurnParkour_Public_Player_TP_Character_Base_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProj_TurnBasedParkour_TurnParkour_Source_TurnParkour_Public_Player_TP_Character_Base_h_12_INCLASS_NO_PURE_DECLS \
	FID_UnrealProj_TurnBasedParkour_TurnParkour_Source_TurnParkour_Public_Player_TP_Character_Base_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATP_Character_Base;

// ********** End Class ATP_Character_Base *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProj_TurnBasedParkour_TurnParkour_Source_TurnParkour_Public_Player_TP_Character_Base_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
