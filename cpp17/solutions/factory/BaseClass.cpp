#include <iostream>
#include <cstdint>

#include "BaseClass.h"

std::shared_ptr<BaseClass> BaseClass::Create(uint32_t mytype) {
	std::cout << "This is a test mytype is " << mytype << std::endl;
	//shared_ptr<MyClass> ptr1(new MyClass());
	return std::shared_ptr<BaseClass> ptr(new BaseClass());
}