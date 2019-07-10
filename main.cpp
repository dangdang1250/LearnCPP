//
//  main.cpp
//  LearnCPP
//
//  Created by ChengJixuan on 2/16/19.
//  Copyright © 2019 ChengJixuan. All rights reserved.
//
#include "AllFuncs.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    SimpleLog log;
    ScopeTiming t;
    log.SetLogLevel(log.LogLevelInfo);
    log.LogInfo("Main Started");
    Accum<int> integers(0);
    integers +=3;
    integers +=7;
    cout << integers.GetTotal() << endl;
    
    
    // end of main
}
