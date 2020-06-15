#pragma once
#include <iostream>
#include "Decision.h"
class Player
{
private:
	std::string name;
	int points;
	int lastPoints;
	Decision decision;
protected:

public:
	int getPoints();
	int getLastPoints();
	std::string getName();
	Decision getDecision();

	void setPoints(int points);
	void setLastPoints(int points);
	void setName(std::string name);
	void setDecision(Decision decision);
	virtual void play() = 0;
};

