#include <algorithm>
#include <iterator>
#include <deque>

template < class T >
class DynamicArray{
private:
    std::deque<T> dynamicArray;
    typename std::deque< T >::iterator pos;
public:
    DynamicArray() { initialize(); }
    ~DynamicArray() {}

    void initialize() {
        pos = dynamicArray.begin();
    }

    void appendValue( T element ){
        dynamicArray.push_back( element );
    }

    bool hasNextValue(){
        return pos != dynamicArray.end();
    }

    T getValue(){
        return *pos++; // return pos and ++
    }
};