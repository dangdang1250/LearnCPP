//
//  Person.cpp
//  LearnCPP
//
//  Created by ChengJixuan on 7/10/19.
//  Copyright © 2019 ChengJixuan. All rights reserved.
//

#include "Person.hpp"

Person::Person(std::string first, std::string last, int arbitrary):
firstname(first),
lastname(last),
arbitrarynumber(arbitrary){}

std::string Person::getName(){
    return firstname + " " + lastname;
}
