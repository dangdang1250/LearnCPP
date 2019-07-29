#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;

int main(){
    list<int> mylist = {100,20,5, 80, 50};

    cout << "\nPrint the list before sorting..." << endl;
    copy( mylist.begin(), mylist.end(), ostream_iterator<int>(cout, "-->"));
    cout << " X" << endl;

    mylist.sort();  //suppport random access item
    cout << "\nPrint the list after sorting..." << endl;
    copy( mylist.begin(), mylist.end(), ostream_iterator<int>(cout, "-->"));
    cout << " X" << endl;
    return 0;
}