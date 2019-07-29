#include <iostream>


template <typename T1, typename T2, typename T3>
class MyTemplateClass{
public:
    void F1( T1 t1, T2 t2, T3 t3){
        std::cout << "\nPrimary Template Class - Function F1 invoked ... " << std::endl;

        std::cout << "Value of t1 is " << t1 << std::endl;
        std::cout << "Value of t2 is " << t2 << std::endl;
        std::cout << "Value of t3 is " << t3 << std::endl;
    }

    void F2(T1 t1, T2 t2){
        std::cout << "\nPrimary Template Class - Function F2 invoked ... " << std::endl;

        std::cout << "Value of t1 is " << t1 << std::endl;
        std::cout << "Value of t2 is " << 2 * t2 << std::endl;
    }
};

//name are same
template <typename T1, typename T2, typename T3>
class MyTemplateClass<T1, T2*, T3*> : public MyTemplateClass<T1, T2, T3> {
public:
    void F1(T1 t1, T2* t2, T3* t3){
        std::cout << "\nPartially Specialized Template Class - Function F1 invoked ... " << std::endl;

        std::cout << "Value of t1 is " << t1 << std::endl;
        std::cout << "Value of t2 is " << *t2 << std::endl;
        std::cout << "Value of t3 is " << *t3 << std::endl;
    }
};