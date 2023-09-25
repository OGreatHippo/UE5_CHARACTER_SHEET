#include "CoreStatsList.h"

CoreStatsList::CoreStatsList()
{
	CoreStat Strength("How strong you are.", defaultValue);
    CoreStat Constitution("How healthy you are.", defaultValue);
    CoreStat Dexterity("How agile you are.", defaultValue);
    CoreStat Intelligence("How intelligent you are.", defaultValue);
    CoreStat Wisdom("How wise you are.", defaultValue);
    CoreStat Charisma("How charismatic you are.", defaultValue);
    CoreStat Luck("How lucky you are.", defaultValue);
}
