#pragma once
#include "groundVehicle.h"
class bike :
	public groundVehicle
{
protected:
	string type;
public:
	bike(string type, int cntWheels, double maxSpeed, string color, int cntPassengers, string model, bool hasEngine);

	void setType(string type);

	string getType() const { return this->type; }

	void printInfo() const;
	
};

