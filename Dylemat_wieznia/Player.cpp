#include "Player.h"

int Player::getPoints()
{
	return points;
}
int Player::getLastPoints()
{
	return lastPoints;
}
std::string Player::getName()
{
	return name;
}

Decision Player::getDecision()
{
	return decision;
}


void Player::setPoints(int points)
{
	this->points = points;
}
void Player::setLastPoints(int points) 
{
	this->points = points;
}
void Player::setName(std::string name)
{
	this->name = name;
}
void Player::setDecision(Decision decision)
{
	this->decision = decision;
}

