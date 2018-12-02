#pragma once
#include "boat.h"
class yacht :
	public boat
{
protected:
	int cntDecks;
public:
	yacht(int cntDecks, double displacement, double maxSpeed, string color, int cntPassengers, string model, bool hasEngine);
	
	void setCntDecks(int cntDecks);

	int getCntDecks() const { return this->cntDecks; }

	void printInfo() const;
};

