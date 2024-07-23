// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorPrintUI.h"

// Constructor
AActorPrintUI::AActorPrintUI()
	: CurrentIndex(0) // Initialize CurrentIndex to 0
{
	// Set default values
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AActorPrintUI::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("ActorPrintUI BeginPlay"));
	
}



// Function to move forward through the array of actors
void AActorPrintUI::MoveForwardThroughActors()
{
	// Check if the ActorsArray is not empty
	if (ActorsArray.Num() > 0)
	{
		// Increment the current index to move forward
		CurrentIndex = (CurrentIndex + 1) % ActorsArray.Num();

		// Get the actor at the current index
		AActor* CurrentActor = ActorsArray[CurrentIndex];

		// Example: Print the actor's name
		FString ActorName = CurrentActor->GetName();
		UE_LOG(LogTemp, Warning, TEXT("Current Actor: %s"), *ActorName);

		// Perform other actions with CurrentActor as needed
		// For example, move the actor to a new location
		FVector NewLocation = CurrentActor->GetActorLocation() + FVector(100.f, 0.f, 0.f);
		CurrentActor->SetActorLocation(NewLocation);

		// Or manipulate other properties of the actor
		// Example: Change the actor's visibility
		CurrentActor->SetActorHiddenInGame(true); // Hide the actor
		CurrentActor->SetActorEnableCollision(false); // Disable collision

		// You can call other functions on the actor or manipulate its properties here
	}
	else
	{
		// Handle if the ActorsArray is empty
		UE_LOG(LogTemp, Warning, TEXT("ActorsArray is empty."));
	}
}




// Called every frame
void AActorPrintUI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

