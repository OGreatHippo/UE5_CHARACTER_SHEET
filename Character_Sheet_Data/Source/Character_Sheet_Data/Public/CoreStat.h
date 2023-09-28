#pragma once

#include "CoreMinimal.h"
#include "Stat.h"

class CHARACTER_SHEET_DATA_API CoreStat : public Stat
{
public:
	CoreStat();
	CoreStat(std::string _description);

	void AddXP(unsigned int _xp);

	unsigned char GetSkillsCount();
	void IncreaseSkillsCount();

private:
	unsigned char skills = 0;
};
