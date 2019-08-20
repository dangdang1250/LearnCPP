#include "StrategyBase.h"

StrategyBase::StrategyBase()
{
}

StrategyBase::~StrategyBase()
{
}

double StrategyBase::Calcuate(const OrderBase& order)
{
    return 0.0;
}
