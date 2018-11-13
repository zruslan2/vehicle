#include "vehicle.h"

vehicle::vehicle(double maxSpeed, string color, int cntPassengers, string model, bool hasEngine)
{
	this->maxSpeed = maxSpeed;
	this->color = color;
	this->cntPassengers = cntPassengers;
	this->model = model;
	this->hasEngine = hasEngine;
}

void vehicle::setMaxSpeed(double maxSpeed)
{
	this->maxSpeed = maxSpeed;
}

void vehicle::setColor(string color)
{
	this->color = color;
}

void vehicle::setcntPassengers(int cntPassengers)
{
	this->cntPassengers = cntPassengers;
}

void vehicle::setModel(string model)
{
	this->model = model;
}

void vehicle::setHasEngine(bool hasEngine)
{
	this->hasEngine = hasEngine;
}

void vehicle::printInfo() const
{
	cout << maxSpeed << endl << color << endl << cntPassengers << endl << model << endl << hasEngine << endl;
}

