#pragma once
#include "vehicle.h"
class waterVehicle :
	public vehicle
{
protected:
	double displacement;
public:
	waterVehicle(double displacement, double maxSpeed, string color, int cntPassengers, string model, bool hasEngine);

	void setDisplacement(double displacement);

	double getDisplacement() const { return this->displacement; }

	void printInfo() const;
	
};

