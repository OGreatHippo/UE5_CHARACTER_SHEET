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
        Race& attributes = characterSheet.raceAttributes.raceMap[characterSheet.selectedRace];

        // Modify the stats using the attributes
        characterSheet.statsList.Strength.SetStatLevel(attributes.stats.Strength.GetStatLevel());
        characterSheet.statsList.Constitution.SetStatLevel(attributes.stats.Constitution.GetStatLevel());
        characterSheet.statsList.Dexterity.SetStatLevel(attributes.stats.Dexterity.GetStatLevel());
        characterSheet.statsList.Intelligence.SetStatLevel(attributes.stats.Intelligence.GetStatLevel());
        characterSheet.statsList.Wisdom.SetStatLevel(attributes.stats.Wisdom.GetStatLevel());
        characterSheet.statsList.Charisma.SetStatLevel(attributes.stats.Charisma.GetStatLevel());
        characterSheet.statsList.Luck.SetStatLevel(attributes.stats.Luck.GetStatLevel());
    }
    
}

