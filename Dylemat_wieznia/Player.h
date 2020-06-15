#pragma once
#include <iostream>
class Player
{
private:
	std::string name;
	int points;
	int lastPoints;

protected:

public:
	int getPoints();
	int getLastPoints();
	std::string getName();
	virtual void play();
};

