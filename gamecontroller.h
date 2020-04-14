#include "consoleview.h"
#include "snakecontroller.h"
#include <stdlib.h>
#include <map>
#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H

class GameController {
	private:
		UserInterface* userInterface = new ConsoleView("Snake");
		map<int,int> pieces; 
	public:
		GameController();
		play();
		draw();
};

#endif
