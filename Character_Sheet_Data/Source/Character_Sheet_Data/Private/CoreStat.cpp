#include "CoreStat.h"

CoreStat::CoreStat()
{
}

CoreStat::CoreStat(std::string _description)
{
	description = _description;
}

void CoreStat::IncreaseSkillsCount()
{
	skills++;
}

unsigned char CoreStat::GetSkillsCount()
{
	return skills;
}

void CoreStat::AddXP(unsigned int _xp)
{
	currentXP += _xp;

	if (currentXP >= skills)
	{
		currentXP = 0;
		level++;
	}
}
