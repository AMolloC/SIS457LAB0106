// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Paddle.generated.h"

class UFloatingPawnMovement;

UCLASS()
class ARCANOID_API APaddle : public APawn
{
	GENERATED_BODY()

private:
	// Sets default values for this pawn's properties
	static APaddle* APaddle();

	APaddle();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UStaticMeshComponent* SM_Paddle;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UFloatingPawnMovement* FloatingMovement;

	virtual void MoveHorizontal(float _AxisValue);


	virtual void MoveVertical(float _AxisValue);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	static APaddle* getAPaddle();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
