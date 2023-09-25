#pragma once

#include "CoreMinimal.h"
#include "CoreStat.h"

class CHARACTER_SHEET_API CoreStatsList
{
public:
    CoreStatsList();

    unsigned char defaultValue = 5;

    CoreStat Strength;
    CoreStat Constitution;
    CoreStat Dexterity;
    CoreStat Intelligence;
    CoreStat Wisdom;
    CoreStat Charisma;
    CoreStat Luck;
};
