#include <iostream>
#include <map>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main(){
    multimap<string, long> contacts={
        {"Jegan" ,1234434333 },
        {"Meena" ,2972394720 },
        {"Nitesh",2034203948 },
        {"Sriram",2304823089 },
        {"Nitesh",5554203948 }
    };

    auto pos = contacts.find("Nitesh");
    int count = contacts.count("Nitesh");
    int index = 0;
    
    while( pos != contacts.end() )
    {
        cout << "\nMobile number of " << pos->first << " is " << 
        pos->second << endl;
        ++index;
        ++pos;
        if (index == count) break;
    }
    return 0;
}