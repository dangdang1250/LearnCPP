add_library(
    strategy
    STATIC
    OrderBase.h
    OrderBase.cpp
    ShippingCost.h
    ShippingCost.cpp
    StrategyBase.cpp
    StrategyBase.h
    UpsStrategy.cpp
    UpsStrategy.h
)

target_include_directories(strategy PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})