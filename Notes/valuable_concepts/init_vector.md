## Ways to Initialize a vector
```c++
    vector<T> v1       ; // vector that holds object of type T. Default initialization;
                         // v1 is empty
    vector<T> v2(v1)   ; // v2 has a copy of each element in v1.
    vector<T> v2 = v1  ; // Equivalent to v2(v1), v2 is a copy of the elements in v1.
    vector<T> v3(n,val); // v3 has n elements with value val.
    vector<T> v4(n)    ; // v4 has n copyies of a value-initialized object.
    vector<T> v5{a,b,c...}; // v5 has as many elements as there are initializers; elements are initialized by corresonding initializers.
    vector<T> v5 = {a,b,c...}; // Equivalent to v5{a,b,c...}
```

## List Initializer or Element Count?
- When we use parentheses, we are saying that the values we supply are to be used to construct the object.
- When we use curly braces, {...}, we're saying that, if possible, we want list initialize the object. That is, if there is a way to use the values inside the curly braces as a list of element initializers, the class will do so.

```C++
vector<int> v1(10); // v1 has ten elements with value 0
vector<int> v2{10}; // v2 has one element with value 0

vector<int> v3(10,1); // v3 has ten elements with value 1
vector<int> v4{10,1}; // v4 has two elements with values 10 and 1
```
- On the other hand, if we use braces and there is no way use the initializers to list initialize the object, then those values will be used to construct the object.
```C++
vector<string> v5{"hi"}; // list initialization: v5 has one element
vector<string> v6("hi"); // error can't construct a vector from a string literal
vector<string> v7{10}  ; // v7 has ten default-initializer elements
vector<string> v8{10,"hi"}; // v8 has ten elements with value "hi"   
```