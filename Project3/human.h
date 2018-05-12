#pragma once
#include "Player.h"
#ifndef human_h
#define human_h


class human : protected Player
{
public:
	human();
	human(string Name, int score, int roundScore, bool isInGame) {
		
	};
	~human();
};



#endif // !1
