// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Components/AudioComponent.h"
#include "Sound/SoundBase.h"
#include "ArchVizFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class INTERACTIONMODULE_API UArchVizFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "ArchViz")
	static void TransitionToLevel(const FString& LevelName);

	UFUNCTION(BlueprintCallable, Category = "Audio")
	static void PlayAudio(USoundBase* Sound, UAudioComponent* AudioComponent);

	UFUNCTION(BlueprintCallable, Category = "Audio")
	static void StopAllAudio(UAudioComponent* AudioComponent);

 
};
