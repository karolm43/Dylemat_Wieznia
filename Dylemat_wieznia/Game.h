#pragma once
#include "Player.h"
#include "Box.h"
class Game
{
private:
	const int MAX_PLAYER = 4;
	Player* players[4];
	Box* boxes[2];
	int slots;
	int rounds;
	int actualRound;
	bool gameEnded;
	bool roundEnded;
	int formatNumber(int n, int operation);
	

	void startBoxes();
	
protected:

public:
	Game();
	
	void addPlayer(Player* player);
	void addPlayers(Player* players[]);
	void setRounds(int rounds);
	void run();
	void startRound();
	void endRound();
	int getRoundNumber();
	Player* getEnemy(Player* player);
	bool isEnded();
	~Game();
};

