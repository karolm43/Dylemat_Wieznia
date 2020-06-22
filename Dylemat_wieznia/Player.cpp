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
std::string Player::getImagePath()
{
	return imagePath;
}



void Player::setPoints(int points)
{
	this->points = points;
}
void Player::setLastPoints(int points) 
{
	this->lastPoints = points;
	this->points += points;
}
void Player::setName(std::string name)
{
	this->name = name;
}
void Player::setDecision(Decision decision)
{
	this->decision = decision;
}
void Player::setImagePath(std::string path)
{
	this->imagePath = path;
}

void Player::play()
{
}
