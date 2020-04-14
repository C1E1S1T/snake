#include "snakecontroller.h"

SnakeController::SnakeController() {
}

SnakeController::SnakeController(CoordinateView coordinate) {
	this->coordinate = coordinate;
}

SnakeController::setDirection(int key) {
	if (
	     key == UP && this->direction != DOWN ||
	     key == DOWN && this->direction != UP ||
	     key == RIGHT && this->direction != LEFT ||
	     key == LEFT && this->direction!= RIGHT
	   ) {
		this->direction = key;
	}
}

bool SnakeController::move() {
	if (
	    this->coordinate.getHead().Y < 2 ||
		this->coordinate.getHead().Y >= 28 ||
		this->coordinate.getHead().X < 2 ||
		this->coordinate.getHead().X >= 110
		) {
		return false;
	}
	this->coordinate.show();
	switch(this->direction) {
		case UP:
			this->coordinate.toUp();
			break;
		case DOWN:
		    this->coordinate.toDown();
		    break;
		case RIGHT:
		    this->coordinate.toRight();
		    break;
		case LEFT:
		    this->coordinate.toLeft();
		    break;
	}
	this->coordinate.hide();
	return true;
}
