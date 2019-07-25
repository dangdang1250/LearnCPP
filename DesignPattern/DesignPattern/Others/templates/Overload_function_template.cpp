#include <iostream>
#include <array>

using namespace std;

namespace overload {
	void sort(array<int, 6> data) {
		cout << "Non-template sort function invoked..." << endl;
		int size = data.size();

		for (int i = 0; i < size; ++i){
			for (int j = 0; j < size; ++j) {
				if (data[i] < data[j])
					swap(data[i], data[j]);
			}
		}
	}

	template <typename T, int size>
	void sort(array<T, size> data) {
		cout << "Template sort function invoked with one argument..." << endl;
		for (int i = 0; i < size; ++i) {
			for (int j = 0; j < size; ++j) {
				if (data[i] < data[j])
					swap(data[i], data[j]);
			}
		}
	}

	template <typename T>
	void sort(T data[], int size) {
		cout << "Template sort function invoked with two argument ..." << endl;
		for (int i = 0; i < size; ++i) {
			for (int j = 0; j < size; ++j) {
				if (data[i] < data[j])
					swap(data[i], data[j]);
			}
		}
	}

	void mytest() {
		array<int, 6> a = { 10,50,40,30,60,20 };
		sort(a);

		double d[] = { 10.3,12.1,4.5,5.56,1.31,81.5,12.86 };
		sort<double>(d, 7);


	}
}

