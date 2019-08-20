## Lambda expression
- Minimum
```c++
[]{};

[]()->int <mutable, constexpr>{};

vector<int> v1 = {3,1,7,9};
// access v1 by copy
[v1]() 
    { 
        for (auto p = v1.begin(); p != v1.end(); p++) 
        { 
            cout << *p << " "; 
        } 
    }; 

```

### Capture list
- [] : an empty capture list. 
- [] : an empty capture list. For such lambda expressions, data is obtained from arguements or from non-local variables.
- [&] : implicitly capture by reference. All local names can be used. All local variables are accessed by reference.
- [=] : implicitly capture by value. All local names can be used. All names refer to copies of the local variables taken at the point of call of the lambda expression.
- [capture-list]
- [&, capture-list]
- [=, capture-list]