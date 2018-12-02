#include "bike.h"

bike::bike(string type, int cntWheels, double maxSpeed, string color, int cntPassengers, string model, bool hasEngine) :groundVehicle(cntWheels, maxSpeed, color, cntPassengers, model, hasEngine)
{
	this->type = type;
}

void bike::setType(string type)
{
	this->type = type;
}

void bike::printInfo() const
{
	groundVehicle::printInfo();
	cout << type << endl;
}
