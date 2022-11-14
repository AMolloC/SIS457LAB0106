// Fill out your copyright notice in the Description page of Project Settings.


#include "Capsula.h"

// Sets default values
ACapsula* ACapsula::ACapsula(std:: string Tipo)
{

	if (color == "Dano")
		return new ACapsulaDano();
	else if (color == "Poder")
		return new ACapsulaPoder();
	else
		return nullptr;
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> CapsulaPoderMessAsset(TEXT("D:\SIS457\Arcanoid-master\Content\Materials.M_BrickGreen"));

	M_BrickGreen = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ACapsula"));
	M_BrickGreen->SetStaticMesh(BrickMessAsset.Object);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> CapsulaDanoMessAsset(TEXT("D:\SIS457\Arcanoid-master\Content\Materials.M_BrickRed"));

	M_BrickRed = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ACapsula"));
	M_BrickRed->SetStaticMesh(BrickMessAsset.Object);
}

// Called when the game starts or when spawned
void ACapsula::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACapsula::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

