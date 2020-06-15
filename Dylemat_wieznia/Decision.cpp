#include "Decision.h"

void Decision::setDecision(bool decision)
{
	this->decision = decision;
}
int Decision::operator==(const Decision& d) {
	if (d.decision == this->decision && this->decision) {
		return 2;
	}
	else if (d.decision == this->decision) {
		return 6;
	}
	else if (d.decision) {
		return 0;
	} else {
		return 2;
	}
}