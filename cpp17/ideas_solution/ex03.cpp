/* Begginer
Write a program that print out the following, user will input the top number:
*****
****
***
**
*
*/

#include <iostream>
int main(){
    for (int i = 5; i>0; --i)
    {
        for (int j = 0; j<i; ++j)
            std::cout << "*";
        std::cout << std::endl;
    }
    
}