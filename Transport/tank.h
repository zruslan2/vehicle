#pragma once
#include "car.h"
class tank :
	public car
{
protected:
	double power;
public:
	tank(double power, string type, int cntWheels, double maxSpeed, string color, int cntPassengers, string model, bool hasEngine);

	void setPower(double power);

	double getPower() const { return this->power; }

	void printInfo() const;
	
};

