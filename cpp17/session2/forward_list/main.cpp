// Built on top of a singly linked list data structure
// Supports navigatio in forward direction 
// Consumes one less pointers for every node in terms of memory and runtime
#include <iostream>
#include <forward_list>
#include <iterator>
#include <algorithm>

using namespace std;

int main(){
    forward_list<int> fl = {10,10,20,30,45,45,50};

    cout << "\nlist with all values ..." << endl;
    copy( fl.begin(), fl.end(), ostream_iterator<int>(cout, "\t"));

    // forward list doesn't support size() function so use distance function : result is same as size()
    cout << "\nSize of list with duplicates is " << distance(fl.begin(), fl.end());

    fl.unique(); //remove duplicate

    cout << "\nSize of list without duplicates is " << distance(fl.begin(), fl.end());

    fl.resize( distance( fl.begin(), fl.end() ));
    cout << "\nlist after removing duplicates..." << endl;
    copy(fl.begin(), fl.end(), ostream_iterator<int>(cout, "\t"));

    return 0;

}