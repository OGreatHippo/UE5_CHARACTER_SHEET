#pragma once

#include "CoreMinimal.h"
#include "CoreStat.h"

class CHARACTER_SHEET_DATA_API CoreStatsList
{
public:
    CoreStatsList();

    CoreStat Strength;
    CoreStat Constitution;
    CoreStat Dexterity;
    CoreStat Intelligence;
    CoreStat Wisdom;
    CoreStat Charisma;
    CoreStat Luck;
};
