// Deque container is a double-ended queue
// Insert an element both at the front and backw ith constant time complexity
// Doesn't suffer from problem of reallocation
// Better in terms of performance as compared to a vector
#include <iostream>
#include <deque>
#include <algorithm>
#include <iterator>
using namespace std;

int main(){
    deque<int> d = {10,20,30,40,50};
    cout << "\nInitial size of deque is " << d.size() << endl;

    d.push_back(60);
    d.push_front( 5 );

    cout << "\nSize of deque after push back and front is " << d.size() << endl;
    copy(d.begin(), d.end(), ostream_iterator<int>(cout, "\t"));

    d.clear();

    cout << "\nSize of deque after clearing all values is " << d.size() << endl;

    cout << "\nIs the deque empty after clearing values? " << (d.empty() ? "true": "false") << endl;
    
    return 0;

}