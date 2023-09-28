#include "Race.h"

Race::Race()
{

}

Race::Race(unsigned char _strength, unsigned char _constitution, unsigned char _dexterity, unsigned char _intelligence, unsigned char _wisdom, unsigned char _charisma, unsigned char _luck)
{
    stats.Strength.SetLevel(_strength);
    stats.Constitution.SetLevel(_constitution);
    stats.Dexterity.SetLevel(_dexterity);
    stats.Intelligence.SetLevel(_intelligence);
    stats.Wisdom.SetLevel(_wisdom);
    stats.Charisma.SetLevel(_charisma);
    stats.Luck.SetLevel(_luck);
}
