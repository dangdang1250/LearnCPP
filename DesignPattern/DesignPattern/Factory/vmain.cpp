#include <iostream>
#include <string>
#include "Vehicle.hpp"
#include "Client.hpp"

int vmain() {
	Client* pClient = new Client();
	pClient->getVehicle()->printVehicle();
	return EXIT_SUCCESS;
}