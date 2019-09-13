#include <iostream>
#include "OrderBase.h"
#include "ShippingCost.h"
#include "StrategyBase.h"
#include "UpsStrategy.h"
#include "memory"
#include <typeinfo>

int main() {
    OrderBase my_order;
    UpsStrategy ups;
    StrategyBase* strategy = &ups;

    std::cout << strategy->Calcuate(my_order) << std::endl;
    std::cout << "reference to polymorphic base: " << typeid(*strategy).name() << '\n';
    return 0;   
}