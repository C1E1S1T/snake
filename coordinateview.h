#ifndef COORDINATEVIEW_H
#define COORDIANTEVIEW_H
#include <windows.h>
#include "caretaker.h"
#include "consoleview.h"

class CoordinateView {
	private:
		UserInterface* userInterface;
		Caretaker* caretaker;
		COORD coordinate = {0,0};
	public:
		CoordinateView();
		CoordinateView(UserInterface* userInterface);
		toRight();
		toLeft();
		toUp();
		toDown();
		show();
		hide();
};

#endif
