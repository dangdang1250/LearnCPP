#include <iostream>
#include <algorithm>
#include <array>
#include <iterator>

template <typename T, int size>
class MyAlgorithm {
public:
	MyAlgorithm() {}
	~MyAlgorithm() {}

	void sort(std::array<T, size>& data) {
		for (int i = 0; i < size; ++i) {
			for (int j = 0; j < size; ++j) {
				if (data[i] < data[j]) {
					std::swap(data[i], data[j]);
				}
			}
		}
	}

	//void sort(T data[size]);
	
 	void sort(T data[size]) {
		for (int i = 0; i < size; ++i) {
			for (int j = 0; j < size; ++j) {
				if (data[i] < data[j]) {
					std::swap(data[i], data[j]);
				}
			}
		}
	}
};