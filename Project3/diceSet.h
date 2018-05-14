#pragma once
#include "scoreDice.h"
class diceSet
{
public:
protected:
	void DiceRoll();
	void ShowRoll();
	array<int, 6> DiceCounter(vector<int>& dicePool);
	diceSet();
	~diceSet();
};

