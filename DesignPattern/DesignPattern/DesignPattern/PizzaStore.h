#pragma once
#include "SimplePizzaFactory.h"
#include "Pizza.h"
#include <string>

class PizzaStore {
	friend SimplePizzaFactory;
public:

	explicit PizzaStore();

	Pizza orderPizza(std::string type);
private:
	
};