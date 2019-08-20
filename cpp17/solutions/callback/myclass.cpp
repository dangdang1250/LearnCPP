#include <iostream>
#include "myclass.h"
#include "eventhandler.h"
using std::cout;
using std::endl;

EventHandler* handler;

MyClass::MyClass() {
	private_x = 5;
	handler->addHandler(this);
}

void MyClass::Callback(MyClass* instance, int x)
{
	cout << x + instance->private_x << endl;
}

