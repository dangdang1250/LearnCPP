#include <iostream>
int main() {
	int count = 0;
	thread thread1(
		[=]()mutable {
		while (count < 10)
			std::cout << "thread1: " << ++count << "\n";
	}
	);

	std::cout << "this is main\n";
	thread1.join();
	return 0;

}