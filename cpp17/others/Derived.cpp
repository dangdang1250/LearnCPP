#include "Derived.h"
#include <iostream>

void Derived::B()
{
    std::cout << "1Derived::B()" << std::endl;
}

void Derived::C()
{
    std::cout << "1Derived::C()" << std::endl;
}

void Derived::PowerupInitialize(void){
    std::cout << "Derived:: PowerupInitialize" << std::endl;
}