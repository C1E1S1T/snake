#include "coordinateview.h"

CoordinateView::CoordinateView(UserInterface* userInterface) {
	this->userInterface = userInterface;
}

CoordinateView::toUp() {
	this->coordinate.Y--;
}

CoordinateView::toDown() {
	this->coordinate.Y++;
}

CoordinateView::toRight() {
	this->coordinate.X++;
}

CoordinateView::toLeft() {
	this->coordinate.X--;
}

CoordinateView::show() {
	this->userInterface->setCoordinate(this->coordinate,223);
}

CoordinateView::hide() {
	this->userInterface->setCoordinate(this->coordinate, 0);
}
