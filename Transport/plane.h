#pragma once
#include "engineAirVehicle.h"
class plane :	public engineAirVehicle
{
	double lenghtWing;
public:
	plane(double lenghtWing, double enginePower, double altitude, double maxSpeed, string color, int cntPassengers, string model, bool hasEngine);
	void setLenghtWing(double lenghtWing);

	double getLenghtWin() const { return this->lenghtWing; }

	void printInfo() const;
};

