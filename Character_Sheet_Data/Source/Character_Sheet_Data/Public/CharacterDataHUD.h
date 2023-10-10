#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "CharacterDataHUD.generated.h"

UCLASS(ABSTRACT)
class CHARACTER_SHEET_DATA_API UCharacterDataHUD : public UUserWidget
{
	GENERATED_BODY()
	

public:
	UPROPERTY(EditAnywhere, meta = (BindWidget))
		class UCanvasPanel* CharacterSheet;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
		class UTextBlock* CoreStatText;

	void SetCoreStatText(FText _text);
};
