#pragma once
#include <iostream>
#include <iterator>
#include <algorithm>

template <typename T, int size>
void sort(T input[]) {
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			if (input[i] < input[j])
				std::swap(input[i], input[j]);
		}
	}
}

extern void mytest();
