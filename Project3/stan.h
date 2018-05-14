#pragma once

#include "Player.h"
class stan : protected Player
{
public:
	stan();
	stan(string Name, int score, int roundScore, bool isInGame) {
		string Name = "stan";
		int score = 0;
		int roundScore = 0;
		bool isInGame = false;

	};
	
	~stan();
};

