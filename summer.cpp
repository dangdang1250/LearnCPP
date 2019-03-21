//
//  summer.cpp
//  LearnCPP
//
//  Created by ChengJixuan on 3/21/19.
//  Copyright © 2019 ChengJixuan. All rights reserved.
//

#include <stdio.h>
#include <iostream>
template<typename T>
T summer(T v){
    return v;
}

template<typename T, typename ... Args>
T summer(T first, Args ... args){
    return first + summer(args ...);
}

void total(){
    std::cout << "summer(1,2,12,100) = " << summer(1,2,12,100) << std::endl;
}


