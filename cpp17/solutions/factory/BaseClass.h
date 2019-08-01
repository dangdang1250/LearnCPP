#pragma once
#include <cstdint>
#include <memory>
class BaseClass {
public:
	static std::shared_ptr<BaseClass> Create(uint32_t mytype);

	BaseClass() {};
	~BaseClass() {};
	
};
