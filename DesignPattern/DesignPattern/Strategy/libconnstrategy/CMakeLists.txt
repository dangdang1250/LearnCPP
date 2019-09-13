add_library(
    connstrategy
    STATIC
    ActivityType.h
    Class1StrategyInterface.h
    NullStrategyInterface.h
    ConcreteClass1Strategy.cpp
    ConcreteNullStrategy.cpp
    StrategyResolver.cpp
)

target_include_directories(connstrategy PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})