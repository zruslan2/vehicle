#include "groundVehicle.h"

groundVehicle::groundVehicle(int cntWheels, double maxSpeed, string color, int cntPassengers, string model, bool hasEngine) :vehicle(maxSpeed, color, cntPassengers, model, hasEngine)
{
	this->cntWheels = cntWheels;
}

void groundVehicle::setCntWheels(int cntWheels)
{
	this->cntWheels = cntWheels;
}

void groundVehicle::printInfo() const
{
	vehicle::printInfo();
	cout << cntWheels << endl;
}
