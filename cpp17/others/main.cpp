#include <iostream>
#include <iomanip>
#include "Base.h"
#include "Derived.h"

int main(){
    Base *pBase;
    Base *base = new Derived();
    //Base *pBase = new Base(); abstruct class, can't create instance
    //base->A();
    //base->B();
    pBase = base;
    pBase->A();
    pBase->B();
    Derived *derived = static_cast<Derived*>(base);
    
    derived->A();
    derived->B();
    derived->C();

    Base::PowerupInitialize(true);
    Derived::PowerupInitialize();
    return 0;
}