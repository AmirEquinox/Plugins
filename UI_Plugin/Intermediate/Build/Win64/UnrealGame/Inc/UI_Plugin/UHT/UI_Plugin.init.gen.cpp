// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUI_Plugin_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UI_Plugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UI_Plugin()
	{
		if (!Z_Registration_Info_UPackage__Script_UI_Plugin.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UI_Plugin",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x7FECF394,
				0xADFB1898,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UI_Plugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UI_Plugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UI_Plugin(Z_Construct_UPackage__Script_UI_Plugin, TEXT("/Script/UI_Plugin"), Z_Registration_Info_UPackage__Script_UI_Plugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x7FECF394, 0xADFB1898));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
