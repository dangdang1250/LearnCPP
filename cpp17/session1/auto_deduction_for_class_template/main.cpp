#include <iostream>
using namespace std;

template <typename T1, typename T2>
class MyClass{
private:
    T1 t1;
    T2 t2;
public:
    MyClass(T1 t1 = T1(), T2 t2 = T2() ){}

    void printSizeOfDataTypes(){
        cout << "\nSize of t1 is " << sizeof( t1 ) << " bytes." << endl;
        cout << "\nSize of t2 is " << sizeof( t2 ) << " bytes." << endl;
    }
};

int main(){
    MyClass<int, double> obj1;
    obj1.printSizeOfDataTypes();

    // deduction 推導
    MyClass obj2(1, 10.56); // new feature syntax

    return 0;
}