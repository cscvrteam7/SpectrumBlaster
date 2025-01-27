// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ActorComponent.h"
#include "ButtonBlast.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PUSHBUTTON_API UButtonBlast : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UButtonBlast();

	// Called when the game starts
	virtual void BeginPlay() override;

	void RegisterButtonHit();
	
	// Called every frame
	virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;

private:
	UPROPERTY(EditAnywhere)
	ATriggerVolume* buttonTrigger;

	UPROPERTY(EditAnywhere)
	ACharacter* playerCharacter;
};