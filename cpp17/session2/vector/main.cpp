#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> veci = {1, 5, 2, 4, 3};

    cout << "\nSize of vector is " << veci.size() << endl;

    auto pos = veci.begin();

    cout << "\nPrint vecotr elements before sorting" << endl;
    while( pos!=veci.end() )
        cout << *pos++ << "\t";
    cout << endl;

    sort( veci.begin(), veci.end()) ; // sort algorithm's performance is good

    cout << "\nPrint vecotr elements after sorting" << endl;
    pos = veci.begin();
    while( pos!=veci.end() )
        cout << *pos++ << "\t";
    cout << endl;

}