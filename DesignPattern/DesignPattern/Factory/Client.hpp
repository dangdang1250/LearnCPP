#pragma once
#include "Vehicle.hpp"

class Client {
public:
	Client();
	~Client();

	Vehicle* getVehicle();

private:
	Vehicle* pVehicle;
};