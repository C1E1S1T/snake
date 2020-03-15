#ifndef CONSOLE_H
#define CONSOLE_H
#include <windows.h>
#include <stdio.h>
#include <conio.h>

class Console {
	private:
		HANDLE hConsole;
	public:
		Console(string title);
		setCursor(COORD pos, int character);
};

#endif
