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

	PlayerInputComponent->BindAction(TEXT("CharacterSheet"), IE_Pressed, this, &AMyCharacter::OpenCharacterSheet);

}

void AMyCharacter::SetCharacterSheetAttributeData()
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
}

void AMyCharacter::OpenCharacterSheet()
{

}

