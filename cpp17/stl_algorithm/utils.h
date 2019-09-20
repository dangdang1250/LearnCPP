#pragma once
#include <iostream>
#include <vector>
#include <numeric>
#include <iterator>
#include <deque>
#include <array>

template<typename T>
void printVector(const std::vector<T>& v, const std::string& msg) {
    std::cout << msg << ":\n";
    for (auto item : v)
    {
        std::cout << item << ", ";
    }

    std::cout << std::endl;
}
