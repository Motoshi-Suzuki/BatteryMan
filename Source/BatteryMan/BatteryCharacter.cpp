// Fill out your copyright notice in the Description page of Project Settings.


#include "BatteryCharacter.h"

// Sets default values
ABatteryCharacter::ABatteryCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABatteryCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABatteryCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABatteryCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

