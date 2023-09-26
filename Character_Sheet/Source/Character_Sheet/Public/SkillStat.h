#pragma once

#include "CoreMinimal.h"
#include "Stat.h"
#include "CoreStat.h"

class CHARACTER_SHEET_API SkillStat : public Stat
{
public:
	SkillStat();
	SkillStat(std::string _description, CoreStat _stat, unsigned char _level);

	CoreStat GetSkillStat();
	CoreStat SetSkillStat(CoreStat _stat);

private:
	CoreStat stat;
};
