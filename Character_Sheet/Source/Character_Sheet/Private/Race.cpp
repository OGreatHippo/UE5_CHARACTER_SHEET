#include "Race.h"

Race::Race()
{

}

Race::Race(unsigned char _strength, unsigned char _constitution, unsigned char _dexterity, unsigned char _intelligence, unsigned char _wisdom, unsigned char _charisma, unsigned char _luck)
{
    stats.Strength.SetStatLevel(_strength);
    stats.Constitution.SetStatLevel(_constitution);
    stats.Dexterity.SetStatLevel(_dexterity);
    stats.Intelligence.SetStatLevel(_intelligence);
    stats.Wisdom.SetStatLevel(_wisdom);
    stats.Charisma.SetStatLevel(_charisma);
    stats.Luck.SetStatLevel(_luck);
}
