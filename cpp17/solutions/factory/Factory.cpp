#include <cstdint>
#include <iostream>
#include "BaseClass.h"
struct TableEntry {
	uint32_t moduleType;
	// function pointer
	BaseClass* (*Create)(uint32_t mytype);
} sTableEntry[]{
	{1 , &BaseClass::Create }
};
//void (*foo)(uint32_t mytype);

int main(){
	//foo = &BaseClass::Create;
	//BaseClass::Create(1);
	sTableEntry[0].moduleType = 1;
	sTableEntry[0].Create(1);
	std::cout << sTableEntry->moduleType << std::endl;
	return 0;
}