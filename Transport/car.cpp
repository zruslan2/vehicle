#include "car.h"

car::car(string type, int cntWheels, double maxSpeed, string color, int cntPassengers, string model, bool hasEngine):groundVehicle(cntWheels, maxSpeed, color, cntPassengers, model, hasEngine)
{
	this->type = type;
}

void car::setType(string type)
{
	this->type = type;
}

void car::printInfo() const
{
	groundVehicle::printInfo();
	cout << type << endl;
}
