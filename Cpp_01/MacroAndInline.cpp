#include <iostream>

#define SQUARE(x) ((x) * (x))

int SquareFun(int a) {
	return a * a;
}

inline int SquareInline(int a) {
	return a * a;
}

int main() {
	std::cout << SQUARE(5) << std::endl;

	std::cout << SquareFun(5) << std::endl;

	std::cout << SquareInline(5) << std::endl;

	return 0;
}