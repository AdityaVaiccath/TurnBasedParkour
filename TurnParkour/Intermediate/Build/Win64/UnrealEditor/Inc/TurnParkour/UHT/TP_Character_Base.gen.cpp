// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/TP_Character_Base.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTP_Character_Base() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
TURNPARKOUR_API UClass* Z_Construct_UClass_ATP_Character_Base();
TURNPARKOUR_API UClass* Z_Construct_UClass_ATP_Character_Base_NoRegister();
UPackage* Z_Construct_UPackage__Script_TurnParkour();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATP_Character_Base *******************************************************
void ATP_Character_Base::StaticRegisterNativesATP_Character_Base()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATP_Character_Base;
UClass* ATP_Character_Base::GetPrivateStaticClass()
{
	using TClass = ATP_Character_Base;
	if (!Z_Registration_Info_UClass_ATP_Character_Base.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TP_Character_Base"),
			Z_Registration_Info_UClass_ATP_Character_Base.InnerSingleton,
			StaticRegisterNativesATP_Character_Base,
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
	return Z_Registration_Info_UClass_ATP_Character_Base.InnerSingleton;
}
UClass* Z_Construct_UClass_ATP_Character_Base_NoRegister()
{
	return ATP_Character_Base::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATP_Character_Base_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/TP_Character_Base.h" },
		{ "ModuleRelativePath", "Public/Player/TP_Character_Base.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP_Character_Base>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATP_Character_Base_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_TurnParkour,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_Character_Base_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATP_Character_Base_Statics::ClassParams = {
	&ATP_Character_Base::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_Character_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_ATP_Character_Base_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATP_Character_Base()
{
	if (!Z_Registration_Info_UClass_ATP_Character_Base.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATP_Character_Base.OuterSingleton, Z_Construct_UClass_ATP_Character_Base_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATP_Character_Base.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATP_Character_Base);
ATP_Character_Base::~ATP_Character_Base() {}
// ********** End Class ATP_Character_Base *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProj_TurnBasedParkour_TurnParkour_Source_TurnParkour_Public_Player_TP_Character_Base_h__Script_TurnParkour_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATP_Character_Base, ATP_Character_Base::StaticClass, TEXT("ATP_Character_Base"), &Z_Registration_Info_UClass_ATP_Character_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATP_Character_Base), 242061883U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProj_TurnBasedParkour_TurnParkour_Source_TurnParkour_Public_Player_TP_Character_Base_h__Script_TurnParkour_525968667(TEXT("/Script/TurnParkour"),
	Z_CompiledInDeferFile_FID_UnrealProj_TurnBasedParkour_TurnParkour_Source_TurnParkour_Public_Player_TP_Character_Base_h__Script_TurnParkour_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProj_TurnBasedParkour_TurnParkour_Source_TurnParkour_Public_Player_TP_Character_Base_h__Script_TurnParkour_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
