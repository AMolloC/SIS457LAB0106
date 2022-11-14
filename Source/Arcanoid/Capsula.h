// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Capsula.generated.h"

UCLASS()
class ARCANOID_API ACapsula : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACapsula() {
		Tipo = " ";
	}

	string Tipo;
	virtual void Mostrar() = 0;

	/* This is the factory method. */
	static ACapsula* getACapsula(string Tipo);

	class ACapsulaPoder::ACapsula
	{
	public:
		if (CapsulaPoder = 0; CapsulaPoder = 3; CapsulaPoder++) {
			Tipo = "Poder";
		}
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UStaticMeshComponent* M_CapsulaPoder;

	};

	class CapsulaDano::ACapsula
	{
	public:
		if (CapsulaDano = 0; CapsulaDano = 3; CapsulaDano++) {
			Tipo = "Dano";

		}
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
			UStaticMeshComponent* M_CapsulaDano;

	};
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
