#pragma once
#include "Pizza.h"
#include <string>

class SimplePizzaFactory
{
public:
	static Pizza createPizza(std::string type);
};

