// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mechanics/FireAtPlayer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFireAtPlayer() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
MECHANICS_API UClass* Z_Construct_UClass_UFireAtPlayer();
MECHANICS_API UClass* Z_Construct_UClass_UFireAtPlayer_NoRegister();
UPackage* Z_Construct_UPackage__Script_Mechanics();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFireAtPlayer ************************************************************
void UFireAtPlayer::StaticRegisterNativesUFireAtPlayer()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFireAtPlayer;
UClass* UFireAtPlayer::GetPrivateStaticClass()
{
	using TClass = UFireAtPlayer;
	if (!Z_Registration_Info_UClass_UFireAtPlayer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FireAtPlayer"),
			Z_Registration_Info_UClass_UFireAtPlayer.InnerSingleton,
			StaticRegisterNativesUFireAtPlayer,
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
	return Z_Registration_Info_UClass_UFireAtPlayer.InnerSingleton;
}
UClass* Z_Construct_UClass_UFireAtPlayer_NoRegister()
{
	return UFireAtPlayer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFireAtPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "FireAtPlayer.h" },
		{ "ModuleRelativePath", "FireAtPlayer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFireAtPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFireAtPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Mechanics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFireAtPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFireAtPlayer_Statics::ClassParams = {
	&UFireAtPlayer::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFireAtPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UFireAtPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFireAtPlayer()
{
	if (!Z_Registration_Info_UClass_UFireAtPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFireAtPlayer.OuterSingleton, Z_Construct_UClass_UFireAtPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFireAtPlayer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFireAtPlayer);
UFireAtPlayer::~UFireAtPlayer() {}
// ********** End Class UFireAtPlayer **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Gaming_Documents_GitHub_MechanicsPrototyping_Mechanics_Source_Mechanics_FireAtPlayer_h__Script_Mechanics_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFireAtPlayer, UFireAtPlayer::StaticClass, TEXT("UFireAtPlayer"), &Z_Registration_Info_UClass_UFireAtPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFireAtPlayer), 3668791295U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Gaming_Documents_GitHub_MechanicsPrototyping_Mechanics_Source_Mechanics_FireAtPlayer_h__Script_Mechanics_2221954603(TEXT("/Script/Mechanics"),
	Z_CompiledInDeferFile_FID_Users_Gaming_Documents_GitHub_MechanicsPrototyping_Mechanics_Source_Mechanics_FireAtPlayer_h__Script_Mechanics_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Gaming_Documents_GitHub_MechanicsPrototyping_Mechanics_Source_Mechanics_FireAtPlayer_h__Script_Mechanics_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
