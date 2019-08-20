#include <iostream>
#include <algorithm>
#include <vector>

int main() {
	// Data to operator on
	std::vector<int> vec{ -10,10,20,20,30 };

	//count_if is the algorithm working on data
	std::cout << "Number of positive integers are: "
		<< std::count_if(begin(vec), end(vec),
			[&](int a) { return a > 0; })
		<< std::endl;

	return 0;
}