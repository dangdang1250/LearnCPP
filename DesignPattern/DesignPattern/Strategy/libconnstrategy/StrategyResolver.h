#pragma once
#include "Class1StrategyInterface.h"
#include "NullStrategyInterface.h"
#include "ActivityType.h"
class StrategyResolver
{
public:
    void GetExecutorIface(ActivityType activeType);
private:

};
