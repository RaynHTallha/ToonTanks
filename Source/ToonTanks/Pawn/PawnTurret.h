// Fill out your copyright notice in the Description page of Project Settings.

#include "PawnBase.h"
#include "CoreMinimal.h"
#include "PawnTurret.generated.h"

#pragma once

/**
 * 
 */
UCLASS()
class TOONTANKS_API APawnTurret : public APawnBase
{
	GENERATED_BODY()

private:

	UPRPERTY(EditAnywhere, blueprintReadWrite, Category = "Combat", meta = (AllowPrivateAccess = "true"))
	float FireRate = 2.0f;

	void CheckFireCondition();

	FTimerHandle FireRateTimerHamdle;


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
};
