// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TurnParkourPlayerController.h"

#ifdef TURNPARKOUR_TurnParkourPlayerController_generated_h
#error "TurnParkourPlayerController.generated.h already included, missing '#pragma once' in TurnParkourPlayerController.h"
#endif
#define TURNPARKOUR_TurnParkourPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATurnParkourPlayerController *********************************************
TURNPARKOUR_API UClass* Z_Construct_UClass_ATurnParkourPlayerController_NoRegister();

#define FID_UnrealProj_TurnBasedParkour_TurnParkour_Source_TurnParkour_TurnParkourPlayerController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATurnParkourPlayerController(); \
	friend struct Z_Construct_UClass_ATurnParkourPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TURNPARKOUR_API UClass* Z_Construct_UClass_ATurnParkourPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ATurnParkourPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TurnParkour"), Z_Construct_UClass_ATurnParkourPlayerController_NoRegister) \
	DECLARE_SERIALIZER(ATurnParkourPlayerController)


#define FID_UnrealProj_TurnBasedParkour_TurnParkour_Source_TurnParkour_TurnParkourPlayerController_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATurnParkourPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATurnParkourPlayerController(ATurnParkourPlayerController&&) = delete; \
	ATurnParkourPlayerController(const ATurnParkourPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurnParkourPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurnParkourPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATurnParkourPlayerController) \
	NO_API virtual ~ATurnParkourPlayerController();


#define FID_UnrealProj_TurnBasedParkour_TurnParkour_Source_TurnParkour_TurnParkourPlayerController_h_16_PROLOG
#define FID_UnrealProj_TurnBasedParkour_TurnParkour_Source_TurnParkour_TurnParkourPlayerController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProj_TurnBasedParkour_TurnParkour_Source_TurnParkour_TurnParkourPlayerController_h_19_INCLASS_NO_PURE_DECLS \
	FID_UnrealProj_TurnBasedParkour_TurnParkour_Source_TurnParkour_TurnParkourPlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATurnParkourPlayerController;

// ********** End Class ATurnParkourPlayerController ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProj_TurnBasedParkour_TurnParkour_Source_TurnParkour_TurnParkourPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
