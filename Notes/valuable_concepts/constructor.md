## Constructor Initializers Are Sometimes Required

```C++
class ConstRef{
public:
    //constructor
    ConstRef(int ii);
private:
    int i;
    const int ci; // how to init it 
    int      &ri; // how to init it 
};
// Error : ci and ri must be initialized
ConstRef::ConstRef(int ii){
    i = ii; //OK
    ci = ii; // error: cannot assign to a const
    ri = i ; // error: ri was never initialized, notics here use i 
}

// OK: explicitly initialize reference and const members
ConstRef::ConstRef(int ii): i(ii),ci(ii),ri(i){}
```
# Advice here: Use Constructor Initializers  

## Guidline: Write constructor initializers in the same order as the members are declared.
###Order of Member Initialzation  
Members are initialized in the order in which they appear in the class definition: The first member is initialzied first, then the next, and so on.

## Delegating Constructors
The use of constructor initializers to let us define so called delegating constructors.
```C++
class Sales_data{
public:
    // nondelegating constructor initializes members from corresponding garuments
    Sales_data(std::string s,unsigned cnt, double price)
    :bookNo(s),units_sold(cnt),revenue(price*cnt){}
    // remaining constructors all delegate to another constructor
    Sales_data(): Sales_data("",0,0){}
    Sales_data(std::string s): Sales_data(s,0,0){}

    // this one take is as argument, run Sales_data() init members, then run function body.
    Sales_data(std::istream &is):Sales_data(){read(is, *this);}
    ...
};
```

## The Role of the Default Constructor
The default constructor is used automatically whenever an object is default or value initialized.

- In practice, it is almost always right to provide a default constructor if other constructors are being defined.