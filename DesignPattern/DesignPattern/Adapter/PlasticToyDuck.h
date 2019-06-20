#pragma once
#include "Interfaces.h"
class PlasticToyDuck : public IToyDuck
{
public:
	PlasticToyDuck() = default;
	~PlasticToyDuck();

	void squeak();
};

