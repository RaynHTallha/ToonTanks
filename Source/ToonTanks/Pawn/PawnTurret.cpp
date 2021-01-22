// Fill out your copyright notice in the Description page of Project Settings.

#include "PawnTurret.h"
#include "Kismet/GameplayStatics.h"

// Called when the game starts or when spawned
void APawnTurret::BeginPlay()
{
	Super::BeginPlay();
	
    GetWorld()->GetTimerManager().SetTimer(FireRateTimerHandle, this, &APawnTurret::CheckFireCondition, FireRate, true);
}

// Called every frame
void APawnTurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void APawnTurret::CheckFireCondition() 
{
    // if Player == null || is dead then Bail!!

    // if player is in Ranger Then Fire!!

    UE_LOG(LogTemp, WArning, TEXT("Fire Condition CHecked!!"));
}