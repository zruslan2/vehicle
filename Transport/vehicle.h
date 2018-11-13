#pragma once
#include <string>
#include <iostream>
using namespace std;
class vehicle
{
protected:
	double maxSpeed=20.0;
	string color="Green";
	int cntPassengers=5;
	string model= "BMW";
	bool hasEngine=true;
public:
	vehicle(double maxSpeed, string color, int cntPassengers, string model, bool hasEngine);
	void setMaxSpeed(double maxSpeed);
	void setColor(string color);
	void setcntPassengers(int cntPassengers);
	void setModel(string model);
	void setHasEngine(bool hasEngine);

	double getMaxSpeed() const { return this->maxSpeed; }
	string getColor() const { return this->color; }
	int getCntPassengers() const { return this->cntPassengers; }
	string getModel() const { return this->model; }
	bool getHasEngine() const { return this->hasEngine; }

	void printInfo() const;
};

