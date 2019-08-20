#pragma once
#include <string>

class OrderBase
{
public:
    OrderBase();
    virtual ~OrderBase();

    virtual std::string getOrderName() const;
private:
    std::string m_OrderName;
};
