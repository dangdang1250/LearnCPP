#pragma once
#include "StrategyBase.h"
class OrderBase;

class UpsStrategy : public StrategyBase
{
public:
    UpsStrategy();
    ~UpsStrategy();

    double Calcuate(const OrderBase& order) override;

private:

};

