/* Example 2: Disppearing memset 
Please see below comments
*/
int main(){
    char pwd[64];
    if (GetPasswordFromUser(pwd, sizeof(pwd))) {
        if (ConnectToMainframe(pwd)){
            // Interaction with mainfram
        }
    }

    memset(pwd,0 sizeof(pwd)); // Warning here: The memset() is optimized out.
    // Compilers are allowed to assume that Undefined Behavior does not occur, which leads to 
    // generated code that is very different from what the author intended.
    return 0;
}
