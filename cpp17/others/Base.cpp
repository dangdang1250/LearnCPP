#include "Base.h"
#include <iostream>
#include <iomanip>

void Base::A()
{
    std::cout << "Base::A()" << std::endl;
}

void Base::PowerupInitialize(bool ramBad){
    std::cout << "Base PowerupInitizlize..." << std::boolalpha << ramBad << std::endl;
}