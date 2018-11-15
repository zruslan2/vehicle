#include "engineAirVehicle.h"

engineAirVehicle::engineAirVehicle(double enginePower, double altitude, double maxSpeed, string color, int cntPassengers, string model, bool hasEngine) :airVehicle(altitude, maxSpeed, color, cntPassengers, model, hasEngine)
{
	this->enginePower = enginePower;
}

void engineAirVehicle::setenginePower(double enginePower)
{
	this->enginePower = enginePower;
}

void engineAirVehicle::printInfo() const
{
	airVehicle::printInfo();
	cout << enginePower << endl;
}
