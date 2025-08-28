// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnParkourGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTurnParkourGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TURNPARKOUR_API UClass* Z_Construct_UClass_ATurnParkourGameMode();
TURNPARKOUR_API UClass* Z_Construct_UClass_ATurnParkourGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TurnParkour();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATurnParkourGameMode *****************************************************
void ATurnParkourGameMode::StaticRegisterNativesATurnParkourGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATurnParkourGameMode;
UClass* ATurnParkourGameMode::GetPrivateStaticClass()
{
	using TClass = ATurnParkourGameMode;
	if (!Z_Registration_Info_UClass_ATurnParkourGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TurnParkourGameMode"),
			Z_Registration_Info_UClass_ATurnParkourGameMode.InnerSingleton,
			StaticRegisterNativesATurnParkourGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ATurnParkourGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ATurnParkourGameMode_NoRegister()
{
	return ATurnParkourGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATurnParkourGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TurnParkourGameMode.h" },
		{ "ModuleRelativePath", "TurnParkourGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATurnParkourGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATurnParkourGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TurnParkour,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATurnParkourGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATurnParkourGameMode_Statics::ClassParams = {
	&ATurnParkourGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATurnParkourGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATurnParkourGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATurnParkourGameMode()
{
	if (!Z_Registration_Info_UClass_ATurnParkourGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATurnParkourGameMode.OuterSingleton, Z_Construct_UClass_ATurnParkourGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATurnParkourGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATurnParkourGameMode);
ATurnParkourGameMode::~ATurnParkourGameMode() {}
// ********** End Class ATurnParkourGameMode *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProj_TurnBasedParkour_TurnParkour_Source_TurnParkour_TurnParkourGameMode_h__Script_TurnParkour_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATurnParkourGameMode, ATurnParkourGameMode::StaticClass, TEXT("ATurnParkourGameMode"), &Z_Registration_Info_UClass_ATurnParkourGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATurnParkourGameMode), 2549728603U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProj_TurnBasedParkour_TurnParkour_Source_TurnParkour_TurnParkourGameMode_h__Script_TurnParkour_2137049872(TEXT("/Script/TurnParkour"),
	Z_CompiledInDeferFile_FID_UnrealProj_TurnBasedParkour_TurnParkour_Source_TurnParkour_TurnParkourGameMode_h__Script_TurnParkour_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProj_TurnBasedParkour_TurnParkour_Source_TurnParkour_TurnParkourGameMode_h__Script_TurnParkour_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
