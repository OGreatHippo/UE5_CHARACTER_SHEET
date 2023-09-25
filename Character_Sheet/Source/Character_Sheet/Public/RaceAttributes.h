#pragma once

#include "CoreMinimal.h"
#include "Race.h"

class CHARACTER_SHEET_API RaceAttributes
{
public:
	Race Human;
	Race Elf;
	Race Dwarf;
	Race Orc;

	TMap<RaceChoice, Race> raceMap;

	RaceAttributes();
};

enum class RaceChoice
{
	Human,
	Elf,
	Dwarf,
	Orc
};
