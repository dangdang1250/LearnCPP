#include <iostream>
#include <iterator>
#include <stack>
#include <algorithm>

using namespace std;

int main(){
    stack<string> spoken_languages;

    spoken_languages.push( "French");
    spoken_languages.push( "German");
    spoken_languages.push( "English");
    spoken_languages.push( "Hindi");
    spoken_languages.push( "Sanskrit");
    spoken_languages.push( "Tamil" );
    cout << "\nValues in Stack are ... " << endl;
    while( !spoken_languages.empty() ){
        cout << spoken_languages.top() << endl;
        spoken_languages.pop(); //remove
    }

    cout << endl;
    return 0;
}