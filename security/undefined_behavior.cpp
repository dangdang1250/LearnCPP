/* Example 4: Optimization of function assumes no Undefined Behavior
clang++ undefined_behavior.cpp &&& ./a.out
class++ -O1 undefined_behavior.cpp && ./a.out
*/
int test(int x) { return (x+1) > x;} // Doing the same thing, but compiler optimize will return true

// Signed Integer Overflow when x is INT_MAX
int main(){
    cout << ((INT_MAX + 1) > INT_MAX) << "\n"; // Signed Integer Overflow
    cout << test(INT_MAX) << "\n";
    return 0;
}