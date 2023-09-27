#include "Stat.h"

unsigned char Stat::GetLevel()
{
    return level;
}

void Stat::SetLevel(unsigned char _value)
{
    level = _value;
}

void Stat::IncreaseLevel(unsigned char _value)
{
    level += _value;
}
