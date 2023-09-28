// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CharacterSheet.h"
#include "NPCCharacter.generated.h"

USTRUCT(BlueprintType)
struct FCharacterAttributes
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CoreStats")
		int strength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CoreStats")
		int constitution;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CoreStats")
		int dexterity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CoreStats")
		int intelligence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CoreStats")
		int wisdom;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CoreStats")
		int charisma;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CoreStats")
		int luck;
};

UCLASS()
class ANPCCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ANPCCharacter();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CoreStats")
		FCharacterAttributes CharacterAttributes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Racechoice)
	RaceChoice raceChoice;

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

	void SetCharacterSheetAttributeData();
};

/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CoreStats)
	int strength;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CoreStats)
	int constitution;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CoreStats)
	int dexterity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CoreStats)
	int intelligence;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CoreStats)
	int wisdom;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CoreStats)
	int charisma;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CoreStats)
	int luck;*/