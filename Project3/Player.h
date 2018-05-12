#pragma once
#include <iostream>
#include <string>

using namespace std;

class Player
{
public:
protected:
	Player();

	Player(string name, int score, int roundScore, bool isInGame);
	
	~Player();

private:
	string Name;
	int score = 0;
	int roundScore = 0;
	bool inInGame = false;
};

