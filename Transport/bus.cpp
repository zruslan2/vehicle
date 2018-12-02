#include "bus.h"

bus::bus(string type, int cntWheels, double maxSpeed, string color, int cntPassengers, string model, bool hasEngine):car(type, cntWheels, maxSpeed, color, cntPassengers, model, hasEngine)
{
}

void bus::printInfo() const
{
	car::printInfo();
}
