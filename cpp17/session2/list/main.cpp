#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;

// constant time to insert
int main()
{
    list<int> mylist;

    for (int count=0; count < 5; ++count){
        mylist.push_back( (count+1)*100);
    }

    auto pos = mylist.begin(); // syntax is same as others . benefit of STL

    cout << "\nPrint the list ..." << endl;
    while( pos != mylist.end() )
        cout << *pos++ << "-->";
    cout << " X" << endl;

    return 0;
}