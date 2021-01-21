#include <iostream>
#include <list>
// g++ --std=c++17 -Wall -Wextra example_of_list.cpp -o lists
using namespace std;

int main(){
    list<int> mylist {10,20,25,30,40,50};
    list<int> other {15, 25, 35, 45, 50, 55};

    // merge transfers all elements from other to mylist
    mylist.merge(other);

    cout << "list size = " << mylist.size() << "\n";
    cout << "other size = " << other.size() << endl;
    
    // we must use iterators to access list container
    for (auto i = mylist.begin(); i != mylist.end(); ++i){
        cout << *i << " ";
    }

    cout << endl;

    // remove all duplicated items
    mylist.unique(); // ordered
    for (auto i = mylist.begin(); i != mylist.end(); ++i){
        cout << *i << " ";
    }

    cout << endl;

    return 0;
}