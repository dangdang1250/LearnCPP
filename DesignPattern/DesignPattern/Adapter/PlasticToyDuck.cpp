#include "PlasticToyDuck.h"
#include <iostream>
#include <string>

PlasticToyDuck::~PlasticToyDuck() {
	std::cout << "Destructor of PlasticToyduck" << std::endl;
}

void PlasticToyDuck::squeak()
{
	std::cout << "squeak..." << std::endl;
}