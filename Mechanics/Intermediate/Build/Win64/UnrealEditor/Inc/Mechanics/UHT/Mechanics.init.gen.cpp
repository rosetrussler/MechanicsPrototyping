// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMechanics_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Mechanics;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Mechanics()
	{
		if (!Z_Registration_Info_UPackage__Script_Mechanics.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Mechanics",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xB69C1B0E,
				0xB006574E,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Mechanics.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Mechanics.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Mechanics(Z_Construct_UPackage__Script_Mechanics, TEXT("/Script/Mechanics"), Z_Registration_Info_UPackage__Script_Mechanics, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB69C1B0E, 0xB006574E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
