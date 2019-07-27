#include <iostream>
#include <string>
#include "Vehicle.hpp"

class TwoWheeler : public Vehicle {
public:
	void printVehicle() {
		std::cout << "TwoWheeler here" << std::endl;
	};
};

class ThreeWheeler : public Vehicle {
public:
	void printVehicle() {
		std::cout << "ThreeWheeler here" << std::endl;
	};
};

class FourWheeler : public Vehicle {
public:
	void printVehicle() {
		std::cout << "FourWheeler here" << std::endl;
	};
};


Vehicle* Vehicle::Create(VehicleType type) {
	switch (type)
	{
		case VehicleType::VT_TwoWheeler:
			return new TwoWheeler();
			break;
		case VehicleType::VT_ThreeWheeler:
			return new ThreeWheeler();
			break;
		case VehicleType::VT_FourWheeler:
			return new FourWheeler();
			break;
		default:
			break;
	}
}

