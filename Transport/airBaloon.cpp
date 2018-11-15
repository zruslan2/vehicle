#include "airBaloon.h"

airBaloon::airBaloon(double volume, double altitude, double maxSpeed, string color, int cntPassengers, string model, bool hasEngine):airVehicle(altitude, maxSpeed, color, cntPassengers, model,  hasEngine)
{
	this->volume = volume;
}

void airBaloon::setVolume(double volume)
{
	this->volume = volume;
}

void airBaloon::printInfo() const
{
	airVehicle::printInfo();
	cout << volume << endl;
}
