// Problem: ??
// 1) Example: Most examples are too small or are special cases. Debug your example.
//    ask need to be clarfied questions :
//    Is there any way it's a special case?
//    Is it big enough?

// 2) Write test cases, Write result--> Find pattern-->Brute Force Solution
// 4) Think on paper-->Optimize-->If you can't
// 5) Walk Throught code on paper : What need to check? when you should/can return? etc
// 6) Static analyze use cppcheck *.cpp
// 8) Type code, complie, test,fix debug, until get correct answer

// After
// [] Write down what you learned from this problem solving process

/* Solution 1:
Step 1:
Step 2:
T = O(N log N)

Could be better?
*/

/* Test cases: Expected, corner case,
[1,2,3]       -->2
[]            -->NULL
[1]           -->NULL
[0,0,0]       -->0
[1,3,4,5,0,2] -->4
*/

// clang++ -std=c++14 <filename>.cpp
#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

// For less typing
using namespace std;

// Create debug printout
void print(const vector<int>& arr){
    for (int i = 0; i < arr.size(); ++i)
        cout << arr[i] << " ";
}

class mySoltuion{
public:
    static void foo(){

    }//end of function
}; // end of mySolution

class BetterSolution{
public:
    static void foo(){
    }//end of function
}; // end of betterSolution

int main(){
    /*
    vector< vector<int> > test_cases {
        {1,2,3},//       -->2
        {}     ,//       -->NULL
        {1}    ,//       -->NULL
        {0,0,0},//       -->0
        {1,3,4,5,0,2}, // -->4
        {-3,-2}        // -->-3
    };
    */
    /*
    test_cases= {
        {1,2,3},{4,5,6}
        ,           //false
        {"a","a"},         //false
        {"ab","ba"},       //true
        {"aaa","aaa"},     //true
        {"xyca","xyc"},    //false
        {"xyd" ,"dyc"}     //false
    };
    */

    for(auto A: test_cases){
        //mySoltuion::foo(A);
        //BetterSolution::foo(A);
    }

    return 0;
}
// end of file
