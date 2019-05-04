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

### Friend Declarations and Scope  
    Even if we define the function inside the class, we must still provide a declaration outside of the class itself to amke that function visible.
```C++
struct X{
    friend void f(){ /* friend function can be defined in the class body*/}
    X() {f();} // error: no declaration for f
    void g();
    void h();
};
void X::g(){
    return f(); // error : f hassn't been declared
}
void f(); // declare the function defined inside X
void X::h(){
    return f(); // now it is OK: declaration for f is now in scope
}
```

## Local static Objects
It can be useful to have a local variable whose lifetime continues across calls to the function. We obtain such objects by defining a local variable as static. Each local static object is initialized before the first time execution passes through the object's definition. Local statics are not destroyed when a function ends; they are destroyed when the program terminates.

- **static memory**: is used for local static objects, for class static data members and for variables defined out side any function.
- **stack memory**: is used for nonstatic objects defined inside functions. 

Objects allocated in static or stack memory are automatically created and destroyed by the compiler. **Stack** objects exist only while the block in which they are defined is executing; **static** objects are allocated before they are used, and they are destroyed when the program ends.

In addition to static or stack memory, every program also has a pool of memory that it can use. This memory is referred to as the **free store** or **heap**. Programs use the heap for objects that they dynamiclly allocate -- that is , for objects that the program allocates at run time. 
The program controls the lifetime of dynamic objects; our code must explicity destroy such objects when they are no longer needed.

## "heap data structure" vs "heap memory"
They are not related. "heap memory" means : a pile of stuff. 

