#include "Race.h"

Race::Race()
{

}

Race::Race(unsigned char _strength, unsigned char _constitution, unsigned char _dexterity, unsigned char _intelligence, unsigned char _wisdom, unsigned char _charisma, unsigned char _luck)
{
    stats.Strength.level = _strength;
    stats.Constitution.level = _constitution;
    stats.Dexterity.level = _dexterity;
    stats.Intelligence.level = _intelligence;
    stats.Wisdom.level = _wisdom;
    stats.Charisma.level = _charisma;
    stats.Luck.level = _luck;
}
