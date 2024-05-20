 
#include "ArchVizFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h"

void UArchVizFunctionLibrary::TransitionToLevel(const FString& LevelName)
{
    if (UWorld* World = GEngine->GetWorldContextFromGameViewport(GEngine->GameViewport)->World())
    {
        if ( LevelName.IsEmpty() )
        {
            UE_LOG(LogTemp, Error, TEXT("TransitionToLevel: Level name is not specified."));
            return;
        }

        UGameplayStatics::OpenLevel(World, FName(*LevelName));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("TransitionToLevel: Unable to get valid game world."));
    }
}
 

void UArchVizFunctionLibrary::PlayAudio(USoundBase* Sound, UAudioComponent* AudioComponent)
{
    if (!AudioComponent)
    {
        UE_LOG(LogTemp, Warning, TEXT("AudioComponent is null!"));
        return;
    }

    if (Sound)
    {
        AudioComponent->SetSound(Sound);
        AudioComponent->Play();
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Sound is null!"));
    }
}

void UArchVizFunctionLibrary::StopAllAudio(UAudioComponent* AudioComponent)
{
    if (AudioComponent)
    {
        AudioComponent->Stop();
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("AudioComponent is null!"));
    }
}

/*
void UArchVizFunctionLibrary::StopAllAudio(UAudioComponent* AudioComponent)
{
    ensure(AudioComponent != nullptr);

    AudioComponent->Stop();
}

 */
 