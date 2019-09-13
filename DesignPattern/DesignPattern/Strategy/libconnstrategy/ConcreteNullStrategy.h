#pragma once
#include "NullStrategyInterface.h"
class ConcreteNullStrategy : public NullStrategyInterface
{
public:
    ConcreteNullStrategy();
    ~ConcreteNullStrategy();

    virtual void executor() override;
private:

};

