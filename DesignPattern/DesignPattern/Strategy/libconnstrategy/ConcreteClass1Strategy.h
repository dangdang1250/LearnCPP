#pragma once
#include "Class1StrategyInterface.h"
#include <iostream>
class ConcreteClass1Strategy : public Class1StrategyInterface
{
public:
    ConcreteClass1Strategy();
    virtual ~ConcreteClass1Strategy();

    virtual void executor() override;
private:

};

