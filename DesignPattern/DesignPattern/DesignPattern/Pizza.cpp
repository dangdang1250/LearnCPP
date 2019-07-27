#include "Pizza.h"
#include <iostream>
#include <string>

void Pizza::prepare()
{
	std::cout << topping + " Preparing Pizza!" << std::endl;
}

void Pizza::bake()
{
	std::cout << topping + " Baking!" << std::endl;
}

void Pizza::cut()
{
	std::cout << topping + " Cutting!" << std::endl;
}

void Pizza::box()
{
	std::cout << topping + " Boxing, it's ready." << std::endl;
}

Pizza::~Pizza()
{
}
