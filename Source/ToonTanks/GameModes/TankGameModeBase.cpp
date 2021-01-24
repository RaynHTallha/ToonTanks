// Fill out your copyright notice in the Description page of Project Settings.


#include "TankGameModeBase.h"

void ATankGameModeBase::BeginPlay() 
{
    // Get refrences and game win/lose conditions.

    //Call HandleGameStart() to initialize the start countdown, turret activation, pawn check etc.
}

void ATankGameModeBase::ActorDied(AActor* DeadActor) 
{
    // Check what type of Actor died. If Turret, Tally. If Player -> go to lose condition.
}


void ATankGameModeBase::HandleGameStart() 
{
    // Inititalize the start countdown, turret activation, pawn check etc.
    // Call Blueprint version GameStart();
}

void ATankGameModeBase::HandleGameOver(bool PlayerWon) 
{
    // See if the player has destroyed all the turrets , show win result.
    // else if the turret destroyed player , show lose result.
    // Call blueprint version GameOver(bool).
}

    

