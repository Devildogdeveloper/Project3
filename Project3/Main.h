#pragma once
#include "Player.h"
class Main
{
public:
	
protected:
	//Loops for game
	Player Play();

	//Setup functions
	void PromptNumPlayers();
	void SetupPlayerNames();
	Main();
	~Main();
};

