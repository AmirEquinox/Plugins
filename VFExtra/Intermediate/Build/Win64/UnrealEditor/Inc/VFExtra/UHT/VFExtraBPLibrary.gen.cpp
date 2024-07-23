// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VFExtra/Public/VFExtraBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVFExtraBPLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VFExtra();
	VFEXTRA_API UClass* Z_Construct_UClass_UVFExtraBPLibrary();
	VFEXTRA_API UClass* Z_Construct_UClass_UVFExtraBPLibrary_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVFExtraBPLibrary::execGetMaterialGroup)
	{
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_Material);
		P_GET_PROPERTY(FNameProperty,Z_Param_parameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UVFExtraBPLibrary::GetMaterialGroup(Z_Param_Material,Z_Param_parameterName);
		P_NATIVE_END;
	}
	void UVFExtraBPLibrary::StaticRegisterNativesUVFExtraBPLibrary()
	{
		UClass* Class = UVFExtraBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMaterialGroup", &UVFExtraBPLibrary::execGetMaterialGroup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVFExtraBPLibrary_GetMaterialGroup_Statics
	{
		struct VFExtraBPLibrary_eventGetMaterialGroup_Parms
		{
			UMaterialInstanceDynamic* Material;
			FName parameterName;
			FName ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FNamePropertyParams NewProp_parameterName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVFExtraBPLibrary_GetMaterialGroup_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VFExtraBPLibrary_eventGetMaterialGroup_Parms, Material), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVFExtraBPLibrary_GetMaterialGroup_Statics::NewProp_parameterName = { "parameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VFExtraBPLibrary_eventGetMaterialGroup_Parms, parameterName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVFExtraBPLibrary_GetMaterialGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VFExtraBPLibrary_eventGetMaterialGroup_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVFExtraBPLibrary_GetMaterialGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVFExtraBPLibrary_GetMaterialGroup_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVFExtraBPLibrary_GetMaterialGroup_Statics::NewProp_parameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVFExtraBPLibrary_GetMaterialGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVFExtraBPLibrary_GetMaterialGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "VFE" },
		{ "ModuleRelativePath", "Public/VFExtraBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVFExtraBPLibrary_GetMaterialGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVFExtraBPLibrary, nullptr, "GetMaterialGroup", nullptr, nullptr, Z_Construct_UFunction_UVFExtraBPLibrary_GetMaterialGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVFExtraBPLibrary_GetMaterialGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVFExtraBPLibrary_GetMaterialGroup_Statics::VFExtraBPLibrary_eventGetMaterialGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVFExtraBPLibrary_GetMaterialGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVFExtraBPLibrary_GetMaterialGroup_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVFExtraBPLibrary_GetMaterialGroup_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVFExtraBPLibrary_GetMaterialGroup_Statics::VFExtraBPLibrary_eventGetMaterialGroup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVFExtraBPLibrary_GetMaterialGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVFExtraBPLibrary_GetMaterialGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVFExtraBPLibrary);
	UClass* Z_Construct_UClass_UVFExtraBPLibrary_NoRegister()
	{
		return UVFExtraBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVFExtraBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVFExtraBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VFExtra,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVFExtraBPLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVFExtraBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVFExtraBPLibrary_GetMaterialGroup, "GetMaterialGroup" }, // 2611170517
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVFExtraBPLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVFExtraBPLibrary_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "VFExtraBPLibrary.h" },
		{ "ModuleRelativePath", "Public/VFExtraBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVFExtraBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVFExtraBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVFExtraBPLibrary_Statics::ClassParams = {
		&UVFExtraBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVFExtraBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UVFExtraBPLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UVFExtraBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UVFExtraBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVFExtraBPLibrary.OuterSingleton, Z_Construct_UClass_UVFExtraBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVFExtraBPLibrary.OuterSingleton;
	}
	template<> VFEXTRA_API UClass* StaticClass<UVFExtraBPLibrary>()
	{
		return UVFExtraBPLibrary::StaticClass();
	}
	UVFExtraBPLibrary::UVFExtraBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVFExtraBPLibrary);
	UVFExtraBPLibrary::~UVFExtraBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_TestCpp_Plugins_VFExtra_Source_VFExtra_Public_VFExtraBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestCpp_Plugins_VFExtra_Source_VFExtra_Public_VFExtraBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVFExtraBPLibrary, UVFExtraBPLibrary::StaticClass, TEXT("UVFExtraBPLibrary"), &Z_Registration_Info_UClass_UVFExtraBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVFExtraBPLibrary), 2085965470U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestCpp_Plugins_VFExtra_Source_VFExtra_Public_VFExtraBPLibrary_h_2314268552(TEXT("/Script/VFExtra"),
		Z_CompiledInDeferFile_FID_TestCpp_Plugins_VFExtra_Source_VFExtra_Public_VFExtraBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestCpp_Plugins_VFExtra_Source_VFExtra_Public_VFExtraBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
