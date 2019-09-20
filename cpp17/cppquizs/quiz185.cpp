#include <iostream>
//这道题目说明template 会根据不同的数据类型创建不同的函数
template <typename T> void f() {
  static int stat = 0;
  std::cout << stat++;
}

int main() {
  f<int>();
  f<int>();
  f<const int>();
}
