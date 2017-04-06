// Fill out your copyright notice in the Description page of Project Settings.

#include "pushButton.h"
#include "ButtonBlast.h"


// Sets default values for this component's properties
UButtonBlast::UButtonBlast()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UButtonBlast::BeginPlay()
{
	Super::BeginPlay();
	
	playerCharacter = GetWorld()->GetFirstPlayerController()->GetCharacter();
}

void UButtonBlast::RegisterButtonHit()
{
	//Find owning actor
	AActor* owner = GetOwner();
	//create output to log
	//destroy
	owner->Destroy();
}


// Called every frame
void UButtonBlast::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	if (buttonTrigger->IsOverlappingActor(playerCharacter))
	{
		RegisterButtonHit();
	}
}