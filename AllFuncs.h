//
//  AllFuncs.h
//  LearnCPP
//
//  Created by ChengJixuan on 7/10/19.
//  Copyright © 2019 ChengJixuan. All rights reserved.
//

#ifndef AllFuncs_h
#define AllFuncs_h

#include <memory>
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include "ScopeTiming.h"
#include "SimpleLog.h"
#include "templates/max.cpp"
#include "templates/Accum.h"
#include "templates/Accum.h"
extern int most_frequent(std::vector<int> given_array);
extern int insert_sorted(std::vector<int> given_array);
extern char non_repeat_string(const std::string &st);
extern void common_elements(std::set<int> a, std::set<int> b);
extern void mine_sweeper(const std::vector<std::vector<int> > &bombs, int num_rows, int num_cols);
int fib(int n);
bool IsOdd(int x){
    return static_cast<bool> (x%2);
}
extern int bad();
extern int total();
extern int write_file();
extern int demo(bool shouldThrow);
extern void demo_test();
extern void solution();

/*
 // use template max as test.
 cout << "max of 33 and 44 is " << MAX::max(33,44) << endl;
 string s1 = "hello";
 string s2 = "world";
 cout << "max of " << s1 << " and " << s2 << " is " << MAX::max(s1,s2) << endl;
 
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
#endif /* AllFuncs_h */
