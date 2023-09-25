#include "SkillStatsList.h"

SkillStatsList::SkillStatsList(CoreStatsList coreStatsList)
{
	SkillStat TwoHandedSwords("Big Swords", coreStatsList.Strength, defaultValue);
	SkillStat TwoHandedMaces("Big Maces", coreStatsList.Strength, defaultValue);
	SkillStat TwoHandedAxes("Big Axes", coreStatsList.Strength, defaultValue);
}

