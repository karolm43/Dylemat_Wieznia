#include "BasicBot.h"


void BasicBot::play()
{
	Decision decision;
	decision.setDecision(true);
	setDecision(decision);
}

BasicBot::BasicBot()
{
	setPoints(0);
	setImagePath("LADY");
}