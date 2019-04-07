## Introduction this
Member functions access the object on which they were called through an **extra**, **implict parameter** named **this**.  
When we call a member function, this is initialized with the address of the object on which the function was invoked.  

**this** is a const pointer. We cannot change the address that this holds.

Exampe:from C++Primer 5th  
> When isbn refers to members of Sales_data(e.g, bookNo), it is referring implicitly to the members of the object on which the function was called.  

## Functions That Return *this
- lvalue : what is lvalue? what is rvalue? Page 135  
    In C++, an lvalue expression yields an object or a function.  
    Roughly speaking,   
    When we use an object as an rvalue, we use the object's value*its contenst).  
    When we use an object as an lvalue, we use the object's identity(tis location in memory).  
- Functions that return a reference are lvalues, which means that they return the object itself, not a copy of the object. If we concatenate a sequence of these actions into a single expression:
```C++
// move the cursor to a given position, and set that character
myScreen.move(4,0).set('#);
```
## Reference Returns Are Lvalues
Calls to functions that return references are lvalues; other return types yield ravlues.  
A call to a function that returns a reference can be used in the same ways as any other lvalue.  

## Returning *this from a const Member Function
    if function returns a reference to const, we won't be able to embed function into a series of actions.

display is a function return const *this  
```C++
Screen myScreen;

Screen &display(std::ostream &os) const;
myScreen.display(cout).set('#'); // error
```  
## Here's a classic example
    funcitons return reference have two tasks, change the object, return the object as lvalue
```C++
char& get_val(string &str, string::size_type ix){
    return str[ix]; // get_val assumes the given index is valid
}

int main(){
    string s("a value");
    cout << s << endl;
    get_val(s,0) = 'A'; // change s[0] to A
    cout << s << endl;
    return 0;
}
```

```C++
class Screen{
    using pos = std::string::size_type;
public:
    Screen &set(char);
    Screen &set(pos,pos,char);
    // Other members as before
};

inline Screen &Screen::set(char c){
    contents[cursor] = c; // set the new value at the current cursor location
    return *this;         // return this object as an lvalue
}

inline Screen &Screen::set(pos r,pos,c,char ch){
    contents[r*width + col] = ch;
    return *this;
}
```