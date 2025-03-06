// Fill out your copyright notice in the Description page of Project Settings.


#include "PressableButton.h"

// Sets default values
APressableButton::APressableButton()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APressableButton::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APressableButton::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APressableButton::SpawnActor()
{

	//Does this work?
	FActorSpawnParameters spawnParams;
	spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

	GetWorld()->SpawnActor<AActor>(actorBPToSpawn, GetActorTransform(), spawnParams);
}