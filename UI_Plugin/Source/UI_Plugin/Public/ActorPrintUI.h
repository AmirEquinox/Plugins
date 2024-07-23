// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorPrintUI.generated.h"

UCLASS()
class UI_PLUGIN_API AActorPrintUI : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AActorPrintUI();

	// Function to move forward through the array of actors
	UFUNCTION(BlueprintCallable, Category = "Actor Array")
	void MoveForwardThroughActors();

 
protected:
	
	// Array of actors to iterate through
	UPROPERTY(EditAnywhere, Category = "Actor Array")
	TArray<AActor*> ActorsArray;

	// Index of the currently selected actor
	UPROPERTY(BlueprintReadOnly, Category = "Actor Array")
	int32 CurrentIndex;
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
