#pragma once
#include "spaceVehicle.h"
class rocket :
	public spaceVehicle
{
public:
	rocket(string fuelType, double maxSpeed, string color, int cntPassengers, string model, bool hasEngine);

	void printInfo() const;
	
};

