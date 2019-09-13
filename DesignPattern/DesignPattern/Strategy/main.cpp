#include <iostream>
#include "libconnstrategy/Class1StrategyInterface.h"
#include "libconnstrategy/StrategyResolver.h"
#include "libconnstrategy/ActivityType.h"
#include "libconnstrategy/NullStrategyInterface.h"
#include "libconnstrategy/ConnStrategyExecutor.h"
int main()
{
    ActivityType info = ActivityType::STD_CLASS_0_1_IO;

    StrategyResolver myResolver;
    myResolver.GetExecutorIface(info);

    info = ActivityType::NULL_RACK_OPTIMIZED;
    myResolver.GetExecutorIface(info);
    return 0;
}