#pragma once

#include "CoreMinimal.h"
#include "Stat.h"

class CHARACTER_SHEET_API CoreStat : public Stat
{
public:
	CoreStat();
	CoreStat(std::string _description, unsigned char _level);

	void AddXP(unsigned int _xp);

	unsigned char GetSkillsCount();
	void IncreaseSkillsCount();

	unsigned char GetStatLevel();
	void SetStatLevel(unsigned char _value);

private:
	unsigned char skills = 0;
};
