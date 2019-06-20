#include "PizzaStore.h"
#include "Pizza.h"
#include "SimplePizzaFactory.h"

PizzaStore::PizzaStore()
{
	
}

Pizza PizzaStore::orderPizza(std::string type)
{
	Pizza pizza = SimplePizzaFactory::createPizza(type);

	pizza.prepare();
	pizza.bake();
	pizza.cut();
	pizza.box();

	return pizza;
}
