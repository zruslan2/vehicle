#include "plane.h"

plane::plane(double lenghtWing, double enginePower, double altitude, double maxSpeed, string color, int cntPassengers, string model, bool hasEngine):engineAirVehicle(enginePower, altitude, maxSpeed, color, cntPassengers, model, hasEngine)
{
	this->lenghtWing = lenghtWing;
}

void plane::setLenghtWing(double lenghtWing)
{
	this->lenghtWing = lenghtWing;
}

void plane::printInfo() const
{
	engineAirVehicle::printInfo();
	cout << lenghtWing << endl;
}
