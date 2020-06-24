#include "Game.h"

void Game::startBoxes() {
	for (int i = 0; i < MAX_PLAYER/2; i++)
	{
		boxes[i]->start();
	}
}

int Game::formatNumber(int n, int operation) {
	if ((n + operation)% MAX_PLAYER == 0 && operation < 0) {
		return (MAX_PLAYER-1);
	}
	else if ((n + operation) % MAX_PLAYER == 0) {
		return 1;
	}
	else {
		return ((n + operation) % MAX_PLAYER);
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
	roundEnded = true;
	actualRound = 1;
}
void Game::startRound()
{
	if (roundEnded && (actualRound <= rounds)) {
		int n = actualRound % (MAX_PLAYER - 1) + 1;

		boxes[0]->setPlayer1(players[0]);

		boxes[0]->setPlayer2(players[n]);

		boxes[1]->setPlayer1(players[formatNumber(n, -1)]);

		boxes[1]->setPlayer2(players[formatNumber(n, 1)]);

		roundEnded = false;
		startBoxes();
	}
}

void Game::endRound()
{
	if (!roundEnded) {
		for (int i = 0; i < MAX_PLAYER / 2; i++)
		{
			boxes[i]->result();
		}

		startBoxes();
		actualRound++;
	}
	if (actualRound > rounds) {
		gameEnded = true;
	}
	roundEnded = true;
}



Player* Game::getEnemy(Player* player)
{
	for each (Box* box in boxes)
	{
		if (box->isInBox(player)) {
			return box->getEnemy(player);
		}
	}
	return player;
}

int Game::getRoundNumber()
{
	return actualRound;
}

bool Game::isEnded() {
	return gameEnded;
}

Game::~Game()
{

}
