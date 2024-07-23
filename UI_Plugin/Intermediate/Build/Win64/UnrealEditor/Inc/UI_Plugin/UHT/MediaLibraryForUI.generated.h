// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaLibraryForUI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAudioComponent;
class UMediaPlayer;
#ifdef UI_PLUGIN_MediaLibraryForUI_generated_h
#error "MediaLibraryForUI.generated.h already included, missing '#pragma once' in MediaLibraryForUI.h"
#endif
#define UI_PLUGIN_MediaLibraryForUI_generated_h

#define FID_TestCpp_Plugins_UI_Plugin_Source_UI_Plugin_Public_MediaLibraryForUI_h_20_SPARSE_DATA
#define FID_TestCpp_Plugins_UI_Plugin_Source_UI_Plugin_Public_MediaLibraryForUI_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_TestCpp_Plugins_UI_Plugin_Source_UI_Plugin_Public_MediaLibraryForUI_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_TestCpp_Plugins_UI_Plugin_Source_UI_Plugin_Public_MediaLibraryForUI_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoopMediaPlaylistWithSound); \
	DECLARE_FUNCTION(execPauseMediaWithSound); \
	DECLARE_FUNCTION(execSelectAndPlayMediaWithSound); \
	DECLARE_FUNCTION(execLoopMediaPlaylist); \
	DECLARE_FUNCTION(execPauseMedia); \
	DECLARE_FUNCTION(execSelectAndPlayMedia);


#define FID_TestCpp_Plugins_UI_Plugin_Source_UI_Plugin_Public_MediaLibraryForUI_h_20_ACCESSORS
#define FID_TestCpp_Plugins_UI_Plugin_Source_UI_Plugin_Public_MediaLibraryForUI_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaLibraryForUI(); \
	friend struct Z_Construct_UClass_UMediaLibraryForUI_Statics; \
public: \
	DECLARE_CLASS(UMediaLibraryForUI, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UI_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UMediaLibraryForUI)


#define FID_TestCpp_Plugins_UI_Plugin_Source_UI_Plugin_Public_MediaLibraryForUI_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaLibraryForUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaLibraryForUI(UMediaLibraryForUI&&); \
	NO_API UMediaLibraryForUI(const UMediaLibraryForUI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaLibraryForUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaLibraryForUI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaLibraryForUI) \
	NO_API virtual ~UMediaLibraryForUI();


#define FID_TestCpp_Plugins_UI_Plugin_Source_UI_Plugin_Public_MediaLibraryForUI_h_17_PROLOG
#define FID_TestCpp_Plugins_UI_Plugin_Source_UI_Plugin_Public_MediaLibraryForUI_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestCpp_Plugins_UI_Plugin_Source_UI_Plugin_Public_MediaLibraryForUI_h_20_SPARSE_DATA \
	FID_TestCpp_Plugins_UI_Plugin_Source_UI_Plugin_Public_MediaLibraryForUI_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_TestCpp_Plugins_UI_Plugin_Source_UI_Plugin_Public_MediaLibraryForUI_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_TestCpp_Plugins_UI_Plugin_Source_UI_Plugin_Public_MediaLibraryForUI_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TestCpp_Plugins_UI_Plugin_Source_UI_Plugin_Public_MediaLibraryForUI_h_20_ACCESSORS \
	FID_TestCpp_Plugins_UI_Plugin_Source_UI_Plugin_Public_MediaLibraryForUI_h_20_INCLASS_NO_PURE_DECLS \
	FID_TestCpp_Plugins_UI_Plugin_Source_UI_Plugin_Public_MediaLibraryForUI_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UI_PLUGIN_API UClass* StaticClass<class UMediaLibraryForUI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestCpp_Plugins_UI_Plugin_Source_UI_Plugin_Public_MediaLibraryForUI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
