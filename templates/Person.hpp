//
//  Person.hpp
//  LearnCPP
//
//  Created by ChengJixuan on 7/10/19.
//  Copyright © 2019 ChengJixuan. All rights reserved.
//

#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>
class Person{
private:
    std::string firstname;
    std::string lastname;
    int arbitrarynumber;
public:
    Person() = default;
    Person(std::string first, std::string last, int arbitrary);
    std::string getName();
};
#endif /* PERSON_HPP */
