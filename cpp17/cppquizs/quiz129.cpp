//"" is not char所以会有crash
#include <vector>
#include <iostream>

using namespace std;

int main() {
  vector<char> delimiters = { ",", ";" };  
  cout << delimiters[0];
}