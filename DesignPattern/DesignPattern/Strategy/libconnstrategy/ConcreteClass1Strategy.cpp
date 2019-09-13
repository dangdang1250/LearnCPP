#include "ConcreteClass1Strategy.h"
void ConcreteClass1Strategy::executor() {
    std::cout << "ConcreteClassStrategy executor()" << std::endl;
}

ConcreteClass1Strategy::ConcreteClass1Strategy()
{
    std::cout << "ConcreteClass1Strategy" << std::endl;
}

ConcreteClass1Strategy::~ConcreteClass1Strategy()
{
    std::cout << "~ConcreteClass1Strategy" << std::endl;
}
