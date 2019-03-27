//
//  Checkout.hpp
//  LearnCPP
//
//  Created by ChengJixuan on 3/26/19.
//  Copyright © 2019 ChengJixuan. All rights reserved.
//

#ifndef Checkout_hpp
#define Checkout_hpp

#include <stdio.h>
class Checkout{
public:
    void addItemPrice(const std::string& a, double p);
private:
    double itemPrice;
};
#endif /* Checkout_hpp */
