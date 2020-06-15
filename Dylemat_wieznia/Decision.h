#pragma once
class Decision
{
private:
	bool decision;
public:
	void setDecision(bool decision);
	int operator==(const Decision& d);
};

