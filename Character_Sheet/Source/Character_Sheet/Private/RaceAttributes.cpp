#include "RaceAttributes.h"

RaceAttributes::RaceAttributes()
{
	Race Human(5, 5, 5, 5, 5, 5, 5);
	Race Elf(0, 0, 10, 10, 10, 5, 0);
	Race Dwarf(10, 10, 0, 5, 0, 0, 10);
	Race Orc(10, 10, 5, 0, 5, 5, 0);

	raceMap =
	{
		{RaceChoice::Human, Human},
		{RaceChoice::Elf, Elf},
		{RaceChoice::Dwarf, Dwarf},
		{RaceChoice::Orc, Orc}
	};
}

