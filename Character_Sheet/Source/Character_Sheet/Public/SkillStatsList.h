#pragma once

#include "CoreMinimal.h"
#include "SkillStat.h"
#include "CoreStatsList.h"

class CHARACTER_SHEET_API SkillStatsList
{
public:
    SkillStatsList();
	SkillStatsList(CoreStatsList coreStatsList);

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

private:
    unsigned char defaultValue = 5;
};
