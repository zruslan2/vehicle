#include "spaceVehicle.h"

spaceVehicle::spaceVehicle(string fuelType, double maxSpeed, string color, int cntPassengers, string model, bool hasEngine):vehicle(maxSpeed, color, cntPassengers, model, hasEngine)
{
	this->fuelType = fuelType;
}

void spaceVehicle::setFuelType(string color)
{
	this->fuelType = fuelType;
}

void spaceVehicle::printInfo() const
{
	vehicle::printInfo();
	cout << fuelType << endl;
}
