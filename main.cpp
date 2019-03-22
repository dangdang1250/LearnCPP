//
//  main.cpp
//  LearnCPP
//
//  Created by ChengJixuan on 2/16/19.
//  Copyright © 2019 ChengJixuan. All rights reserved.
//
#include <memory>
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include "ScopeTiming.h"
#include "SimpleLog.h"

int most_frequent(std::vector<int> given_array);
int insert_sorted(std::vector<int> given_array);
char non_repeat_string(const std::string &st);
void common_elements(std::set<int> a, std::set<int> b);
void mine_sweeper(const std::vector<std::vector<int> > &bombs, int num_rows, int num_cols);
int fib(int n);
bool IsOdd(int x){
    return static_cast<bool> (x%2);
}
int bad();
int total();
int write_file();
int demo(bool shouldThrow);
void demo_test();
void solution();
int main(int argc, const char * argv[]) {
    
    // insert code here...
    SimpleLog log;
    ScopeTiming t;
    log.SetLogLevel(log.LogLevelInfo);
    log.LogInfo("Main Started");
    /*
    total();
    demo_test();
    try{
    demo(true);
    }catch (std::exception& e) {
        std::cout << "Error: " << e.what() << "\n";
    }
    //[1, 1], [1, 2], [2, 2], [4, 3]], 5, 5
    std::vector<std::vector<int> > bombs {{1, 1}, {1, 2}, {2, 2}, {4, 3}};
    //{{0,2},{2,0}},3,3;
    mine_sweeper(bombs,5,5);
    //std::cout << non_repeat_string("Hello") << std::endl;
    //return 0;
    
    int n=0;
    std::cout << "Please enter a integer (positive)number:";
    std::cin>>n;
    std::cout << fib(n) << std::endl;
    std::vector<int> myArray{2,13,14,12,11};
    int times = insert_sorted(myArray);
    
    //int max_item = most_frequent(myArray);
    //std::cout << max_item << std::endl;
    //return 0;
    
    std::set<int> a {1,2,4,3,5};
    std::set<int> b {2,3,6,9};
    common_elements(a, b);
     */
}
