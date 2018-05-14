#include "Main.h"
#include "Menu.h"
#include <iostream>


using namespace std;



Main::Main()
{
}


Main::~Main()
{
}


int main() {
	
	int meld = 1000;

	if (meld > meld) {
		bool IsInGame = true;

	}
	else {
		return false;
	}

	bool quit = false;
	unsigned int selection;

	while (!quit) {
		Menu::ShowMenu();
		selection = GetInput();

		switch (selection) {
		case 1:
			Champion = Play();
			CongPlayer(Champion);
			break;
		case 2:
			quit = true;
			break;
		}

	}
	
	system("pause");
	return 0;

}
