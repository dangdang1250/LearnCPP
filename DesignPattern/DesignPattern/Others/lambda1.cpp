#include <vector>
#include <iostream>
#include <algorithm> // for count_if

int my_first_lambda() {
	std::vector<int> veci{ -10,10,-20,20,30 };
	std::cout << "Number of positive integers is: "
		<< count_if(begin(veci), end(veci), [&](int a) {return a > 0; })
		<< std::endl;
	return 0;
}

int my_second_lambda() {
	std::vector<int> veci{ 10,11,12,13,14 };
	const int m = 2;

	// named lambda
	auto even_print = [m](int a) { if (a % m == 0) std::cout << a << ","; };

	std::cout << "Even numbers are: ";
	for_each(begin(veci), end(veci), even_print);
	std::cout << std::endl;

	return 0;
}