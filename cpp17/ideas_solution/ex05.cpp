/*
5. Write a program that pring out the following triangle, the user will input the bottom number:
*
***
*****
*******
*/

#include <iostream>
int main(){
    int j = 0;
    for (int i = 0; i<4; ++i)
    {
        j = 0;
        while(j<i*2+1)
        {
            j=j+1;
            std::cout << "*";
        }
        std::cout << std::endl;
    }    
}
