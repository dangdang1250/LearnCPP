#include "SimplePizzaFactory.h"
#include <memory>

Pizza SimplePizzaFactory::createPizza(std::string type)
{
	if (type == "cheese") {
		auto pc =std::make_shared<CheesePizza>();
		Pizza p(pc);
		return p;
	}
	else if (type == "pepperoni")
	{
		auto pc = std::make_shared<PepperoniPizza>();
		Pizza p(pc);
		return p;
	}
}
