#include "myalgorithm.h"

using namespace std;

// 编译可以通过。但是用有问题。还没研究出来
// 全部移动到.hpp文件里就没有问题了。
//template <typename T, int size>
//void MyAlgorithm<T, size>::sort(array<T, size>& data) {
//	for (int i = 0; i < size; ++i) {
//		for (int j = 0; j < size; ++j) {
//			if (data[i] < data[j]) {
//				swap(data[i], data[j]);
//			}
//		}
//	}
//}

// template <typename T, int size>
// inline void MyAlgorithm<T, size>::sort(T data[size]) {
// 	for (int i = 0; i < size; ++i) {
// 		for (int j = 0; j < size; ++j) {
// 			if (data[i] < data[j]) {
// 				swap(data[i], data[j]);
// 			}
// 		}
// 	}
// }