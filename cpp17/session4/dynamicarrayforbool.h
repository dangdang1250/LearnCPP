#include <iostream>
#include <bitset>
#include <algorithm>
#include <iterator>

//specialization class 
template <>
class DynamicArray<bool>{
private:
    std::deque< std::bitset<8> *> dynamicArray;
    std::bitset<8> oneByte;
    typename std::deque< std::bitset<8> * >::iterator pos;

    int bitSetIndex;

    int getDequeIndex () {
        return (bitSetIndex) ? (bitSetIndex/8) : 0;
    }

public:
    DynamicArray(){
        bitSetIndex = 0;
        initialize();
    }

    ~DynamicArray() {}

    void initialize(){
        pos = dynamicArray.begin();
        bitSetIndex = 0;
    }

    void appendValue( bool value ){
        int dequeIndex = getDequeIndex();

        std::bitset<8> *pBit = nullptr;

        if ( ( dynamicArray.size() == 0) || dequeIndex>= (dynamicArray.size() ))
        {
            pBit = new std::bitset<8>();
            pBit->reset();
            dynamicArray.push_back( pBit );
        }

        if ( !dynamicArray.empty() ){
            pBit = dynamicArray.at( dequeIndex);
        }

        pBit->set( bitSetIndex % 8, value);
        ++bitSetIndex;
    }

    bool hasNextValue(){
        return (bitSetIndex < ( ( dynamicArray.size() * 8 )));
    }

    bool getValue()
    {
        int dequeIndex = getDequeIndex();
        std::bitset<8> *pBit = dynamicArray.at(dequeIndex);
        int index = bitSetIndex % 8;
        ++bitSetIndex;
        return (*pBit)[index] ? true : false;
    }


};