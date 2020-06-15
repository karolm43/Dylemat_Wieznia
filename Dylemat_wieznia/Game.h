#pragma once
#include "Player.h"
#include "Box.h"
class Game
{
private:
	const int MAX_PLAYER = 4;
	Player* players[4];
	int slots;
	int rounds;
	int actualRound;
	bool gameEnded;
	Box* boxes[2];

	void startBoxes();
	
protected:

public:
	Game();
	~Game();
	void addPlayer(Player* player);
	void setRounds(int rounds);
	void run();
	void startRound();
	int getRoundNumber();
	bool isEnded();
};

