/* Example 3: Access out of array bounds leads to infinite loop
clang++ -fsanitize=address infinite_loop.cpp

*/

int main(){
    complex<int> next_value;
    complex<int> values[4] = {0};
    for (int i = 0; i < 4; i++, next_value = values[i])
        cout << i << endl;
}