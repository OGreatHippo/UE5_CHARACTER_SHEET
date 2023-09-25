// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMyCharacter::SetCoreStatData()
{
    if (characterSheet.raceAttributes.raceMap.Contains(characterSheet.selectedRace))
    {   
        const Race& attributes = characterSheet.raceAttributes.raceMap[characterSheet.selectedRace];

        // Modify the stats using the attributes
        characterSheet.statsList.Strength.level += attributes.stats.Strength.level;
        characterSheet.statsList.Constitution.level += attributes.stats.Constitution.level;
        characterSheet.statsList.Dexterity.level += attributes.stats.Dexterity.level;
        characterSheet.statsList.Intelligence.level += attributes.stats.Intelligence.level;
        characterSheet.statsList.Wisdom.level += attributes.stats.Wisdom.level;
        characterSheet.statsList.Charisma.level += attributes.stats.Charisma.level;
        characterSheet.statsList.Luck.level += attributes.stats.Luck.level;
    }
    
}

