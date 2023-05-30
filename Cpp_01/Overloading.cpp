#include <iostream>

int MyFunc(int num) {
	num++;
	return num;
}

int MyFunc(int a, int b) {
	return a + b;
}

int main() {

	std::cout << "MyFunc with one integer: " << MyFunc(20) << std::endl;
	std::cout << "MyFunc with 2 integers: " << MyFunc(30, 40) << std::endl;
	return 0;
}
