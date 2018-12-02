#include "boat.h"



boat::boat()
{
}


boat::~boat()
{
}

boat::boat(double displacement, double maxSpeed, string color, int cntPassengers, string model, bool hasEngine):waterVehicle(displacement, maxSpeed, color, cntPassengers, model, hasEngine)
{
}

void boat::printInfo() const
{
	waterVehicle::printInfo();
}
