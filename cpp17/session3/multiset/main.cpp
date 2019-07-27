#include <iostream>
#include <set>
#include <iterator>
#include <algorithm>

using namespace std;

int main(){
    multiset<int> ms = {10,30,10,50,70,90};

    cout << "\nMultiset values are ..." << endl;
    copy(ms.begin(), ms.end(), ostream_iterator<int>(cout,"\t"));
    cout << endl;
    return 0;

}