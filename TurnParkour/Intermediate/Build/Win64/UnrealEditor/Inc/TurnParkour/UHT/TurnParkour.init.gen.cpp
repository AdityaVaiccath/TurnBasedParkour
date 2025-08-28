// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurnParkour_init() {}
	TURNPARKOUR_API UFunction* Z_Construct_UDelegateFunction_TurnParkour_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TurnParkour;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TurnParkour()
	{
		if (!Z_Registration_Info_UPackage__Script_TurnParkour.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_TurnParkour_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TurnParkour",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xEFEB1E1E,
				0xBD1B2D85,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TurnParkour.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TurnParkour.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TurnParkour(Z_Construct_UPackage__Script_TurnParkour, TEXT("/Script/TurnParkour"), Z_Registration_Info_UPackage__Script_TurnParkour, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xEFEB1E1E, 0xBD1B2D85));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
