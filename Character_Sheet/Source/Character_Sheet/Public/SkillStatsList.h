#pragma once

#include "CoreMinimal.h"
#include "SkillStat.h"
#include "CoreStatsList.h"

class CHARACTER_SHEET_API SkillStatsList
{
public:
	SkillStatsList(CoreStatsList coreStatsList);

    unsigned char defaultValue = 5;

    //Strength
    SkillStat TwoHandedSwords;
    SkillStat TwoHandedMaces;
    SkillStat TwoHandedAxes;

    //Constitution

    //Dexterity

    //Intelligence

    //Wisdom

    //Charisma

    //Luck
};
