#include <iostream>
#include <stack>
#include <iterator>
#include <map>
#include <sstream>
#include <cassert>
#include <vector>
#include <stdexcept>
#include <cmath>

using namespace std;

template <typename IT>
double evaluate_rpn(IT it, IT end) {
    stack<double> val_stack;

    map<string, double(*)(double, double)>ops {
        {"+", [](double a, double b){ return a + b;}},
        {"-", [](double a, double b){ return a - b;}},
        {"*", [](double a, double b){ return a * b;}},
        {"/", [](double a, double b){ return a / b;}},
        {"^", [](double a, double b){ return pow(a , b);}},
        {"%", [](double a, double b){ return fmod(a ,b ) ;}}
    };

    auto pop_stack ([&](){ auto r (val_stack.top()); val_stack.pop(); return r;} );

    for (; it != end; ++it){
        stringstream ss {*it};
        if(double value; ss >> value ){
            val_stack.push(value);
        } else{
            assert(val_stack.size() >= 2);

            const auto r {pop_stack()};
            const auto l {pop_stack()};

            try{
                val_stack.push(ops.at(*it)(l,r));
            } catch( const out_of_range &){
                throw invalid_argument(*it);
            }
        }
    }

    return val_stack.top();
}

// $echo "3 1 2 + * 2 /" | ./code1
int main(){
    try {
        cout << evaluate_rpn(istream_iterator<string>{cin},{}) << '\n';
    } catch ( const invalid_argument &e){
        cout << "Invalid operator: " << e.what() << '\n';
    }
}