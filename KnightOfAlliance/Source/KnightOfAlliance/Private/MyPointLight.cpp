// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPointLight.h"
#include <Engine/PointLight.h>
#include <Components/PointLightComponent.h>

// Sets default values
AMyPointLight::AMyPointLight()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyPointLight::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("saaaaaaaaaaaaaaaaaaa"));

}

// Called every frame
void AMyPointLight::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

