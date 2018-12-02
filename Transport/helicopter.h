#pragma once
#include "engineAirVehicle.h"
class helicopter :
	public engineAirVehicle
{
	double bladeSize;
public:
	helicopter(double bladeSize, double enginePower, double altitude, double maxSpeed, string color, int cntPassengers, string model, bool hasEngine);
	void setBladeSize(double bladeSize);

	double getBladeSize() const { return this->bladeSize; }

	void printInfo() const;
};

