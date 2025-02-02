// Fill out your copyright notice in the Description page of Project Settings.


#include "TankPlayerController.h"
#include "BattleTank.h"

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("Tank not possessed"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController Possessing %s"), *(ControlledTank->GetName()));
	}

	UE_LOG(LogTemp, Warning, TEXT("Player controller begin play"));
}
ATank*	ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}