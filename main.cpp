#include "console.h"

int main() {
    Console* console = new Console("Snake");
    console->setCursor({0,0}, 201);
    system("pause>nul");
    return 0;
}


