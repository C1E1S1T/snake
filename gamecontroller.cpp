#include "gamecontroller.h"

GameController::GameController() {
	 system("color 6");
     printf("Snake V1.0\n");
     printf("By CEST \n");
     printf("Rules: Lead the Caterpillar to its food and gain Points...\n");
     printf("Avoid hitting the Walls and don't eat yourself up!!\n");
     printf("Controls: Use Arrow Keys To Navigate \n"); 
     printf("Press any key to Start Game...");
     getch();
     system("cls");
	this->userInterface->setCoordinate({1,1}, 201);
	for (int i=2; i<110; i++) {
		this->userInterface->setCoordinate({i,1}, 205);
	}
	this->userInterface->setCoordinate({110,1}, 187);
	for (int i=2; i<28; i++) {
		this->userInterface->setCoordinate({110,i}, 186);
	}
	this->userInterface->setCoordinate({110,28}, 188);
	for (int i=2; i<110; i++) {
		this->userInterface->setCoordinate({i,28}, 205);
	}
	this->userInterface->setCoordinate({1,28}, 200);
	for (int i=2; i<28; i++) {
		this->userInterface->setCoordinate({1,i}, 186);
	}
	this->userInterface->setCoordinate({111,2}, 0);
	cout<<"Score:0";
	this->draw();
}

GameController::draw() {
	int x = 0;
	int y = 0;
	for (int i=0; i<10; i++) {
		y = rand() % 28;
	    x = rand() % 110;
		this->userInterface->setCoordinate({x, y}, 197);
		this->pieces.insert({x, y});
	}
}

GameController::play() {
    CoordinateView coordinate(this->userInterface, this->pieces);
	SnakeController snake(coordinate);
	bool snakeCanMove = true;
	int key = 0;
	do {
	  if (kbhit()) {
	  	key = this->userInterface->getKeyPress();
	  	snake.setDirection(key);
	  }
	  Sleep(50);
	  snakeCanMove = snake.move();
	} while(key != ESCAPE && snakeCanMove);
	system("cls");
	printf("GAME OVER!!");
}
