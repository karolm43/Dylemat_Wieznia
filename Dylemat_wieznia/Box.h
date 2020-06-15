#pragma once
#include "Player.h"
class Box
{
private:
	Player* player1;
	Player* player2;
public:
	void start();
	void setPlayer1(Player* player);
	void setPlayer2(Player* player);
	void result();
	Box();
};

