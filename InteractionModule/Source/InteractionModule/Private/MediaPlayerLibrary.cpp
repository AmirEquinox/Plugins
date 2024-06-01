// #include "MediaPlayerLibrary.h"
// #include "MediaPlaylist.h" // Include the header file for UMediaPlaylist
//
// // void UMediaPlayerLibrary::PlayMediaAtIndex(UMediaPlayer* MediaPlayer, int32 PlaylistIndex, int32 LoopingIndex, bool bLoop)
// // {
// //     if (!MediaPlayer)
// //     {
// //         UE_LOG(LogTemp, Error, TEXT("UMediaPlayer is nullptr"));
// //         return;
// //     }
// //
// //     UMediaPlaylist* Playlist = MediaPlayer->GetPlaylist();
// //     if (!Playlist)
// //     {
// //         UE_LOG(LogTemp, Error, TEXT("Playlist is nullptr"));
// //         return;
// //     }
// //
// //     if (Playlist->Num() <= PlaylistIndex)
// //     {
// //         UE_LOG(LogTemp, Error, TEXT("Invalid PlaylistIndex"));
// //         return;
// //     }
// //
// //     // Clear the playlist
// //     Playlist->RemoveAll();
// //
// //     // Add the media source back to the playlist at the desired index
// //     UMediaSource* MediaSource = Playlist->Get(PlaylistIndex);
// //     if (MediaSource)
// //     {
// //         Playlist->Add(MediaSource);
// //     }
// //
// //     // Set looping
// //     MediaPlayer->SetLooping(bLoop);
// //
// //     // Open the media player
// //     if (MediaSource)
// //     {
// //         FString MediaUrl;
// //         if (MediaSource->GetUrl(MediaUrl))
// //         {
// //             MediaPlayer->OpenUrl(MediaUrl);
// //         }
// //         else
// //         {
// //             UE_LOG(LogTemp, Error, TEXT("Failed to get media URL"));
// //         }
// //     }
// //     else
// //     {
// //         UE_LOG(LogTemp, Error, TEXT("MediaSource is nullptr"));
// //     }
// // }
//
// void UMediaPlayerLibrary::PauseMedia(UMediaPlayer* MediaPlayer)
// {
//     if (!MediaPlayer)
//     {
//         UE_LOG(LogTemp, Error, TEXT("UMediaPlayer is nullptr"));
//         return;
//     }
//
//     if (MediaPlayer->IsPaused())
//     {
//         MediaPlayer->Play();
//     }
//     else
//     {
//         MediaPlayer->Pause();
//     }
// }
//
// void UMediaPlayerLibrary::TogglePlayback(UMediaPlayer* MediaPlayer)
// {
//     if (!MediaPlayer)
//     {
//         UE_LOG(LogTemp, Error, TEXT("UMediaPlayer is nullptr"));
//         return;
//     }
//
//     if (MediaPlayer->IsPlaying())
//     {
//         MediaPlayer->Pause();
//     }
//     else
//     {
//         MediaPlayer->Play();
//     }
// }
//
// void UMediaPlayerLibrary::SetLooping(UMediaPlayer* MediaPlayer, bool bLoop)
// {
//     if (!MediaPlayer)
//     {
//         UE_LOG(LogTemp, Error, TEXT("UMediaPlayer is nullptr"));
//         return;
//     }
//
//     MediaPlayer->SetLooping(bLoop);
// }
//
// // void UMediaPlayerLibrary::SetLoopingIndex(UMediaPlayer* MediaPlayer, int32 LoopingIndex)
// // {
// //     if (!MediaPlayer)
// //     {
// //         UE_LOG(LogTemp, Error, TEXT("UMediaPlayer is nullptr"));
// //         return;
// //     }
// //
// //     MediaPlayer->SetLooping(LoopingIndex);
// // }
//
//
// void UMediaPlayerLibrary::SetLoopingIndex(UMediaPlayer* MediaPlayer, bool bLoop, int32 LoopingIndex)
// {
//     if (!MediaPlayer)
//     {
//         UE_LOG(LogTemp, Error, TEXT("UMediaPlayer is nullptr"));
//         return;
//     }
//
//     MediaPlayer->SetLooping(bLoop);
//     // Set the looping index if needed
//     // Your implementation for setting the looping index goes here
// }
