## new and delete
- new : allocates, and optionally initializes, an object in dynamic memory and returns a pointer to the object
- delete : takes a pointer to a dynamic object, destroys the object, and frees the associated memory.

## Dynamic memory is problematic because it is surprisingly hard to ensure that we free memory at the right time.

- We forget to free the memory -- in which case we have a memory leak
- or we free the memory when there are still pointers referring to that memory -- in which case we have a pointer that refers to memory that is no longer valid.

## Solution is use smart pointers

## Two kinds of smart pointers #include \<memory\>
- shared_ptr : allows multiple pointers to refer to the same object
- unique_ptr : **owns** the object to which it points  

### A companion class 
- weak_ptr : is a wak reference to an object managed by a shared_ptr.

## The shared_ptr Class
    Like vectors, smart pointers are templates. Therefore, when we credate a smart pointer, we must supply additional information--in this case, the type to which the pointer can point.
A default initialized smart pointer holds a null pointer. We use a smart pointer in ways that are similar to using a pointer.
```C++
shared_ptr<string> p1; // shared_ptr that can point at a string
shared_ptr<list<int>> p2; // shared_ptr that can point at a list of ints

// if p;1 is not null, check whether it's the empty string
if (p1 && p1->empty())
    *p1 = "hi"; // if so, dereference p1 to assign a new value to that string
```
Advice: An object should be assigned to a smart pointer as soon as it is created. Raw pointer should not be used.

## The make_shared Function #include \<memory\>
    The safest way to allocate and use dynamic memory is to call a library function named make_shared. This function allocates and initializes an object in dynamic memory and returns a shared_ptr that points to that object.
```C++
// shared_ptr that points to an int with valu 42
shared_ptr<int> p3 = make_shared<int>(42);
// p4 points to a string with value 9999999999
shared_ptr<string> p4 = make_shared<string>(10,'9');
// p5 points to an int that is value initialized to 0
shared_ptr<int> p5 = make_shared<int>();
```
Like the sequential-container emplace members, make_shared uses its arguments to construct an object of the given type. For example, a call to make_shared<string> must pass argument(s) that match one of the string constructors. Calls to make_shared<int> can pass any value we can use to initialize an int. And so on. If we do not pass any arguments, then the object is value initialized.

## Copying and Assigning shared_ptrs
```C++
auto p = make_shared<int>(42); // object to which p points has one user
auto q(p); // p and q point the same object
// object to which p and q point has two users
```

## shared_ptr 工作原理
We can think of a shared_ptr as if it has an associated counter, usually refered to as a **reference count**.  
- **Increment**: Whenever we copy a shared_ptr, the count is incremented. For example, the counter associated with a shared_ptr is incremented when we use it to initialize another shared_ptr, when we use it as the right-hand operand of an assignment, or when we pass it to or return it from a function by value. 
- **Decrement** : The counter is decremented when we assign a new value to the shared_ptr and when the shared_ptr itself is destroyed, such as when a local shared_ptr goes out of scope.

## Note:
If you put shared_ptr in a container, and you subsequently need to use some, but not all, of the elements, rembmer to erase the elements you no longer need.

## Three reasons tedn to use dynamic memory
1. They(programs) don't know how many objects they'll need
2. They don't know the precise type of the objects they need
3. They want to share data between several bojects
## Pointers 

## Key concepts: Some symbols have multiple meanings
```C++
int i = 42;
int &r = i; // & follows a type and is part of a declaration; r is a reference
int *p;     // * follow a type is part of a declaration; p is a pointer
p = &i;     // & is used in an expression as the address-of operator
*p = i;    // * is used in an expression as the dereference operator
int &r2 = *p; // & is part of the declaration; * is the dereference operator
```
## Null Pointers
Advice: 
- INITIALIZE ALL POINTERS
- Modern C++ programs generally should avoid using NULL and use nullptr instead.
```C++
int *p1 = nullptr; // using the literal nullptr
```
It is illegal to assign an int variable to a pointer, even if the variable's value happens to be 0.
```C++
int zero = 0;
pi = zero; // error: cannot assign an int to a pointer
```

## Assignment and Pointers and Other Pointer Operations
```C++
int i = 42;
int *pi = 0; // pi is initialized but address no object
int *pi2 = &i; // pi2 initialized to hold the address of i
int *pi3; // if pi3 is defined inside a block, pi3 is uninitialized
pi3 = pi2; // pi3 and pi2 address the same object
pi2 = 0 // pi2 now addresses no object
//notice you can assignment 0 to pointer, you just can not use variable = 0 to do assignment
int ival= =1024;
pi = &ival; // value in pi is changed; pi now points to ival
// be careful , there is * in expression. dereference
*pi= 0; // value in ival is changed; pi is unchanged
int *pi = 0; //pi is a valid, null pointer
int *pi2 = &ival; // pi2 is a valid pinter that holds the address of ival
if(pi) // pi has value 0, so condition evaluates as false
    //...
if(pi2) /,/ pi2 points to ival, so it is not 0; the condition evaluates as true
    //...

```

Any nonzero pointer evaluates as true.

## References to Pointers
//開始搞了
```C++
int i = 42;
int *p;
// the type of r is to read the definition right to left.
int *&r = p; // r is a reference to the pointer p
r = &i; // r refers to a pointer; assigning &i to r makes p oint to i
*r = 0; // dereferencing r yields i, the object to which p oints; changes i to 0;
//基本跟指針一個用法。這個就是告訴你我Cplusplus就是牛！
```

## 我自己總結
當指針go out ot the scope，既然指針只是一個變量，分配在stack上自然就被destroyed了。但，它指向的memory就失去與外界的唯一連續。導致內存洩漏。這也是為什麼你用了delete操作了pointer，只要這個指針變量沒有出程序範圍，你還可以繼續使用它。
```C++
// Factory returns a pointer to a dynamically allocated object
Foo* factory(T arg){
    // process arg as appropriate
    return new Foo(arg); // caller is responsible for deleting this memory
}
void use_factory(T arg){
    Foo *p = factory(arg);
    // use p
    delete p; // remember to free the memory now that we no longer need it
    // if no delete p, p goes out of scope, but the memory to which p oints is not freed!!
}
//return p
void use_factory(T arg){
    Foo *p = factory(arg);
    // use p
    return p; // caller must delete the memory
}
```

## Resetting the Value of a Pointer after a delete...
When we delete a pointer, that pointer becomes invalid. Although the pointer is invalid, on many machines the pointer continues to hold the address of the (freed) dynamic memory. After the delete, the pointer becomes what is referred to as a dangling pointer. A dangling ointer is on that refers to memory that once held an object but no longer does so.  
Dangling pointers have all the problems of uninitialized pointers. We can avoid the problems with dangling p;ointers by deleting the memory associated with a pointer just before the pointer itself goes out of scope. That why there is no chance to use the pointer after the memory associated with the pointer is freed. If we need to keep the pointer around, we can assign nullptr to the pointer after we use delete. Doing so makes it clear that the pointer points to no object.

