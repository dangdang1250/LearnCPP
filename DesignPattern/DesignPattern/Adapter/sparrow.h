#pragma once
#include "Interfaces.h"
class Sparrow : public IBird
{
public:
	Sparrow() = default;
	void fly();
	void makeSounds();
	~Sparrow();

};

