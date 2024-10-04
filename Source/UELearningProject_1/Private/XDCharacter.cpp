// Fill out your copyright notice in the Description page of Project Settings.


#include "XDCharacter.h"

// Sets default values
AXDCharacter::AXDCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AXDCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AXDCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AXDCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

