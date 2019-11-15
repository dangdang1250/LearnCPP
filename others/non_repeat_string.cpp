//
//  non_repeat_string.cpp
//  LearnCPP
//
//  Created by ChengJixuan on 3/19/19.
//  Copyright © 2019 ChengJixuan. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <iostream>
#include <map>

char non_repeat_string(const std::string &st){
    std::map<char,int> myset{};
    for(auto item: st){
        if (myset.find(item)==myset.end())
            myset[item]=1;
        else{
            myset[item]++;
        }
    }
    for(auto my: myset){
        if (my.second==1){
            return my.first;
        }
    }
    
    std::cout << std::endl;
    return ' ';
}
