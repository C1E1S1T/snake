#include "coordinateview.h"

CoordinateView::CoordinateView() {
}

CoordinateView::CoordinateView(UserInterface* userInterface) {
	this->userInterface = userInterface;
	this->caretaker = new Caretaker();
	this->caretaker->setMemento({this->coordinate.X, this->coordinate.Y});
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
	this->userInterface->setCoordinate(this->coordinate, 42);
	this->caretaker->setMemento({this->coordinate.X, this->coordinate.Y});
}

CoordinateView::hide() {
	COORD memento = this->caretaker->getMemento();
	this->userInterface->setCoordinate(memento, 32);
}

