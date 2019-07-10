//
//  max.cpp
//  LearnCPP
//
//  Created by ChengJixuan on 7/10/19.
//  Copyright © 2019 ChengJixuan. All rights reserved.
//

#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;
#include "BankAccount.hpp"

namespace MAX{
template <class T>
T max(T const& t1, T const& t2)
{
    return t1 < t2? t2: t1;
}
}
