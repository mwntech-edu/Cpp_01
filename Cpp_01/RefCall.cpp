#include<iostream>
using namespace std;
int& RefRetFuncOne(int& ref) {
	return ++ref;
}
int RefRetFuncTwo(int& ref) {
	return ++ref;
}
int& RetRefFunc(int n) {
	int num = 20;
	num += n;
	return num;
}
int Adder(int const& num1, int const num2) { return num1 + num2; }
int main() {
	int num1 = 1;
	//int& num2 = RefRetFuncOne(num1);
	//int num2 = RefRetFuncOne(num1);
	int num2 = RefRetFuncTwo(num1);
	//int& num2 = RefRetFuncTwo(num1); // (X)
	num1 += 1;
	num2 += 100;
	cout << num1 << " : " << num2 << endl;

	int& refRet = RetRefFunc(10);
	//num2 = RefRetFuncTwo(num1);
	//refRet++;
	cout << refRet << endl;
	cout << refRet << endl;

	int const n1 = 20;
	int const& refN1 = n1;
	cout << refN1 << endl;
	int const& refC = 30;
	cout << Adder(10, refC) << endl;
	return 0;
}