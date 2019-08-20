#pragma once
#include <memory>
class StrategyBase;
class OrderBase;
class ShippingCost
{
public:
    explicit ShippingCost(std::shared_ptr<StrategyBase> strategy);
    ~ShippingCost();

    double shippingCost(const OrderBase& order);
private:
    std::shared_ptr<StrategyBase> _pStrategy = nullptr;
};

