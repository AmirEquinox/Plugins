// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI_Plugin/Public/ActorPrintUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorPrintUI() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UI_PLUGIN_API UClass* Z_Construct_UClass_AActorPrintUI();
	UI_PLUGIN_API UClass* Z_Construct_UClass_AActorPrintUI_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UI_Plugin();
// End Cross Module References
	void AActorPrintUI::StaticRegisterNativesAActorPrintUI()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AActorPrintUI);
	UClass* Z_Construct_UClass_AActorPrintUI_NoRegister()
	{
		return AActorPrintUI::StaticClass();
	}
	struct Z_Construct_UClass_AActorPrintUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AActorPrintUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UI_Plugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActorPrintUI_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorPrintUI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ActorPrintUI.h" },
		{ "ModuleRelativePath", "Public/ActorPrintUI.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActorPrintUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActorPrintUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AActorPrintUI_Statics::ClassParams = {
		&AActorPrintUI::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AActorPrintUI_Statics::Class_MetaDataParams), Z_Construct_UClass_AActorPrintUI_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AActorPrintUI()
	{
		if (!Z_Registration_Info_UClass_AActorPrintUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AActorPrintUI.OuterSingleton, Z_Construct_UClass_AActorPrintUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AActorPrintUI.OuterSingleton;
	}
	template<> UI_PLUGIN_API UClass* StaticClass<AActorPrintUI>()
	{
		return AActorPrintUI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActorPrintUI);
	AActorPrintUI::~AActorPrintUI() {}
	struct Z_CompiledInDeferFile_FID_TestCpp_Plugins_UI_Plugin_Source_UI_Plugin_Public_ActorPrintUI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestCpp_Plugins_UI_Plugin_Source_UI_Plugin_Public_ActorPrintUI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AActorPrintUI, AActorPrintUI::StaticClass, TEXT("AActorPrintUI"), &Z_Registration_Info_UClass_AActorPrintUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AActorPrintUI), 2688423340U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestCpp_Plugins_UI_Plugin_Source_UI_Plugin_Public_ActorPrintUI_h_2162274658(TEXT("/Script/UI_Plugin"),
		Z_CompiledInDeferFile_FID_TestCpp_Plugins_UI_Plugin_Source_UI_Plugin_Public_ActorPrintUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestCpp_Plugins_UI_Plugin_Source_UI_Plugin_Public_ActorPrintUI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
