#include <iostream>
#include <array>
// g++ --std=c++17 -Wall -Wextra example_of_arrays.cpp -o arrays
using namespace std;

template<typename T>
void dutch_flag_sort(T arr[], int size, T midVal){
    int i = 0, j = 0;
    int n = size -1;

    while(j <= n){
        if(arr[j] < midVal){
            T temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            i++;
            j++;
        }
        else if( arr[j]> midVal){
            T temp = arr[j];
            arr[j] = arr[n];
            arr[n] = temp;
            n--;
        }
        else{
            j++;
        }
    }
}
int main(){
    // declare a regular C-style array
    int numbers[20] = {0,1,2,0,0,2,2,1,1,0,1,2,2,1,1,0,0,0,0,1};
    // standard array
    std::array<int, 20> numbers2 = {0,1,2,0,0,2,2,1,1,0,1,2,2,1,1,0,0,0,0,1};

    // three partition problem
    dutch_flag_sort(numbers, 20, 1);
    dutch_flag_sort(numbers2.data(), numbers2.size(), 1);
    dutch_flag_sort(&numbers2[0], numbers2.size(), 1);

    cout << "numbers: ";
    for(int i : numbers){
        cout << i << " ";
    }
    cout << endl;

    cout << "numbers2: ";
    for (auto i : numbers){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}