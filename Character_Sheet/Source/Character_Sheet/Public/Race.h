#pragma once

#include "CoreMinimal.h"
#include "CoreStatsList.h"
#include "SkillStatsList.h"

class CHARACTER_SHEET_API Race
{
public:
	Race();
	Race(unsigned char _strength, unsigned char _constitution, unsigned char _dexterity, unsigned char _intelligence, unsigned char _wisdom, unsigned char _charisma, unsigned char _luck);

	CoreStatsList stats;
};
