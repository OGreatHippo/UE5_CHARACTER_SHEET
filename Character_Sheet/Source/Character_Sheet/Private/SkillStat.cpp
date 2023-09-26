#include "SkillStat.h"

SkillStat::SkillStat()
{
}

SkillStat::SkillStat(std::string _description, CoreStat _stat, unsigned char _level)
{
    description = _description;
    stat = _stat;
    level = _level;
    maxXP = 5;

    _stat.IncreaseSkillsCount();
}

CoreStat SkillStat::GetSkillStat()
{
    return stat;
}

CoreStat SkillStat::SetSkillStat(CoreStat _stat)
{
    stat = _stat;
}
