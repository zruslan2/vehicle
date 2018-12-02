#include "helicopter.h"

helicopter::helicopter(double bladeSize, double enginePower, double altitude, double maxSpeed, string color, int cntPassengers, string model, bool hasEngine) :engineAirVehicle(enginePower, altitude, maxSpeed, color, cntPassengers, model, hasEngine)
{
	this->bladeSize = bladeSize;
}

void helicopter::setBladeSize(double bladeSize)
{
	this->bladeSize = bladeSize;
}

void helicopter::printInfo() const
{
	engineAirVehicle::printInfo();
	cout << bladeSize << endl;
}
