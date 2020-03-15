#include "consoleview.h"
#include "coordinateview.h"
#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H

class GameController {
	private:
		UserInterface* userInterface = new ConsoleView("Snake");
	public:
		GameController();
		play();
};

#endif