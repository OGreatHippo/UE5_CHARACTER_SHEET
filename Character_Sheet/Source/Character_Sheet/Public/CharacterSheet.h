#pragma once

#include "CoreMinimal.h"
#include "RaceAttributes.h"

class CHARACTER_SHEET_API CharacterSheet
{
public:
	CharacterSheet();
	
	std::string characterName;
	unsigned char level = 1;
	RaceChoice selectedRace;
	RaceAttributes raceAttributes;
	bool isMale;
	CoreStatsList statsList;
	SkillStatsList skillsList;
};
