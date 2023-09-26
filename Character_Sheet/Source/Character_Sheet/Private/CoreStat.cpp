#include "CoreStat.h"

CoreStat::CoreStat()
{
}

CoreStat::CoreStat(std::string _description, unsigned char _level)
{
	description = _description;
	level = _level;
}

void CoreStat::IncreaseSkillsCount()
{
	skills++;
}

unsigned char CoreStat::GetSkillsCount()
{
	return skills;
}

unsigned char CoreStat::GetStatLevel()
{
	return level;
}

void CoreStat::SetStatLevel(unsigned char _value)
{
	level = _value;
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
