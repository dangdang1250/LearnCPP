#include <iostream>
#include "eventhandler.h"
void freeStandingCallback(int x) {
	std::cout << "free standing callback" << std::endl;
}

EventHandler1* handler1;
int main() {
	handler1->addHandler(freeStandingCallback);
	//use lambda
	handler1->addHandler([](int x) { std::cout << "x is " << x << "\n"; });
}