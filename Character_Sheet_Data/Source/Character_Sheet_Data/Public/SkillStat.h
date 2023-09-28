#pragma once

#include "CoreMinimal.h"
#include "Stat.h"
#include "CoreStat.h"

class CHARACTER_SHEET_DATA_API SkillStat : public Stat
{
public:
	SkillStat();
	SkillStat(std::string _description, CoreStat _stat);

	CoreStat GetSkillStat();
	void SetSkillStat(CoreStat _stat);

private:
	CoreStat stat;
};
