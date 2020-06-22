#include "Box.h"

void Box::start()
{
	player1->play();
	player2->play();
}
void Box::setPlayer1(Player* player)
{
	player1 = player;
}
void Box::setPlayer2(Player* player)
{
	player2 = player;
}
Player* Box::getPlayer1()
{
	return player1;
}
Player* Box::getPlayer2()
{
	return player2;
}

bool Box::isInBox(Player* player)
{
	if (player == player1) {
		return true;
	}
	else if (player == player2) {
		return true;
	}
	else {
		return false;
	}
}

Player* Box::getEnemy(Player* player)
{
	if (player == player1) {
		return player2;
	}
	else {
		return player1;
	}
}

void Box::result()
{
	player1->setLastPoints(player1->getDecision() == player2->getDecision());
	player2->setLastPoints(player2->getDecision() == player1->getDecision());
}

Box::Box()
{

}