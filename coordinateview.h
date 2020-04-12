#ifndef COORDINATEVIEW_H
#define COORDIANTEVIEW_H
#include <windows.h>
#include "consoleview.h"

class CoordinateView {
	private:
		UserInterface* userInterface;
		int sizeBody = 1;
		COORD coordinate = {0,0};
		COORD before = {0,0};
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
