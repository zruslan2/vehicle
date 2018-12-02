#include "rocket.h"


rocket::rocket(string fuelType, double maxSpeed, string color, int cntPassengers, string model, bool hasEngine):spaceVehicle(fuelType, maxSpeed, color, cntPassengers, model, hasEngine)
{
}

void rocket::printInfo() const
{
	spaceVehicle::printInfo();
}
