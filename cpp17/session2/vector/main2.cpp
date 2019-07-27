#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    vector<int> v;
    cout << "\nType empty string to end the input once you are done feeding the ";
    cout << "\nEnter some numbers to feed the vecotr ... " << endl;

    istream_iterator<int> start_input(cin);
    istream_iterator<int> end_input;
    copy( start_input, end_input, back_inserter( v )); //third is destination v

    cout << "\nPrint the vector..." << endl;
    copy( v.begin(), v.end(), ostream_iterator<int>(cout, "\t"));

    cout << endl;

    return 0;
}

// input as below 
// 1 5 4 "" 