// And even if conversion functions don't have a return type specified in the same way as normal functions, 
// they do have a return type
#include <iostream>

struct Foo {
  operator auto() {
    std::cout << "A";
    return 1;
  }
};

int main() {
  int a = Foo();
  std::cout << a;
}