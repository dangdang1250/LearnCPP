#pragma once

class MyClass {
public:
	MyClass();
	static void Callback(MyClass* instance, int x);
private:
	int private_x;
};

