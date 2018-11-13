#pragma once
#include "vehicle.h"
class airVehicle :	public vehicle
{
protected:
	double altitude = 1000.0;
public:
	airVehicle(double altitude, double maxSpeed, string color, int cntPassengers, string model, bool hasEngine);

	void setAltitude(double altitude);

	double getMaxSpeed() const { return this->altitude; }

	void printInfo() const;
};

