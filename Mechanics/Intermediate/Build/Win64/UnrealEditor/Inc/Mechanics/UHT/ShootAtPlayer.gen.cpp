// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mechanics/ShootAtPlayer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeShootAtPlayer() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
MECHANICS_API UClass* Z_Construct_UClass_UShootAtPlayer();
MECHANICS_API UClass* Z_Construct_UClass_UShootAtPlayer_NoRegister();
UPackage* Z_Construct_UPackage__Script_Mechanics();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UShootAtPlayer ***********************************************************
void UShootAtPlayer::StaticRegisterNativesUShootAtPlayer()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UShootAtPlayer;
UClass* UShootAtPlayer::GetPrivateStaticClass()
{
	using TClass = UShootAtPlayer;
	if (!Z_Registration_Info_UClass_UShootAtPlayer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ShootAtPlayer"),
			Z_Registration_Info_UClass_UShootAtPlayer.InnerSingleton,
			StaticRegisterNativesUShootAtPlayer,
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
	return Z_Registration_Info_UClass_UShootAtPlayer.InnerSingleton;
}
UClass* Z_Construct_UClass_UShootAtPlayer_NoRegister()
{
	return UShootAtPlayer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UShootAtPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ShootAtPlayer.h" },
		{ "ModuleRelativePath", "ShootAtPlayer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShootAtPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UShootAtPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Mechanics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShootAtPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UShootAtPlayer_Statics::ClassParams = {
	&UShootAtPlayer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UShootAtPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UShootAtPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UShootAtPlayer()
{
	if (!Z_Registration_Info_UClass_UShootAtPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShootAtPlayer.OuterSingleton, Z_Construct_UClass_UShootAtPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UShootAtPlayer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UShootAtPlayer);
UShootAtPlayer::~UShootAtPlayer() {}
// ********** End Class UShootAtPlayer *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Gaming_Documents_GitHub_MechanicsPrototyping_Mechanics_Source_Mechanics_ShootAtPlayer_h__Script_Mechanics_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UShootAtPlayer, UShootAtPlayer::StaticClass, TEXT("UShootAtPlayer"), &Z_Registration_Info_UClass_UShootAtPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShootAtPlayer), 502501336U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Gaming_Documents_GitHub_MechanicsPrototyping_Mechanics_Source_Mechanics_ShootAtPlayer_h__Script_Mechanics_437544310(TEXT("/Script/Mechanics"),
	Z_CompiledInDeferFile_FID_Users_Gaming_Documents_GitHub_MechanicsPrototyping_Mechanics_Source_Mechanics_ShootAtPlayer_h__Script_Mechanics_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Gaming_Documents_GitHub_MechanicsPrototyping_Mechanics_Source_Mechanics_ShootAtPlayer_h__Script_Mechanics_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
