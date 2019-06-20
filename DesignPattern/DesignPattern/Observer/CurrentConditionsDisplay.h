#pragma once
#include "Subject.h"
class CurrentConditionsDisplay : public IObserver, public IDisplayElement
{
public:

	void update(float t, float h, float p) override;

	void display() override;

};

