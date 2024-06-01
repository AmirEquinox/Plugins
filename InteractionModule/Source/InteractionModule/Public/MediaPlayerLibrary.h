// #pragma once
//
// #include "CoreMinimal.h"
// #include "Kismet/BlueprintFunctionLibrary.h"
// #include "MediaPlayer.h"
// #include "MediaPlaylist.h"
// #include "MediaPlayerLibrary.generated.h"
//
// /**
//  * 
//  */
// UCLASS()
// class INTERACTIONMODULE_API UMediaPlayerLibrary : public UBlueprintFunctionLibrary
// {
// 	GENERATED_BODY()
//
// public:
// 	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
// 	static void PlayMediaAtIndex(UMediaPlayer* MediaPlayer, int32 PlaylistIndex, int32 LoopingIndex, bool bLoop);
//
// 	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
// 	static void PauseMedia(UMediaPlayer* MediaPlayer);
//
// 	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
// 	static void TogglePlayback(UMediaPlayer* MediaPlayer);
//
// 	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
// 	static void SetLooping(UMediaPlayer* MediaPlayer, bool bLoop);
//
// 	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
// 	static void SetLoopingIndex(UMediaPlayer* MediaPlayer, int32 LoopingIndex);
// };
