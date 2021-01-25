/* Example 1: Signed Integer Overflow
clang -fsanitize=undefined signed_integer_overflow_simple.c
./a.out : you can see runtime error
*/
#include <limits.h>

int main(){
    int pos = INT_MAX;
    int offset = 256;
    int new_pos = pos + offset; // Signed Integer Overflow

    return 0;
}