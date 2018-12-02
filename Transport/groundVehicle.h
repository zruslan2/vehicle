#pragma once
#include "vehicle.h"
class groundVehicle :
	public vehicle
{
protected:
	int cntWheels;
public:
	groundVehicle(int cntWheels, double maxSpeed, string color, int cntPassengers, string model, bool hasEngine);

	void setCntWheels(int cntWheels);

	double getCntWheels() const { return this->cntWheels; }

	void printInfo() const;
};

