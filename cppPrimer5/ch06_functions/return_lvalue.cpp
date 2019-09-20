#include <iostream>
#include <string>
char &get_val(std::string &str, std::string::size_type ix)
{
    return str[ix]; // get_val assumes the given index is valid
}

int main()
{
    std::string s("a value");
    std::cout << s << std::endl; //print a value
    get_val(s,0) = 'A'; // changes s[0] to A 
    std::cout << s << std::endl; // print A value
    return 0;
}