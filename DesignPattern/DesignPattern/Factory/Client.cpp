#include "Client.hpp"

// constructor
Client::Client() {
	VehicleType type = VehicleType::VT_TwoWheeler;

	pVehicle = Vehicle::Create(type);
}

Client::~Client() {
	if (pVehicle) {
		delete pVehicle;
		pVehicle = nullptr;
	}
}

Vehicle* Client::getVehicle() {
	return pVehicle;
}

