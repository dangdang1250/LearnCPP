#include <iostream>
#include <array>
using namespace std;

int main(){
    array<int, 6> a;
    int size = a.size();

    for (int index=0; index < size; ++index){
        a[index]= (index+1)*100;
    }    

    cout << "\nPrint values in original order ..." << endl;
    auto pos = a.begin();

    while( pos != a.end() )
        cout << *pos++ << "\t";
    cout << endl;

    cout << "\nPrint values in reverse order ..." << endl;

    auto rpos = a.rbegin();
    while( rpos != a.rend() )
        cout << *rpos++ << "\t";
    cout << endl;
    
    return 0;
}