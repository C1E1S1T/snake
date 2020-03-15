#include "gamecontroller.h"

GameController::GameController() {
}

GameController::play() {
	CoordinateView coordinateView(this->userInterface);
	int key = 0;
	do {
	  key = this->userInterface->getKeyPress();
	  coordinateView.hide();
	  switch(key) {
	  	case UP:
		  	coordinateView.toUp();
		  	break;
	    case DOWN:
	    	coordinateView.toDown();
	    	break;
	    case RIGHT:
	    	coordinateView.toRight();
	    	break;
	    case LEFT:
	    	coordinateView.toLeft();
	    	break;
	  }
	  coordinateView.show();
	} while(key != ESCAPE);
}
