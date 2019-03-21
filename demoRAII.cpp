//
//  demoRAII.cpp
//  LearnCPP
//
//  Created by ChengJixuan on 3/21/19.
//  Copyright © 2019 ChengJixuan. All rights reserved.
//

#include <stdio.h>
#include <iostream>

class DemoRAII{
public:
    explicit DemoRAII(int num): m_num(num){
        std::cout << "DemoRAII created" << std::endl;
    }
    
    void printNum(){
        std::cout << m_num << std::endl;
    }
    ~DemoRAII(){
        std::cout << "DemoRAII destroyed"<< std::endl;
    }
private:
    int m_num;
};

void demo(bool shouldThrow){
    DemoRAII resourse(1);
    resourse.printNum();
    
    if(shouldThrow){
        throw std::runtime_error("Allocation Error!!!");
    }
    
    std::cout << "Exit Demo" << std::endl;
}
