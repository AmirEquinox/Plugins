// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI_Plugin/Public/MediaLibraryForUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaLibraryForUI() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
	UI_PLUGIN_API UClass* Z_Construct_UClass_UMediaLibraryForUI();
	UI_PLUGIN_API UClass* Z_Construct_UClass_UMediaLibraryForUI_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UI_Plugin();
// End Cross Module References
	DEFINE_FUNCTION(UMediaLibraryForUI::execLoopMediaPlaylist)
	{
		P_GET_OBJECT(UMediaPlayer,Z_Param_MediaPlayerRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMediaLibraryForUI::LoopMediaPlaylist(Z_Param_MediaPlayerRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaLibraryForUI::execPauseMedia)
	{
		P_GET_OBJECT(UMediaPlayer,Z_Param_MediaPlayerRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMediaLibraryForUI::PauseMedia(Z_Param_MediaPlayerRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaLibraryForUI::execSelectAndPlayMedia)
	{
		P_GET_OBJECT(UMediaPlayer,Z_Param_MediaPlayerRef);
		P_GET_PROPERTY(FIntProperty,Z_Param_MediaPlaylistIndex);
		P_GET_UBOOL(Z_Param_Loop);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMediaLibraryForUI::SelectAndPlayMedia(Z_Param_MediaPlayerRef,Z_Param_MediaPlaylistIndex,Z_Param_Loop);
		P_NATIVE_END;
	}
	void UMediaLibraryForUI::StaticRegisterNativesUMediaLibraryForUI()
	{
		UClass* Class = UMediaLibraryForUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoopMediaPlaylist", &UMediaLibraryForUI::execLoopMediaPlaylist },
			{ "PauseMedia", &UMediaLibraryForUI::execPauseMedia },
			{ "SelectAndPlayMedia", &UMediaLibraryForUI::execSelectAndPlayMedia },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMediaLibraryForUI_LoopMediaPlaylist_Statics
	{
		struct MediaLibraryForUI_eventLoopMediaPlaylist_Parms
		{
			UMediaPlayer* MediaPlayerRef;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaPlayerRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaLibraryForUI_LoopMediaPlaylist_Statics::NewProp_MediaPlayerRef = { "MediaPlayerRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaLibraryForUI_eventLoopMediaPlaylist_Parms, MediaPlayerRef), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaLibraryForUI_LoopMediaPlaylist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaLibraryForUI_LoopMediaPlaylist_Statics::NewProp_MediaPlayerRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaLibraryForUI_LoopMediaPlaylist_Statics::Function_MetaDataParams[] = {
		{ "Category", "MediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Loops through the media playlist, playing the next media in the list.\n\x09 *\n\x09 * @param MediaPlayerRef The reference to the media player.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MediaLibraryForUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Loops through the media playlist, playing the next media in the list.\n\n@param MediaPlayerRef The reference to the media player." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaLibraryForUI_LoopMediaPlaylist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaLibraryForUI, nullptr, "LoopMediaPlaylist", nullptr, nullptr, Z_Construct_UFunction_UMediaLibraryForUI_LoopMediaPlaylist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaLibraryForUI_LoopMediaPlaylist_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaLibraryForUI_LoopMediaPlaylist_Statics::MediaLibraryForUI_eventLoopMediaPlaylist_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaLibraryForUI_LoopMediaPlaylist_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaLibraryForUI_LoopMediaPlaylist_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaLibraryForUI_LoopMediaPlaylist_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMediaLibraryForUI_LoopMediaPlaylist_Statics::MediaLibraryForUI_eventLoopMediaPlaylist_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMediaLibraryForUI_LoopMediaPlaylist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaLibraryForUI_LoopMediaPlaylist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaLibraryForUI_PauseMedia_Statics
	{
		struct MediaLibraryForUI_eventPauseMedia_Parms
		{
			UMediaPlayer* MediaPlayerRef;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaPlayerRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaLibraryForUI_PauseMedia_Statics::NewProp_MediaPlayerRef = { "MediaPlayerRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaLibraryForUI_eventPauseMedia_Parms, MediaPlayerRef), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaLibraryForUI_PauseMedia_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaLibraryForUI_PauseMedia_Statics::NewProp_MediaPlayerRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaLibraryForUI_PauseMedia_Statics::Function_MetaDataParams[] = {
		{ "Category", "MediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Pauses the currently playing media.\n\x09 *\n\x09 * @param MediaPlayerRef The reference to the media player.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MediaLibraryForUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pauses the currently playing media.\n\n@param MediaPlayerRef The reference to the media player." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaLibraryForUI_PauseMedia_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaLibraryForUI, nullptr, "PauseMedia", nullptr, nullptr, Z_Construct_UFunction_UMediaLibraryForUI_PauseMedia_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaLibraryForUI_PauseMedia_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaLibraryForUI_PauseMedia_Statics::MediaLibraryForUI_eventPauseMedia_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaLibraryForUI_PauseMedia_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaLibraryForUI_PauseMedia_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaLibraryForUI_PauseMedia_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMediaLibraryForUI_PauseMedia_Statics::MediaLibraryForUI_eventPauseMedia_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMediaLibraryForUI_PauseMedia()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaLibraryForUI_PauseMedia_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaLibraryForUI_SelectAndPlayMedia_Statics
	{
		struct MediaLibraryForUI_eventSelectAndPlayMedia_Parms
		{
			UMediaPlayer* MediaPlayerRef;
			int32 MediaPlaylistIndex;
			bool Loop;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaPlayerRef;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MediaPlaylistIndex;
		static void NewProp_Loop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Loop;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaLibraryForUI_SelectAndPlayMedia_Statics::NewProp_MediaPlayerRef = { "MediaPlayerRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaLibraryForUI_eventSelectAndPlayMedia_Parms, MediaPlayerRef), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaLibraryForUI_SelectAndPlayMedia_Statics::NewProp_MediaPlaylistIndex = { "MediaPlaylistIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaLibraryForUI_eventSelectAndPlayMedia_Parms, MediaPlaylistIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UMediaLibraryForUI_SelectAndPlayMedia_Statics::NewProp_Loop_SetBit(void* Obj)
	{
		((MediaLibraryForUI_eventSelectAndPlayMedia_Parms*)Obj)->Loop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaLibraryForUI_SelectAndPlayMedia_Statics::NewProp_Loop = { "Loop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaLibraryForUI_eventSelectAndPlayMedia_Parms), &Z_Construct_UFunction_UMediaLibraryForUI_SelectAndPlayMedia_Statics::NewProp_Loop_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaLibraryForUI_SelectAndPlayMedia_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaLibraryForUI_SelectAndPlayMedia_Statics::NewProp_MediaPlayerRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaLibraryForUI_SelectAndPlayMedia_Statics::NewProp_MediaPlaylistIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaLibraryForUI_SelectAndPlayMedia_Statics::NewProp_Loop,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaLibraryForUI_SelectAndPlayMedia_Statics::Function_MetaDataParams[] = {
		{ "Category", "MediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * Selects and plays media from the media player playlist based on the given index.\n   *\n   * @param MediaPlayerRef The reference to the media player.\n   * @param MediaPlaylistIndex The index of the media in the playlist to play.\n   * @param Loop Whether the media should loop.\n   */" },
#endif
		{ "ModuleRelativePath", "Public/MediaLibraryForUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Selects and plays media from the media player playlist based on the given index.\n\n@param MediaPlayerRef The reference to the media player.\n@param MediaPlaylistIndex The index of the media in the playlist to play.\n@param Loop Whether the media should loop." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaLibraryForUI_SelectAndPlayMedia_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaLibraryForUI, nullptr, "SelectAndPlayMedia", nullptr, nullptr, Z_Construct_UFunction_UMediaLibraryForUI_SelectAndPlayMedia_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaLibraryForUI_SelectAndPlayMedia_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaLibraryForUI_SelectAndPlayMedia_Statics::MediaLibraryForUI_eventSelectAndPlayMedia_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaLibraryForUI_SelectAndPlayMedia_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaLibraryForUI_SelectAndPlayMedia_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaLibraryForUI_SelectAndPlayMedia_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMediaLibraryForUI_SelectAndPlayMedia_Statics::MediaLibraryForUI_eventSelectAndPlayMedia_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMediaLibraryForUI_SelectAndPlayMedia()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaLibraryForUI_SelectAndPlayMedia_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaLibraryForUI);
	UClass* Z_Construct_UClass_UMediaLibraryForUI_NoRegister()
	{
		return UMediaLibraryForUI::StaticClass();
	}
	struct Z_Construct_UClass_UMediaLibraryForUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaLibraryForUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UI_Plugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMediaLibraryForUI_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMediaLibraryForUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMediaLibraryForUI_LoopMediaPlaylist, "LoopMediaPlaylist" }, // 3112123642
		{ &Z_Construct_UFunction_UMediaLibraryForUI_PauseMedia, "PauseMedia" }, // 1363901755
		{ &Z_Construct_UFunction_UMediaLibraryForUI_SelectAndPlayMedia, "SelectAndPlayMedia" }, // 1488638933
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMediaLibraryForUI_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaLibraryForUI_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UMediaLibraryForUI\n * \n * A Blueprint Function Library for handling media player functionalities such as selecting,\n * playing, pausing, and looping media based on a playlist index.\n */" },
#endif
		{ "IncludePath", "MediaLibraryForUI.h" },
		{ "ModuleRelativePath", "Public/MediaLibraryForUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UMediaLibraryForUI\n\nA Blueprint Function Library for handling media player functionalities such as selecting,\nplaying, pausing, and looping media based on a playlist index." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaLibraryForUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaLibraryForUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaLibraryForUI_Statics::ClassParams = {
		&UMediaLibraryForUI::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMediaLibraryForUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UMediaLibraryForUI_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMediaLibraryForUI()
	{
		if (!Z_Registration_Info_UClass_UMediaLibraryForUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaLibraryForUI.OuterSingleton, Z_Construct_UClass_UMediaLibraryForUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMediaLibraryForUI.OuterSingleton;
	}
	template<> UI_PLUGIN_API UClass* StaticClass<UMediaLibraryForUI>()
	{
		return UMediaLibraryForUI::StaticClass();
	}
	UMediaLibraryForUI::UMediaLibraryForUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaLibraryForUI);
	UMediaLibraryForUI::~UMediaLibraryForUI() {}
	struct Z_CompiledInDeferFile_FID_TestCpp_Plugins_UI_Plugin_Source_UI_Plugin_Public_MediaLibraryForUI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestCpp_Plugins_UI_Plugin_Source_UI_Plugin_Public_MediaLibraryForUI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMediaLibraryForUI, UMediaLibraryForUI::StaticClass, TEXT("UMediaLibraryForUI"), &Z_Registration_Info_UClass_UMediaLibraryForUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaLibraryForUI), 4238966013U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestCpp_Plugins_UI_Plugin_Source_UI_Plugin_Public_MediaLibraryForUI_h_1197929012(TEXT("/Script/UI_Plugin"),
		Z_CompiledInDeferFile_FID_TestCpp_Plugins_UI_Plugin_Source_UI_Plugin_Public_MediaLibraryForUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestCpp_Plugins_UI_Plugin_Source_UI_Plugin_Public_MediaLibraryForUI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
