#pragma once

#include "CoreMinimal.h"
#include "RaceAttributes.h"

class CHARACTER_SHEET_API CharacterSheet
{
public:
	CharacterSheet();
	
	std::string characterName = "default";
	unsigned char level = 1;
	RaceChoice selectedRace = RaceChoice::Human;
	RaceAttributes raceAttributes;
	bool isMale = true;
	CoreStatsList statsList;
	SkillStatsList skillsList;
};
