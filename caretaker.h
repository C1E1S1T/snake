#include <vector>
#include "windows.h"
#include <iostream>
using namespace std;
#ifndef CARETAKER_H
#define CARATAKER_H

class Caretaker {
	private:
	    vector<COORD> coords;
	    int numItems=4;
	public:
		setMemento(COORD memento);
		COORD getMemento();
		add();
};

#endif
