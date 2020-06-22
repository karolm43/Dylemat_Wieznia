#include "Game.h"

void Game::startBoxes() {
	for (int i = 0; i < MAX_PLAYER/2; i++)
	{
		boxes[i]->start();
	}
	for (int i = 0; i < MAX_PLAYER / 2; i++)
	{
		boxes[i]->result();
	}
}


Game::Game()
{
	slots = 0;
	Box* box1 = new Box();
	Box* box2 = new Box();
	boxes[0] = box1;
	boxes[1] = box2;
}
Game::~Game()
{

}
void Game::addPlayer(Player* player)
{
	if (slots < MAX_PLAYER) {
		players[slots++] = player;
	}
}
void Game::setRounds(int rounds)
{
	this->rounds = rounds;
}
void Game::run()
{
	gameEnded = false;
	actualRound = 0;
}
void Game::startRound()
{
	if (actualRound < rounds) {
		int n = actualRound % 4;

		boxes[0]->setPlayer1(players[n]);
		boxes[0]->setPlayer2(players[(n + 1) % 4]);
		boxes[1]->setPlayer1(players[(n + 2) % 4]);
		boxes[1]->setPlayer2(players[(n + 3) % 4]);

		startBoxes();
		actualRound++;
	}
	else {
		gameEnded = true;
	}
}
int Game::getRoundNumber()
{
	return actualRound;
}

bool Game::isEnded() {
	return gameEnded;
}
