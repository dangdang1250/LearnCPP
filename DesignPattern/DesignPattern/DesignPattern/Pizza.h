#pragma once
#include <string>
#include <memory>
class Pizza {
public:
	Pizza() = default; //if I set this will get compile error,
	Pizza(std::shared_ptr<Pizza> p) {
		topping = p->topping;
	}
	
	// copy construct
	Pizza(const Pizza& p) {
		topping = p.topping;
	}

	virtual void prepare();
	virtual void bake();
	virtual void cut();
	virtual void box();

	virtual ~Pizza();
protected:
	
	std::string topping;
};

class CheesePizza : public Pizza {
public:
	CheesePizza(){
		topping = "Cheese";
	}

};

class PepperoniPizza :public Pizza {
public:
	PepperoniPizza()
	{
		topping += "pepperoni";
	}
};