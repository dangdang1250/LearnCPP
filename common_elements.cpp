//
//  common_elements.cpp
//  LearnCPP
//
//  Created by ChengJixuan on 3/18/19.
//  Copyright © 2019 ChengJixuan. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <set>
#include <algorithm>
#include <iostream>

void common_elements(std::set<int> a, std::set<int> b){
    // sorted array to find common elements
    std::vector<int> result {};
    auto p1=a.begin();
    auto p2=b.begin();
    
    while(p1!=a.end() && p2!=b.cend()){
        if(*p1==*p2){
            result.emplace_back(*p1);
            p1++;p2++;
        }
        else if(*p1 > *p2){
            p2++;
        }
        else if(*p1<*p2){
            p1++;
        }
        
    }
    for(auto item:result){
        std::cout << item << " ";
    }
    std::cout << std::endl;
}

