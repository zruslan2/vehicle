#include "tank.h"


tank::tank(double power, string type, int cntWheels, double maxSpeed, string color, int cntPassengers, string model, bool hasEngine):car(type, cntWheels, maxSpeed, color, cntPassengers, model,hasEngine)
{
	this->power = power;
}

void tank::setPower(double power)
{
	this->power = power;
}

void tank::printInfo() const
{
	car::printInfo();
	cout << power << endl;
}
