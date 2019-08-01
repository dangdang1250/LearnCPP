#include <iostream>
#include <iterator>
#include <algorithm>
#include "dynamicarray.h"
using namespace std;

int main() {
	
	DynamicArray<int> intArray;

	intArray.appendValue(100);
	intArray.appendValue(300);
	intArray.appendValue(200);
	intArray.appendValue(400);

	intArray.initialize();

	cout << "\nInt DynamicArray values are ..." << endl;

	while (intArray.hasNextValue())
		cout << intArray.getValue() << "\t";
	
	cout << endl;

	DynamicArray<char> charArray;
	charArray.appendValue('H');
	charArray.appendValue('E');
	charArray.appendValue('L');
	charArray.appendValue('L');
	charArray.appendValue('O');

	charArray.initialize();

	cout << "\nChar DynamicArray values are ..." << endl;

	while (charArray.hasNextValue())
		cout << charArray.getValue() << "\t";

	cout << endl;

	return 0;
}