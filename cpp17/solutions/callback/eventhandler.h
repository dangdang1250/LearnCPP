#pragma once
#include <iostream>
#include <functional>

#include "myclass.h"

class EventHandler {
public:
	void addHandler(MyClass* owner)
	{
		std::cout << "Handler added..." << std::endl;
		owner->Callback(owner, 1);
	}
};

class EventHandler1 {
public:
	void addHandler(std::function<void(int)> callback) {
		std::cout << "Handler1 added..." << std::endl;
		callback(1); // an event just occured
	}
};