#include "ConcreteNullStrategy.h"
#include <iostream>

ConcreteNullStrategy::ConcreteNullStrategy()
{
    std::cout << "ConcreteNullStrategy constructor" << std::endl;
}

ConcreteNullStrategy::~ConcreteNullStrategy()
{
    std::cout << "~ConcreteNullStrategy destructor" << std::endl;
}

void ConcreteNullStrategy::executor()
{
    std::cout << "ConcrateNullStrategy executor" << std::endl;
}
