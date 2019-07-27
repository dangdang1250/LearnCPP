#pragma once
#include "Interfaces.h"

class BirdAdapter : public IToyDuck
{
	// You need to implement the interface your client expects to use
public:
	explicit BirdAdapter(IBird b);

	void squeak() override;

	// keep it all public make it easy
	IBird bird;
};