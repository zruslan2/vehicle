#pragma once
#include "groundVehicle.h"
class car :
	public groundVehicle
{
protected:
	string type;
public:
	car(string type, int cntWheels, double maxSpeed, string color, int cntPassengers, string model, bool hasEngine);

	void setType(string type);

	string getType() const { return this->type; }

	void printInfo() const;
};

