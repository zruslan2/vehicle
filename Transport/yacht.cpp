#include "yacht.h"

yacht::yacht(int cntDecks, double displacement, double maxSpeed, string color, int cntPassengers, string model, bool hasEngine):boat(displacement, maxSpeed, color, cntPassengers, model, hasEngine)
{
	this->cntDecks = cntDecks;
}

void yacht::setCntDecks(int cntDecks)
{
	this->cntDecks = cntDecks;
}

void yacht::printInfo() const
{
	boat::printInfo();
	cout << cntDecks << endl;
}
