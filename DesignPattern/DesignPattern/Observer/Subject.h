#pragma once
#include <memory>

class IObserver {
	virtual void update(float t, float h, float p)=0;
};
// Subject as Interface
class ISubject {
	virtual void registerObserver(std::shared_ptr<IObserver> p) = 0;
	virtual void removeObserver(std::shared_ptr<IObserver> p) = 0;
	virtual void notifyObserver() = 0;

};

class IDisplayElement {
	virtual void display() = 0;
};