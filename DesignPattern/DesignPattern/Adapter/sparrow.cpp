#include "sparrow.h"
#include <string>
#include <iostream>

void Sparrow::fly() {
	std::cout << "Sparrow flying..." << std::endl;
}

void Sparrow::makeSounds()
{
	std::cout << "Chirp Chirp" << std::endl;
}

Sparrow::~Sparrow() {
	std::cout << "Deconstrutor Sparrow" << std::endl;
}