#pragma once
#include "airVehicle.h"
class airBaloon :	public airVehicle
{
protected:
	double volume=100.0;
public:
	airBaloon(double volume, double altitude, double maxSpeed, string color, int cntPassengers, string model, bool hasEngine);

	void setVolume(double volume);
	double getVolume() const { return this->volume; }

	void printInfo() const;
};

