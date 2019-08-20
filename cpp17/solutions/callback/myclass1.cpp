#include "myclass1.h"
#include "eventhandler.h"

EventHandler1* handler;

MyClass1::MyClass1() {
	using namespace std::placeholders; // for '_1'

	private_x = 5;
	handler->addHandler(std::bind(&MyClass1::Callback, this, _1));
}

MyClass1::Callback(int x) {
	std::cout << x + private_x << std::endl;
}