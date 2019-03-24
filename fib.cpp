//
//  fib.cpp
//  LearnCPP
//
//  Created by ChengJixuan on 3/19/19.
//  Copyright © 2019 ChengJixuan. All rights reserved.

//  Am I right?
//  Big O
//  1) Time complexcity O(2^N)
//            f(4)
//           /    \
//       f(3)     f(2)   2^1
//        / \    /    \
//     f(2) f(1) f(1) f(0) 2^2
//  2) Space complexcity O(N)

#include <algorithm>
#include <vector>
#include <set>

int fib(int n){
    //assum n always be positive
    if (n<=2){return 1;}
    else{
        return fib(n-1)+fib(n-2);
    }
}
