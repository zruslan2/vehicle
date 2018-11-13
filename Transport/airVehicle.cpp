#include "airVehicle.h"

airVehicle::airVehicle(double altitude, double maxSpeed, string color, int cntPassengers, string model, bool hasEngine):vehicle(maxSpeed, color, cntPassengers, model, hasEngine)
{
	this->altitude = altitude;
}

void airVehicle::setAltitude(double altitude)
{
	this->altitude = altitude;
}

void airVehicle::printInfo() const
{
	vehicle::printInfo();
	cout << altitude << endl;
}
