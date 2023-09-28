// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCCharacter.h"

// Sets default values
ANPCCharacter::ANPCCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANPCCharacter::BeginPlay()
{
	Super::BeginPlay();

    characterSheet.selectedRace = raceChoice;

	ANPCCharacter::SetCharacterSheetAttributeData();
}

// Called every frame
void ANPCCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ANPCCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ANPCCharacter::SetCharacterSheetAttributeData()
{
    if (characterSheet.raceAttributes.raceMap.Contains(characterSheet.selectedRace))
    {
        Race attributes = characterSheet.raceAttributes.raceMap[characterSheet.selectedRace];

        characterSheet.statsList.Strength.IncreaseLevel(attributes.stats.Strength.GetLevel());
        characterSheet.statsList.Constitution.IncreaseLevel(attributes.stats.Constitution.GetLevel());
        characterSheet.statsList.Dexterity.IncreaseLevel(attributes.stats.Dexterity.GetLevel());
        characterSheet.statsList.Intelligence.IncreaseLevel(attributes.stats.Intelligence.GetLevel());
        characterSheet.statsList.Wisdom.IncreaseLevel(attributes.stats.Wisdom.GetLevel());
        characterSheet.statsList.Charisma.IncreaseLevel(attributes.stats.Charisma.GetLevel());
        characterSheet.statsList.Luck.IncreaseLevel(attributes.stats.Luck.GetLevel());
    }

    CharacterAttributes.strength = characterSheet.statsList.Strength.GetLevel();
    CharacterAttributes.constitution = characterSheet.statsList.Constitution.GetLevel();
    CharacterAttributes.dexterity = characterSheet.statsList.Dexterity.GetLevel();
    CharacterAttributes.intelligence = characterSheet.statsList.Intelligence.GetLevel();
    CharacterAttributes.wisdom = characterSheet.statsList.Wisdom.GetLevel();
    CharacterAttributes.charisma = characterSheet.statsList.Charisma.GetLevel();
    CharacterAttributes.luck = characterSheet.statsList.Luck.GetLevel();
}

