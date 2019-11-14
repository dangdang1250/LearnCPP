#include <iostream>
#include <vector>

using namespace std;
// g++ -std=c++17 -D_GLIBCXX_DEBUG -o code1 checked_iterator.cpp
int main(){
    vector<int> v { 1, 2, 3};

    v.shrink_to_fit();

    const auto it (begin(v));
    cout << *it << endl;

    v.push_back(123);
    cout << v.size() << endl;
    cout << *it << endl;

    return 0;
}