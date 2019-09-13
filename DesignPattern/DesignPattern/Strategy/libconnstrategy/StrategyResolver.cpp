#include "StrategyResolver.h"
#include "ActivityType.h"
#include "Class1StrategyInterface.h"
#include "ConcreteClass1Strategy.h"
#include "NullStrategyInterface.h"
#include "ConcreteNullStrategy.h"
#include "ConnStrategyExecutor.h"

#include <iostream>
// RA IoConnPkgMapResolver
void StrategyResolver::GetExecutorIface(ActivityType activeType)
{
    Class1StrategyInterface* pExecutorIface1;
    NullStrategyInterface*   pExecutorIface2;
    ConnStrategyExecutor myExecute;
    switch (activeType)
    {
    case  ActivityType::STD_CLASS_0_1_IO :
        std::cout << "Build Class1 Interface" << std::endl;
        pExecutorIface1 = new ConcreteClass1Strategy();
        myExecute.set_strategy(pExecutorIface1);
        break;

    case ActivityType::NULL_RACK_OPTIMIZED:
        std::cout << "Build Null Interface " << std::endl;
        pExecutorIface2 = new ConcreteNullStrategy();
        //pExecutorIface2->executor();
        myExecute.set_strategy(pExecutorIface2);
        break;
    }

    myExecute.execute();
}