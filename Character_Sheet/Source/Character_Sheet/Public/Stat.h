#pragma once

#include "CoreMinimal.h"

class CHARACTER_SHEET_API Stat
{
public:
	std::string description;
	unsigned char level;
	unsigned int currentXP;
	unsigned int maxXP;
};
