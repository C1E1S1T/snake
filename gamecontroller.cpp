#include "gamecontroller.h"

GameController::GameController() {
}

GameController::play() {	
	SnakeController snake(CoordinateView(this->userInterface));
	int key = 0;
	do {
	  if (kbhit()) {
	  	key = this->userInterface->getKeyPress();
	  	snake.setDirection(key);
	  }
	  Sleep(70);
	  snake.move();
	} while(key != ESCAPE);
}
