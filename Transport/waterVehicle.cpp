#include "waterVehicle.h"

waterVehicle::waterVehicle(double displacement, double maxSpeed, string color, int cntPassengers, string model, bool hasEngine) :vehicle(maxSpeed, color, cntPassengers, model, hasEngine)
{
	this->displacement = displacement;
}

void waterVehicle::setDisplacement(double displacement)
{
	this->displacement = displacement;
}

void waterVehicle::printInfo() const
{
	vehicle::printInfo();
	cout << displacement << endl;
}
