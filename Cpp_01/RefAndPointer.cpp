#include <iostream>
using namespace std;

int main() {

	int num1 = 2010;
	int& num2 = num1;

	int* intPtr = &num1;
	int* intPtr2 = &num2;

	cout << &num1 << " : " << &num2 << endl;
	cout << num1 << " : " << num2 << endl;

	num1 = 8;

	cout << &num1 << " : " << &num2 << endl;
	cout << num1 << " : " << num2 << endl;

	int arr[3] = { 1, 3, 5 };
	int& ref2 = arr[1];
	cout << ref2 << " = " << arr[1] << endl;
	ref2 = 7;
	cout << ref2 << " = " << arr[1] << endl;
}