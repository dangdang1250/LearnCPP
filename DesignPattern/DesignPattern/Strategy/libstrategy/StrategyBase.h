#pragma once
class OrderBase;

class StrategyBase
{
public:
    StrategyBase();
    virtual ~StrategyBase();
    
    virtual double Calcuate(const OrderBase& order);
private:

};
