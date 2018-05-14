#pragma once
#include <vector>
#include <array>
#include <iostream>

using namespace std;

class scoreDice
{
public:
protected:
	int Score();
	bool Straight();
	bool fullHouse();
	bool Pairs();
	bool FourOfAKind();
	bool FiveOfAKind();
	bool SixOfAKind();
	bool Triple();
	bool CheckForWin(int score);
	array<int, 6> DiceCounter(vector<int>& dicePool);
	bool IsAllowed(unsigned int& selection, vector<int>& dicePool);
	scoreDice();
	~scoreDice();
};

