#include "SkillStat.h"

SkillStat::SkillStat()
{
}

SkillStat::SkillStat(std::string _description, CoreStat _stat)
{
    description = _description;
    stat = _stat;
    maxXP = 5;

    _stat.IncreaseSkillsCount();
}

CoreStat SkillStat::GetSkillStat()
{
    return stat;
}

void SkillStat::SetSkillStat(CoreStat _stat)
{
    stat = _stat;
}
