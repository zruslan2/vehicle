#pragma once
#include "vehicle.h"
class spaceVehicle :
	public vehicle
{
protected:
	string fuelType;
public:
	spaceVehicle(string fuelType, double maxSpeed, string color, int cntPassengers, string model, bool hasEngine);

	void setFuelType(string color);

	string getFuelType() const { return this->fuelType; }

	void printInfo() const;
	
};

