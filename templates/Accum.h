//
//  Accum.h
//  LearnCPP
//
//  Created by ChengJixuan on 7/10/19.
//  Copyright © 2019 ChengJixuan. All rights reserved.
//

#ifndef Accum_h
#define Accum_h

template <class T>
class Accum{
private:
    T total;
public:
    Accum(T start): total(start) {}
    
    T operator+=(T const& t){
        return total = total + t;
    }
    
    T GetTotal() const {
        return total;
    }
};
#endif /* Accum_h */
