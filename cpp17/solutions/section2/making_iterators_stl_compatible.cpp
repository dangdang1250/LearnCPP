#include <iostream>
#include <algorithm>
#include <iterator>

class num_iterator {
    int i;
public:
    explicit num_iterator(int position = 0): i{position} {}

    int operator*() const { return i;} 

    num_iterator& operator++(){
        ++i;
        return *this;
    }
    bool operator!=(const num_iterator &other) const {
        return i != other.i;
    }

    bool operator==(const num_iterator &other) const {
        return !(*this!=other); //reuse operator!=
    }
    
};

class num_range{
    int a;
    int b;
public:
    num_range(int from, int to): a{from}, b{to}{
    }

    num_iterator begin() const { return num_iterator{a};}
    num_iterator end() const { return num_iterator{b};}
};

int main(){
    num_range r {100,110};

    //auto [min_it, max_it] (std::minmax_element(begin(r), end(r)));
    //auto [min_it, max_it] = std::minmax_element(begin(r), end(r));
    //std::cout << *min_it << " = " << *max_it;

    const auto v = { 3, 9, 1, 4, 2, 5, 9 };
    const auto [min, max] = std::minmax_element(begin(v), end(v));
 
    std::cout << "min = " << *min << ", max = " << *max << '\n';
    std::cout << '\n';

    return 0;
}