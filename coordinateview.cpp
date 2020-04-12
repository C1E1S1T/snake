#include "coordinateview.h"

CoordinateView::CoordinateView() {
}

CoordinateView::CoordinateView(UserInterface* userInterface) {
	this->userInterface = userInterface;
}

CoordinateView::toUp() {
	this->before.Y = this->coordinate.Y+sizeBody;
	this->before.X = this->coordinate.X;
	this->coordinate.Y--;
}

CoordinateView::toDown() {
	this->before.Y = this->coordinate.Y-sizeBody;
	this->before.X = this->coordinate.X;
	this->coordinate.Y++;
}

CoordinateView::toRight() {
	this->before.X = this->coordinate.X-sizeBody;
	this->before.Y = this->coordinate.Y;
	this->coordinate.X++;
}

CoordinateView::toLeft() {
	this->before.X = this->coordinate.X+sizeBody;
	this->before.Y = this->coordinate.Y;
	this->coordinate.X--;
}

CoordinateView::show() {
	this->userInterface->setCoordinate(this->coordinate, 42);
}

CoordinateView::hide() {
	this->userInterface->setCoordinate(this->before, 32);
}
