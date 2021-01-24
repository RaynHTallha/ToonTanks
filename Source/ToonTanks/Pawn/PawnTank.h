// Fill out your copyright notice in the Description page of Project Settings.
#include "PawnBase.h"
#include "CoreMinimal.h"
#include "PawnTank.generated.h"

#pragma once

class USpringArmComponent;
class UCameraComponent;
UCLASS()
class TOONTANKS_API APawnTank : public APawnBase
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Compnents", meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Compnents", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* Camera;

	FVector MoveDirection;
	FQuat RotationDirection;

	void CalculateMoveInput(float Value);
	void CalculateRotationInput(float Value);
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Movment", meta = (AllowPrivateAccess = "true"))	
	float MoveSpeed = 100.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Movment", meta = (AllowPrivateAccess = "true"))
	float RotateSpeed = 100.0f;

	APlayerController* PlayerControllerRef;
	
	void Move();
	void Rotate();

public:

	APawnTank();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void HandleDestruction() override;
};
