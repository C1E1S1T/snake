#include "console.h"

Console::Console(string title) {
	this->hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	system(("title "+title).c_str());
}

Console::setCursor(COORD pos, int character) {
	SetConsoleCursorPosition(this->hConsole, pos);
	printf("%c",character);
}
