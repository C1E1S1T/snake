#include "consoleview.h"


ConsoleView::ConsoleView() {
}

ConsoleView::ConsoleView(string title) {
	this->console = GetStdHandle(STD_OUTPUT_HANDLE);
	system(("title "+title).c_str());
}

int ConsoleView::getKeyPress() {
	return getch();
}

void ConsoleView::setCoordinate(COORD pos, int character) {
	SetConsoleCursorPosition(this->console, pos);
	printf("%c",character);
	CONSOLE_CURSOR_INFO cursorInfo;
    GetConsoleCursorInfo(this->console, &cursorInfo);
    cursorInfo.bVisible = false;
    SetConsoleCursorInfo(this->console, &cursorInfo);
}
