#include <iostream>
#include <gtest/gtest.h>
#include "Checkout.hpp"
#include <string>

using namespace std;

TEST(CheckoutTests, CanInstantiateCheckout){
    Checkout co;
}

TEST(CheckoutTests, CanAddItemPrice){
    Checkout co;
    co.addItemPrice("a",4.5);
}
