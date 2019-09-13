#pragma once
//这个就是IoConnPkgStrategyExecutor
//也就是ContextA
#include "Class1StrategyInterface.h"
#include "NullStrategyInterface.h"

class ConnStrategyExecutor
{
public:
    ConnStrategyExecutor() :
        _class1strategy(nullptr),
        _nullstrategy(nullptr) {}

    explicit ConnStrategyExecutor(Class1StrategyInterface* strategy)
        :_class1strategy(strategy) {};

    explicit ConnStrategyExecutor(NullStrategyInterface* strategy)
        :_nullstrategy(strategy) {};

    ~ConnStrategyExecutor() {};

    void set_strategy(Class1StrategyInterface* strategy)
    {
        _class1strategy = strategy;
    }

    void set_strategy(NullStrategyInterface* strategy)
    {
        _nullstrategy = strategy;
    }
    void execute() {
        if (_class1strategy != nullptr)
            _class1strategy->executor();
        if (_nullstrategy != nullptr)
            _nullstrategy->executor();
    }
private:
    Class1StrategyInterface* _class1strategy;
    NullStrategyInterface* _nullstrategy;

};
