#include "MyCharacter.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    CharacterHUDClass = nullptr;
    CharacterHUD = nullptr;
}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
    AMyCharacter::SetCharacterSheetAttributeData();

    if (IsLocallyControlled() && CharacterHUDClass)
    {
        AMyPlayerController* inputController = GetController<AMyPlayerController>();
        check(inputController);
        CharacterHUD = CreateWidget<UCharacterDataHUD>(inputController, CharacterHUDClass);
        check(CharacterHUD);
        CharacterHUD->AddToPlayerScreen();
        CharacterHUD->SetVisibility(ESlateVisibility::Hidden);

        ChangeText();
    }
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

	PlayerInputComponent->BindAction(TEXT("CharacterSheet"), IE_Pressed, this, &AMyCharacter::ShowCharacterSheet);

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
    if (CharacterHUD)
    {
        CharacterHUD->SetVisibility(ESlateVisibility::Visible);
    }
}

void AMyCharacter::CloseCharacterSheet()
{
    if (CharacterHUD)
    {  
        CharacterHUD->SetVisibility(ESlateVisibility::Hidden);
    }
}

void AMyCharacter::ShowCharacterSheet()
{
    if (CharacterHUD)
    {
        characterSheetOpen = !characterSheetOpen;

        if (characterSheetOpen)
        {
            OpenCharacterSheet();
        }

        else
        {
            CloseCharacterSheet();
        }
    }
}

void AMyCharacter::ChangeText()
{
    FString strngthLvl = FString::Printf(TEXT("%d"), characterSheet.statsList.Strength.GetLevel());
    FText text = FText::FromString(FString(TEXT("Strength = ")) + strngthLvl);
    CharacterHUD->SetCoreStatText(text);
}

