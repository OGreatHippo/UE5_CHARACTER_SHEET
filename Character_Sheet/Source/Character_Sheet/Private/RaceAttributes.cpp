#include "RaceAttributes.h"

RaceAttributes::RaceAttributes()
	:
	Human(5, 5, 5, 5, 5, 5, 5),
	Elf(0, 0, 10, 10, 10, 5, 0),
	Dwarf(10, 10, 0, 5, 0, 0, 10),
	Orc(10, 10, 5, 0, 5, 5, 0)
{
	raceMap =
	{
		{RaceChoice::Human, Human},
		{RaceChoice::Elf, Elf},
		{RaceChoice::Dwarf, Dwarf},
		{RaceChoice::Orc, Orc}
	};
}

