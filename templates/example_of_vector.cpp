#include <iostream>
#include <vector>
#include <exception>

// g++ --std=c++17 -Wall -Wextra example_of_vector.cpp -o vector
using namespace std;

template<typename T>
void printVector(const vector<T> & vec){
    cout << "used: " << vec.size() << "/" << vec.capacity()
      << "max_size: " << vec.max_size() << endl;
    
    for (const T& t : vec){
        cout << t << " ";
    }

    cout << endl;
}

int main(){
    vector<int> numbers;
    vector<string> strings {"Hello", "How", "are", "you", "doing", "?"};
    numbers.push_back(100);
    numbers.push_back(200);
    numbers.push_back(23);

    printVector(numbers);
    printVector(strings);

    strings.resize(3);
    printVector(strings);

    strings.resize(10, "xxxx");
    printVector(strings);

    numbers[0] = 43;
    numbers.push_back(400);
    numbers.push_back(500);
    printVector(numbers);

    for (int* p = &numbers[0]; p < (&numbers[0]+ numbers.size()); ++p){
        cout << *p << "\n";
    }

    // Bad access
    // cout << numbers[10] << "\n";
    try{
        cout << numbers.at(10);
    } catch (std::out_of_range& e){
        cerr << e.what() << "\n";
    }
    return 0;
}