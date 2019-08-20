#include "Enumeration.h"
#include <iostream>
#include <cmath>
// first create a function prototype design, write test code first
double Enumeration::square_root(double num) {
	if (num < 0.0) {
		std::cerr << "Error: Negative Input\n";
		exit(-1);
	}

	return std::sqrt(num);
	// Code for 0 and +ve numbers follow
}