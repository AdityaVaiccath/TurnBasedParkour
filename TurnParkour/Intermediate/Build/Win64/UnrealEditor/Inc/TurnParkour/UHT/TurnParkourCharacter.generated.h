// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TurnParkourCharacter.h"

#ifdef TURNPARKOUR_TurnParkourCharacter_generated_h
#error "TurnParkourCharacter.generated.h already included, missing '#pragma once' in TurnParkourCharacter.h"
#endif
#define TURNPARKOUR_TurnParkourCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATurnParkourCharacter ****************************************************
#define FID_UnrealProj_TurnBasedParkour_TurnParkour_Source_TurnParkour_TurnParkourCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


TURNPARKOUR_API UClass* Z_Construct_UClass_ATurnParkourCharacter_NoRegister();

#define FID_UnrealProj_TurnBasedParkour_TurnParkour_Source_TurnParkour_TurnParkourCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATurnParkourCharacter(); \
	friend struct Z_Construct_UClass_ATurnParkourCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TURNPARKOUR_API UClass* Z_Construct_UClass_ATurnParkourCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ATurnParkourCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TurnParkour"), Z_Construct_UClass_ATurnParkourCharacter_NoRegister) \
	DECLARE_SERIALIZER(ATurnParkourCharacter)


#define FID_UnrealProj_TurnBasedParkour_TurnParkour_Source_TurnParkour_TurnParkourCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATurnParkourCharacter(ATurnParkourCharacter&&) = delete; \
	ATurnParkourCharacter(const ATurnParkourCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurnParkourCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurnParkourCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ATurnParkourCharacter) \
	NO_API virtual ~ATurnParkourCharacter();


#define FID_UnrealProj_TurnBasedParkour_TurnParkour_Source_TurnParkour_TurnParkourCharacter_h_21_PROLOG
#define FID_UnrealProj_TurnBasedParkour_TurnParkour_Source_TurnParkour_TurnParkourCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProj_TurnBasedParkour_TurnParkour_Source_TurnParkour_TurnParkourCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProj_TurnBasedParkour_TurnParkour_Source_TurnParkour_TurnParkourCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_UnrealProj_TurnBasedParkour_TurnParkour_Source_TurnParkour_TurnParkourCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATurnParkourCharacter;

// ********** End Class ATurnParkourCharacter ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProj_TurnBasedParkour_TurnParkour_Source_TurnParkour_TurnParkourCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
