#include <iostream>

int MyFuncOne(int num = 7) {
	num++;
	return num;
}

int MyFuncTwo(int num1 = 5, int num2 = 7) {
	return num1 + num2;
}

int main() {

	std::cout << "MyFuncOne with no parameter: " << MyFuncOne() << std::endl;
	std::cout << "MyFuncOne with parameter 7: " << MyFuncOne(7) << std::endl;
	std::cout << "MyFuncOne with parameter 10: " << MyFuncOne(10) << std::endl;
	std::cout << "MyFuncTwo with no parameters: " << MyFuncTwo() << std::endl;
	std::cout << "MyFuncTwo with parameters 5, 7: " << MyFuncTwo(5, 7) << std::endl;
	std::cout << "MyFuncTwo with parameters 2, 3: " << MyFuncTwo(2, 3) << std::endl;
	return 0;
}

