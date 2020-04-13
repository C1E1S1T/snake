#include "caretaker.h"

Caretaker::setMemento(COORD pos) {
	this->coords.push_back(pos);
}

COORD Caretaker::getMemento() {
	int size = this->coords.size();
	int index = (size <= this->numItems) ? size-1 : size-this->numItems-1;
	return this->coords.at(index);
}
