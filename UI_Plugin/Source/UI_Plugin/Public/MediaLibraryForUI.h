// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MediaLibraryForUI.generated.h"


/**
 * UMediaLibraryForUI
 * 
 * A Blueprint Function Library for handling media player functionalities such as selecting,
 * playing, pausing, and looping media based on a playlist index.
 */

UCLASS()
class UI_PLUGIN_API UMediaLibraryForUI : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	/**
   * Selects and plays media from the media player playlist based on the given index.
   *
   * @param MediaPlayerRef The reference to the media player.
   * @param MediaPlaylistIndex The index of the media in the playlist to play.
   * @param Loop Whether the media should loop.
   */
	UFUNCTION(BlueprintCallable, Category = "Amir MediaPlayer")
	static void SelectAndPlayMedia(UMediaPlayer* MediaPlayerRef, int32 MediaPlaylistIndex, bool Loop);

	/**
	 * Pauses the currently playing media.
	 *
	 * @param MediaPlayerRef The reference to the media player.
	 */
	UFUNCTION(BlueprintCallable, Category = "Amir MediaPlayer")
	static void PauseMedia(UMediaPlayer* MediaPlayerRef);

	/**
	 * Loops through the media playlist, playing the next media in the list.
	 *
	 * @param MediaPlayerRef The reference to the media player.
	 */
	UFUNCTION(BlueprintCallable, Category = "Amir MediaPlayer")
	static void LoopMediaPlaylist(UMediaPlayer* MediaPlayerRef);



	UFUNCTION(BlueprintCallable, Category = "Amir MediaPlayer")
	static void SelectAndPlayMediaWithSound(UMediaPlayer* MediaPlayerRef, int32 MediaPlaylistIndex, bool Loop, UAudioComponent* AudioComponentRef);

	UFUNCTION(BlueprintCallable, Category = "Amir MediaPlayer")
	static void PauseMediaWithSound(UMediaPlayer* MediaPlayerRef, UAudioComponent* AudioComponentRef);

	UFUNCTION(BlueprintCallable, Category = "Amir MediaPlayer")
	static void LoopMediaPlaylistWithSound(UMediaPlayer* MediaPlayerRef, UAudioComponent* AudioComponentRef);
	
	
};
