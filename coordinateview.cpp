#include "coordinateview.h"

CoordinateView::CoordinateView() {
}

CoordinateView::CoordinateView(
    UserInterface* userInterface,
    map<int, int>& pieces
) {
	this->userInterface = userInterface;
	this->caretaker = new Caretaker();
	this->caretaker->setMemento({this->coordinate.X, this->coordinate.Y});
	this->pieces = pieces;
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
	this->userInterface->setCoordinate(this->coordinate, 178);
	this->caretaker->setMemento({this->coordinate.X, this->coordinate.Y});
	if (this->pieces.count(this->coordinate.X) > 0 && this->pieces.at(this->coordinate.X) == this->coordinate.Y) {
		this->caretaker->add();
		this->userInterface->setCoordinate({118, 2}, 0);
		cout<<++this->score;
	}
}

COORD CoordinateView::getHead() {
	return this->coordinate;
}

CoordinateView::hide() {
	COORD memento = this->caretaker->getMemento();
	this->userInterface->setCoordinate(memento, 32);
}

