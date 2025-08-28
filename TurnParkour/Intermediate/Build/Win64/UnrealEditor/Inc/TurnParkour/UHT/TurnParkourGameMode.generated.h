// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TurnParkourGameMode.h"

#ifdef TURNPARKOUR_TurnParkourGameMode_generated_h
#error "TurnParkourGameMode.generated.h already included, missing '#pragma once' in TurnParkourGameMode.h"
#endif
#define TURNPARKOUR_TurnParkourGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATurnParkourGameMode *****************************************************
TURNPARKOUR_API UClass* Z_Construct_UClass_ATurnParkourGameMode_NoRegister();

#define FID_UnrealProj_TurnBasedParkour_TurnParkour_Source_TurnParkour_TurnParkourGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATurnParkourGameMode(); \
	friend struct Z_Construct_UClass_ATurnParkourGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TURNPARKOUR_API UClass* Z_Construct_UClass_ATurnParkourGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ATurnParkourGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TurnParkour"), Z_Construct_UClass_ATurnParkourGameMode_NoRegister) \
	DECLARE_SERIALIZER(ATurnParkourGameMode)


#define FID_UnrealProj_TurnBasedParkour_TurnParkour_Source_TurnParkour_TurnParkourGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATurnParkourGameMode(ATurnParkourGameMode&&) = delete; \
	ATurnParkourGameMode(const ATurnParkourGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurnParkourGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurnParkourGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ATurnParkourGameMode) \
	NO_API virtual ~ATurnParkourGameMode();


#define FID_UnrealProj_TurnBasedParkour_TurnParkour_Source_TurnParkour_TurnParkourGameMode_h_12_PROLOG
#define FID_UnrealProj_TurnBasedParkour_TurnParkour_Source_TurnParkour_TurnParkourGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProj_TurnBasedParkour_TurnParkour_Source_TurnParkour_TurnParkourGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_UnrealProj_TurnBasedParkour_TurnParkour_Source_TurnParkour_TurnParkourGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATurnParkourGameMode;

// ********** End Class ATurnParkourGameMode *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProj_TurnBasedParkour_TurnParkour_Source_TurnParkour_TurnParkourGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
