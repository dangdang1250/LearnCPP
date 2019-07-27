#include <iostream>
#include <vector>
#include <algorithm>
// g++-7 -std=c++17 -o code1 quick...
template <typename T>
void quick_remove_at(std::vector<T> &v, std::size_t idx){
    if (idx < v.size() ){
        // get the last element and remove it from vector and put it at idx postion
        // so it is O(1) to remove a unordered vector.
        v.at(idx) = std::move(v.back());
        v.pop_back();
    }
}

template <typename T>
void quick_remove_at(std::vector<T> &v, typename std::vector<T>::iterator it){
    if (it != std::end(v) ){
        *it = std::move(v.back()); // back() return the last element of vector
        v.pop_back();
    }
}

template <typename T>
void printVector(std::vector<T> &v){
    for (int i : v ){
        std::cout << i << ", ";
    }

    std::cout << '\n';
}

int main(){
    std::vector<int> v{123,345,456,678, 100};
    quick_remove_at(v, 2); // 2 is index

    printVector(v); //123, 345, 100, 678 : last element 100 move to index 2
    
    quick_remove_at(v, std::find(std::begin(v), std::end(v), 123));

    printVector(v); // 678, 345, 100 : last element is 678 now, move to 123 postion

    return 0;
}