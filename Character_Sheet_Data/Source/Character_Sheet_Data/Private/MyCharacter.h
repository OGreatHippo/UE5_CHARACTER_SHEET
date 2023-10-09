#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyPlayerController.h"
#include "CharacterDataHUD.h"
#include "CharacterSheet.h"
#include "MyCharacter.generated.h"

UCLASS()
class AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();

	//HUD
	UPROPERTY(EditAnywhere)
		TSubclassOf<class UCharacterDataHUD> CharacterHUDClass;

	UPROPERTY()
		class UCharacterDataHUD* CharacterHUD;

	int test = 0;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	CharacterSheet characterSheet;

	bool characterSheetOpen = false;

	void SetCharacterSheetAttributeData();
	void OpenCharacterSheet();
	void CloseCharacterSheet();
	void ShowCharacterSheet();
};
