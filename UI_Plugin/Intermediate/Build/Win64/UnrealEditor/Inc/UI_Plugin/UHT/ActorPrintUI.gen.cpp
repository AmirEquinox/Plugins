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
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UI_PLUGIN_API UClass* Z_Construct_UClass_AActorPrintUI();
	UI_PLUGIN_API UClass* Z_Construct_UClass_AActorPrintUI_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UI_Plugin();
// End Cross Module References
	DEFINE_FUNCTION(AActorPrintUI::execMoveForwardThroughActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForwardThroughActors();
		P_NATIVE_END;
	}
	void AActorPrintUI::StaticRegisterNativesAActorPrintUI()
	{
		UClass* Class = AActorPrintUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveForwardThroughActors", &AActorPrintUI::execMoveForwardThroughActors },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AActorPrintUI_MoveForwardThroughActors_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActorPrintUI_MoveForwardThroughActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor Array" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to move forward through the array of actors\n" },
#endif
		{ "ModuleRelativePath", "Public/ActorPrintUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to move forward through the array of actors" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActorPrintUI_MoveForwardThroughActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActorPrintUI, nullptr, "MoveForwardThroughActors", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActorPrintUI_MoveForwardThroughActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActorPrintUI_MoveForwardThroughActors_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AActorPrintUI_MoveForwardThroughActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActorPrintUI_MoveForwardThroughActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AActorPrintUI);
	UClass* Z_Construct_UClass_AActorPrintUI_NoRegister()
	{
		return AActorPrintUI::StaticClass();
	}
	struct Z_Construct_UClass_AActorPrintUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AActorPrintUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UI_Plugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActorPrintUI_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AActorPrintUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AActorPrintUI_MoveForwardThroughActors, "MoveForwardThroughActors" }, // 1402902287
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActorPrintUI_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorPrintUI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ActorPrintUI.h" },
		{ "ModuleRelativePath", "Public/ActorPrintUI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActorPrintUI_Statics::NewProp_ActorsArray_Inner = { "ActorsArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorPrintUI_Statics::NewProp_ActorsArray_MetaData[] = {
		{ "Category", "Actor Array" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Array of actors to iterate through\n" },
#endif
		{ "ModuleRelativePath", "Public/ActorPrintUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of actors to iterate through" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AActorPrintUI_Statics::NewProp_ActorsArray = { "ActorsArray", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActorPrintUI, ActorsArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AActorPrintUI_Statics::NewProp_ActorsArray_MetaData), Z_Construct_UClass_AActorPrintUI_Statics::NewProp_ActorsArray_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorPrintUI_Statics::NewProp_CurrentIndex_MetaData[] = {
		{ "Category", "Actor Array" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Index of the currently selected actor\n" },
#endif
		{ "ModuleRelativePath", "Public/ActorPrintUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Index of the currently selected actor" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AActorPrintUI_Statics::NewProp_CurrentIndex = { "CurrentIndex", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActorPrintUI, CurrentIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AActorPrintUI_Statics::NewProp_CurrentIndex_MetaData), Z_Construct_UClass_AActorPrintUI_Statics::NewProp_CurrentIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AActorPrintUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorPrintUI_Statics::NewProp_ActorsArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorPrintUI_Statics::NewProp_ActorsArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorPrintUI_Statics::NewProp_CurrentIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActorPrintUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActorPrintUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AActorPrintUI_Statics::ClassParams = {
		&AActorPrintUI::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AActorPrintUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AActorPrintUI_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AActorPrintUI_Statics::Class_MetaDataParams), Z_Construct_UClass_AActorPrintUI_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActorPrintUI_Statics::PropPointers) < 2048);
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
		{ Z_Construct_UClass_AActorPrintUI, AActorPrintUI::StaticClass, TEXT("AActorPrintUI"), &Z_Registration_Info_UClass_AActorPrintUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AActorPrintUI), 1841334577U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestCpp_Plugins_UI_Plugin_Source_UI_Plugin_Public_ActorPrintUI_h_686759510(TEXT("/Script/UI_Plugin"),
		Z_CompiledInDeferFile_FID_TestCpp_Plugins_UI_Plugin_Source_UI_Plugin_Public_ActorPrintUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestCpp_Plugins_UI_Plugin_Source_UI_Plugin_Public_ActorPrintUI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
