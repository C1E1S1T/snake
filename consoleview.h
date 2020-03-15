#include <stdio.h>
#include <windows.h>
#include <iostream> 
#include <conio.h>
using namespace std;
#ifndef CONSOLEVIEW_H
#define CONSOLEVIEW_H

enum Key {
	UP = 72,
	DOWN = 80,
	LEFT = 75,
	RIGHT = 77,
	ESCAPE = 27
};

class UserInterface {
	public:
		virtual void setCoordinate(COORD pos, int character) = 0;
		virtual int getKeyPress() = 0;
};

class ConsoleView: public UserInterface {
	private:
		HANDLE console;
	public:
		ConsoleView(string title);
		ConsoleView();
		int getKeyPress();
		void setCoordinate(COORD pos, int character);
};

#endif
