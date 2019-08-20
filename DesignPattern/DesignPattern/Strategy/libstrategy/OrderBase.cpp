#include "OrderBase.h"

OrderBase::OrderBase():
m_OrderName("OrderBase")
{
}

OrderBase::~OrderBase()
{
}

std::string OrderBase::getOrderName() const
{
    return m_OrderName;
}