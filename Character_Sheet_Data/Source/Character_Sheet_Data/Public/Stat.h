#pragma once

#include "CoreMinimal.h"

class CHARACTER_SHEET_DATA_API Stat
{
protected:
	std::string description;
	unsigned char level = 5;
	unsigned int currentXP = 0;
	unsigned int maxXP = 0;

public:
	unsigned char GetLevel();
	void SetLevel(unsigned char _value);
	void IncreaseLevel(unsigned char _value);
};
