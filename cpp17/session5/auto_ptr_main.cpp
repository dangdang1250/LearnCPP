#include <iostream>
#include <string>
#include <memory>
#include <sstream>

// auto_ptr is removed
// g++-7 auto_ptr_main.cpp -Wno-deprecated

using namespace std;

class MyClass{
private:
    static int count;
    string name;
public:
    MyClass() {
        ostringstream stringStream(ostringstream::ate);
        stringStream << "Object";
        stringStream << ++count;
        name = stringStream.str();
        cout << "\nMyClass Default constructor - " << name << endl;
    }

    ~MyClass(){
        cout << "\nMyClass destructor - " << name << endl;
    }

    MyClass( const MyClass &objectBeingCopied ){
        cout << "\nMyClass copy constructor " << endl;
    }

    MyClass& operator=( const MyClass &objectBeginAssigned ){
        cout << "\nMyClass assignment operator " << endl;
    }

    void sayHello(){
        cout << "Hello from MyClass" << endl;
    }
};

int MyClass::count = 0;

int main(){
    auto_ptr<MyClass> ptr1( new MyClass() );
    auto_ptr<MyClass> ptr2( new MyClass() );
    
    ptr1->sayHello();
    ptr2->sayHello();

    ptr2 = ptr1;

    ptr2->sayHello();
    return 0;
}