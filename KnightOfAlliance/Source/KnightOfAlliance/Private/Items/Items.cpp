// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Items.h"
#include "TimerManager.h"

// Sets default values
AItems::AItems()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AItems::BeginPlay()
{
	Super::BeginPlay();
	float Delay = 5.0f;
	SetActorEnableCollision(false);
	// Set up a timer to execute RotateMesh function after the specified delay
	GetWorldTimerManager().SetTimer(TimerHandle_RotateMesh, this, &AItems::RotateMesh, Delay, false);
	
}

// Called every frame
void AItems::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AItems::RotateMesh()
{
	// Add your mesh rotation logic here
	// For example, rotating the mesh by 90 degrees around the Z-axis
	FVector DeltaMovement = FVector(0.0f, 0.0f, 10000.0f * GetWorld()->GetDeltaSeconds());
	AddActorLocalOffset(DeltaMovement);
	SetActorEnableCollision(true);
	UE_LOG(LogTemp, Warning, TEXT("Mesh Moved: %s"), *GetActorLocation().ToString());
}
