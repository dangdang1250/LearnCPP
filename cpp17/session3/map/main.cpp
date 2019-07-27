#include <iostream>
#include <map>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main(){
    map<string, long> contacts;

    contacts["Jegan"] = 1234434333;
    contacts["Meena"] = 29723947203;
    contacts["Nitesh"] = 2034203948;
    contacts["Sriram"] = 2304823089;

    auto pos = contacts.find("Sriram");

    if (pos != contacts.end() )
        cout << "\nMobile number of " << pos->first << " is " << pos->second << endl;
    else
        cout << "\nContact not found." << endl;

    return 0;
}