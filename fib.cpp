//
//  fib.cpp
//  LearnCPP
//
//  Created by ChengJixuan on 3/19/19.
//  Copyright © 2019 ChengJixuan. All rights reserved.
//

#include <stdio.h>
int fib(int n){
    //assum n always be positive
    if (n<=2){return 1;}
    else{
        return fib(n-1)+fib(n-2);
    }
}
