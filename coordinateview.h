#ifndef COORDINATEVIEW_H
#define COORDIANTEVIEW_H
#include <windows.h>
#include <map>
#include <bits/stdc++.h> 
using namespace std; 
#include "caretaker.h"
#include "consoleview.h"

class CoordinateView {
	private:
		UserInterface* userInterface;
		Caretaker* caretaker;
		COORD coordinate = {2,2};
		map<int, int> pieces;
		int score = 0;
	public:
		CoordinateView();
		CoordinateView(
		    UserInterface* userInterface,
		    map<int, int>& pieces
		);
		COORD getHead();
		toRight();
		toLeft();
		toUp();
		toDown();
		show();
		hide();
};

#endif
