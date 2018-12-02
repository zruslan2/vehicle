#pragma once
#include "car.h"
class bus :
	public car
{
public:
	bus(string type, int cntWheels, double maxSpeed, string color, int cntPassengers, string model, bool hasEngine);
	
	void printInfo() const;
};

