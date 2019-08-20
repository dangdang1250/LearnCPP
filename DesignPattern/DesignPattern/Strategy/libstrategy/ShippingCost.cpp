#include "ShippingCost.h"
#include "StrategyBase.h"

ShippingCost::ShippingCost(std::shared_ptr<StrategyBase> strategy)
:_pStrategy(strategy)
{
}

ShippingCost ::~ShippingCost()
{
}

double ShippingCost::shippingCost(const OrderBase& order) {
    return _pStrategy->Calcuate(order);
}