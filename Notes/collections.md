### Algorithim 
    In general, the algorithm do not work directly on a container. Instead, they operate by traversing a range of elements bounded by two iterators.

    Tpyically, as the algorithm traverses the range, it does something with EACH element.

### Lambda
    A lambda expression represents callable unit of code.

### Adapter
    An adapter is a general concept in the library. There are container, iterator, and function adapters. Essentally, an adapter is a mechanism for making one thing act like another.

    A container adapter takes an existing container type and make it act like a different type.

    For example, the stack adaptor takes a sequential container and make it operate as if it were a stack!

### Copy Control
    When we define a class, we specify -- explicityly or implicityly -- what happens when objects of that class type are copied, moved, assigned, and destroyed.

    A class controls these operations by defining five special member functions: copy 
    constructor, copy-assignment operator, move constructor, move-assignment operator, and destructor.

    The copy and move constructors define what happens when an object is initiallized from another object of the same type.

    The copy- and move-assignment operators define what happens when we assign an object of a class type to another object of that same class type.

    The destructor defines what happens when an object of the type ceases to exit. 

    Collectively, we'll refer to these operations as copy control.
