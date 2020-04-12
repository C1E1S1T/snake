#include "snakecontroller.h"

SnakeController::SnakeController() {
}

SnakeController::SnakeController(CoordinateView coordinate) {
	this->coordinate = coordinate;
}

SnakeController::setDirection(int key) {
	if (key == UP && this->direction != DOWN) {
		this->direction = key;
	}
	if (key == DOWN && this->direction != UP) {
		this->direction = key;
	}
	if (key == RIGHT && this->direction != LEFT) {
		this->direction = key;
	}
	if (key == LEFT && this->direction!= RIGHT) {
		this->direction = key;
	}
}

SnakeController::move() {
	this->coordinate.hide();
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
	this->coordinate.show();
}
