#ifndef COORDINATEVIEW_H
#define COORDIANTEVIEW_H
#include <windows.h>
#include "consoleview.h"

class CoordinateView {
	private:
		UserInterface* userInterface;
		COORD coordinate = {0,0};
	public:
		CoordinateView(UserInterface* userInterface);
		toRight();
		toLeft();
		toUp();
		toDown();
		show();
		hide();
};

#endif
