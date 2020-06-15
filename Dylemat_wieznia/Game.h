#pragma once
#include "Player.h"
class Game
{
private:
	
protected:

public:
	Game();
	~Game();
	void addPlayer(Player player);
	void setRounds(int rounds);
	void run();
	void startRound();
	int getRoundNumber();
};

