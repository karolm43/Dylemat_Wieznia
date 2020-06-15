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
void Box::result()
{
	player1->setLastPoints(player1 == player2);
	player2->setLastPoints(player2 == player1);
}

Box::Box()
{

}