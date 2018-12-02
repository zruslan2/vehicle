#pragma once
#include "waterVehicle.h"
class boat :
	public waterVehicle
{
public:
	boat(double displacement, double maxSpeed, string color, int cntPassengers, string model, bool hasEngine);

	void printInfo() const;
};

