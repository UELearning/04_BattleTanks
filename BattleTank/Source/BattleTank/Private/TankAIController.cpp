// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

		auto AIControlledTank = GetAIControlledTank();
		if (!AIControlledTank)
		{
			UE_LOG(LogTemp, Warning, TEXT("AI not being controlled"));
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("AI Possessing %s"), *(AIControlledTank->GetName()));
		}
}