#pragma once

#include "CoreMinimal.h"
#include "CoreStatsList.h"

class CHARACTER_SHEET_API Race
{
public:
	CoreStatsList stats;

	Race();
	Race(unsigned char _strength, unsigned char _constitution, unsigned char _dexterity, unsigned char _intelligence, unsigned char _wisdom, unsigned char _charisma, unsigned char _luck);
};
