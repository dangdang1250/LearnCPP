//
//  ScopeTiming.h
//  LearnCPP
//
//  Created by ChengJixuan on 3/20/19.
//  Copyright © 2019 ChengJixuan. All rights reserved.
//

#ifndef ScopeTiming_h
#define ScopeTiming_h

#include <chrono>
#include <thread>
#include <iostream>
struct ScopeTiming{
    std::chrono::time_point<std::chrono::high_resolution_clock> start,end;
    std::chrono::duration<float> duration;
    ScopeTiming(){
        start=std::chrono::high_resolution_clock::now();
    }
    
    ~ScopeTiming(){
        end = std::chrono::high_resolution_clock::now();
        duration = end - start;
        float ms = duration.count()*1000.0f; // if it is fast, change to ms
        std::cout <<"Time took:"<< ms<< "ms" << std::endl;
    }
};

#endif /* ScopeTiming_h */
