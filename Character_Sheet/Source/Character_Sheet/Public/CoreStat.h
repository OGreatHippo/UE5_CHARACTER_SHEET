#pragma once

#include "CoreMinimal.h"
#include "Stat.h"

class CHARACTER_SHEET_API CoreStat : public Stat
{
public:
	unsigned int skills;

	CoreStat();
	CoreStat(std::string _description, unsigned char _level);

	void AddXP(unsigned int _xp);
};
