#pragma once

#include "CoreMinimal.h"

class CHARACTER_SHEET_API Stat
{
protected:
	std::string description;
	unsigned char level;
	unsigned int currentXP;
	unsigned int maxXP;
};
