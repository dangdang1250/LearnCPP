#pragma once
class Base
{
public:
    static void PowerupInitialize(bool ramBad);
    virtual void A();
    virtual void B()=0;
};

