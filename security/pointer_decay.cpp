/* Keep use of pointers simple and straight forward

clang++ --std=c++17 pointer_decay.cpp --withour process
## didn't work so far
clang++ --std=c++2a pointer_decay.cpp -I/home/jcheng6/gsl/include
./a.out
*/
#include <iostream>
#include <string>
// #include <gsl/gsl>

void decay(const int* ages){
    // decay 衰变 c++17
    std::cout << sizeof(ages) << '\n'; // Size of the pointer = 8
}

// c++20
// void process(gsl::span<const int> buffer){
//     for (auto &x : buffer){
//         std::cout << x;
//     }
// }

int main(){
    int ages[] = {15, 30, 60};
    std::cout << std::size(ages) << '\n'; // Number of elements = 3
    std::cout << sizeof(ages[0]) << '\n'; // Size of an elment = 4
    std::cout << sizeof(ages) << '\n';    // Size of arra = 12 (= 3 * 4)

    decay(ages); // pass a pointer

    // int buffer[42] = {0};
    // process(buffer);
}