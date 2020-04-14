#include "coordinateview.h"
#ifndef SNAKECONTROLLER_H
#define SNAKECONTROLLER_H

class SnakeController {
	private:
		int direction = RIGHT;
		CoordinateView coordinate;
	public:
		SnakeController();
		SnakeController(CoordinateView coordinate);
		setDirection(int direction);
		bool move();
};

#endif
