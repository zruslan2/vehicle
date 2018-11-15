#pragma once
#include "airVehicle.h"
class engineAirVehicle :public airVehicle
{
protected:
	double enginePower=1000.0;
public:
	engineAirVehicle(double enginePower, double altitude, double maxSpeed, string color, int cntPassengers, string model, bool hasEngine);

	void setenginePower(double enginePower);
	double getenginePower() const { return this->enginePower; }

	void printInfo() const;
};

