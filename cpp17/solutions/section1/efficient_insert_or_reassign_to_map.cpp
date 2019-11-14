#include <iostream>
#include <functional>
#include <list>
#include <map>
// g++ -std=c++17 -o code1 filename
using namespace std;

struct billionaire {
    string name;
    double dollars;
    string country;
};

int main(){
    list<billionaire> billionaires {
        {"Bill Gates", 86.0, "USA"},
        {"Warren Buffet", 75.6, "USA"},
        {"Jeff Bezos", 72.8, "USA"},
        {"Amancio Ortega", 71.3, "Spain"},
        {"Mark Zuckerberg", 56.0, "USA"},
        {"Carlos Slim", 54.5, "Mexico"},
        {"Bernard Arnault", 41.5, "France"},
        {"Liliane Bettencourt", 39.5, "France"},
        {"Wang Jiangline", 31.3, "China"},
        {"Li Ka-shing", 31.2, "Hong Kong"}
    };

    map<string, pair<const billionaire, size_t>> m;
    for (const auto &b : billionaires){
        // c++17 new feature
        auto[iterator, success] = m.try_emplace(b.country, b, 1);
        // really like python now, if no this country yet, add, if has , add count
        if (!success){
            iterator->second.second +=1;
        }
    }

    for(const auto &[key, value] : m){
        const auto &[b, count] = value;
        cout << b.country << " : " << count << " billionaries. Richest is "
             << b.name << " with " << b.dollars << " B$\n";
    }

    return 0;
}