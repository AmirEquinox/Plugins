// Fill out your copyright notice in the Description page of Project Settings.


#include "MediaLibraryForUI.h"
#include "MediaPlayer.h"
#include "MediaPlaylist.h"
#include "Components/AudioComponent.h"

 

/**
 * Pauses the currently playing media.
 *
 * @param MediaPlayerRef The reference to the media player.
 */
void UMediaLibraryForUI::PauseMedia(UMediaPlayer* MediaPlayerRef)
{
	// Ensure the MediaPlayerRef is valid
	if (MediaPlayerRef)
	{
		// Pause the media
		MediaPlayerRef->Pause();
	}
}

/**
 * Selects and plays media from the media player playlist based on the given index.
 *
 * @param MediaPlayerRef The reference to the media player.
 * @param MediaPlaylistIndex The index of the media in the playlist to play.
 * @param Loop Whether the media should loop.
 */
void UMediaLibraryForUI::SelectAndPlayMedia(UMediaPlayer* MediaPlayerRef, int32 MediaPlaylistIndex, bool Loop)
{
	// Ensure the MediaPlayerRef and its playlist are valid, and the index is within range
	if ( !MediaPlayerRef || !MediaPlayerRef->GetPlaylist() || MediaPlaylistIndex < 0 || MediaPlaylistIndex >= MediaPlayerRef->GetPlaylist()->Num() )
	{
		return;
	}

	// Get the media source at the specified index
	UMediaSource* MediaSource = MediaPlayerRef->GetPlaylist()->Get(MediaPlaylistIndex);
	if (MediaSource)
	{
		// Open the media source and set the loop option
		MediaPlayerRef->OpenSource(MediaSource);
		MediaPlayerRef->SetLooping(Loop);
		// Play the media
		MediaPlayerRef->Play();
	}
}

/**
 * Loops through the media playlist, playing the next media in the list.
 *
 * @param MediaPlayerRef The reference to the media player.
 */
void UMediaLibraryForUI::LoopMediaPlaylist(UMediaPlayer* MediaPlayerRef)
{
	// Ensure the MediaPlayerRef and its playlist are valid
	if (!MediaPlayerRef || !MediaPlayerRef->GetPlaylist())
	{
		return;
	}

	// Get the current index and calculate the next index
	int32 CurrentIndex = MediaPlayerRef->GetPlaylistIndex();
	int32 NextIndex = (CurrentIndex + 1) % MediaPlayerRef->GetPlaylist()->Num();

	// Open the media at the next index and play it
	UMediaSource* MediaSource = MediaPlayerRef->GetPlaylist()->Get(NextIndex);
	if (MediaSource)
	{
		MediaPlayerRef->OpenSource(MediaSource);
		MediaPlayerRef->Play();
	}
}

////////////////////		Play Video	With Sound					////////////////////










/**
 * Selects and plays media from the media player playlist based on the given index.
 *
 * @param MediaPlayerRef The reference to the media player.
 * @param MediaPlaylistIndex The index of the media in the playlist to play.
 * @param Loop Whether the media should loop.
 * @param AudioComponentRef The reference to the audio component to play sound.
 */
void UMediaLibraryForUI::SelectAndPlayMediaWithSound(UMediaPlayer* MediaPlayerRef, int32 MediaPlaylistIndex, bool Loop, UAudioComponent* AudioComponentRef)
{
    // Ensure the MediaPlayerRef and its playlist are valid, and the index is within range
    if (!MediaPlayerRef || !MediaPlayerRef->GetPlaylist() || MediaPlaylistIndex < 0 || MediaPlaylistIndex >= MediaPlayerRef->GetPlaylist()->Num())
    {
        return;
    }

    // Get the media source at the specified index
    UMediaSource* MediaSource = MediaPlayerRef->GetPlaylist()->Get(MediaPlaylistIndex);
    if (MediaSource)
    {
        // Open the media source and set the loop option
        bool bOpenedSuccessfully = MediaPlayerRef->OpenSource(MediaSource);
        if (bOpenedSuccessfully)
        {
            MediaPlayerRef->SetLooping(Loop);
            // Play the media
            MediaPlayerRef->Play();
            // Play the associated sound
            if (AudioComponentRef)
            {
                AudioComponentRef->Play();
            }
        }
    }
}

/**
 * Pauses the currently playing media.
 *
 * @param MediaPlayerRef The reference to the media player.
 * @param AudioComponentRef The reference to the audio component to stop sound.
 */
void UMediaLibraryForUI::PauseMediaWithSound(UMediaPlayer* MediaPlayerRef, UAudioComponent* AudioComponentRef)
{
    // Ensure the MediaPlayerRef is valid
    if (MediaPlayerRef)
    {
        // Pause the media
        MediaPlayerRef->Pause();
        // Stop the associated sound
        if (AudioComponentRef)
        {
            AudioComponentRef->Stop();
        }
    }
}

/**
 * Loops through the media playlist, playing the next media in the list.
 *
 * @param MediaPlayerRef The reference to the media player.
 * @param AudioComponentRef The reference to the audio component to play sound.
 */
void UMediaLibraryForUI::LoopMediaPlaylistWithSound(UMediaPlayer* MediaPlayerRef, UAudioComponent* AudioComponentRef)
{
    // Ensure the MediaPlayerRef and its playlist are valid
    if (!MediaPlayerRef || !MediaPlayerRef->GetPlaylist())
    {
        return;
    }

    // Get the current index and calculate the next index
    int32 CurrentIndex = MediaPlayerRef->GetPlaylistIndex();
    int32 NextIndex = (CurrentIndex + 1) % MediaPlayerRef->GetPlaylist()->Num();

    // Open the media at the next index and play it
    UMediaSource* MediaSource = MediaPlayerRef->GetPlaylist()->Get(NextIndex);
    if (MediaSource)
    {
        bool bOpenedSuccessfully = MediaPlayerRef->OpenSource(MediaSource);
        if (bOpenedSuccessfully)
        {
            MediaPlayerRef->Play();
            // Play the associated sound
            if (AudioComponentRef)
            {
                AudioComponentRef->Play();
            }
        }
    }
}