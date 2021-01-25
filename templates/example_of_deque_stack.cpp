#include <iostream>
#include <deque>
#include <stack>
#include <queue>

using namespace std;

int main(){
    deque<int> transactions;

    transactions.push_front(100);
    transactions.push_front(300);
    
    transactions.push_back(500);
    transactions.push_back(800);

    for(unsigned int i = 0; i < transactions.size(); ++i){
        cout << transactions[i] << " ";
    }

    cout << endl;

    stack<int> mystack; // first in last out

    mystack.push(100);
    mystack.push(200);
    mystack.push(300);
    mystack.push(400);

    // you can't iterator stack
    while(!mystack.empty()){
        cout << mystack.top() << " ";
        mystack.pop();
    }

    cout << "\n";

    queue<int> myqueue; // first in first out

    myqueue.push(100);
    myqueue.push(200);
    myqueue.push(300);
    myqueue.push(400);

    // you can't iterator queue
    while(!myqueue.empty()){
        cout << myqueue.front() << " ";
        myqueue.pop();
    }

    cout << "\n";

    priority_queue<int> mypqueue; // sort by the greatest value by default

    mypqueue.push(100);
    mypqueue.push(200);
    mypqueue.push(300);
    mypqueue.push(40);
    mypqueue.push(4000);

    // you can't iterator queue
    while(!mypqueue.empty()){
        cout << mypqueue.top() << " ";
        mypqueue.pop();
    }

    cout << "\n";

    return 0;
}