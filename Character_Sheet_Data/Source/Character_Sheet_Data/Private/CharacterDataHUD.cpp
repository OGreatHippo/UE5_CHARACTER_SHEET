#include "CharacterDataHUD.h"

void UCharacterDataHUD::SetCoreStatText(FText _text)
{
	if (CoreStatText)
	{
		CoreStatText->SetText(_text);
	}
}
