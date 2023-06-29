#include <iostream>
using namespace std;

class SoSimple {
private:
	int const num1;
	int& num2;
	SoSimple(int n, int& ref, int a) : num1(n), num2(ref)
	{
		num2 = 0;
	}
public:
	//SoSimple() : num1(1)
	//{
	//	//num1 = 1;
	//	num2 = 2;
	//}
	SoSimple(int n, int& ref) : num1(n), num2(ref)
	{
		num2 = 0;
	}
};

int main() {
	int k = 100;
	SoSimple so1(10, k);
	//SoSimple so2;
	cout << k << endl;
	return 0;
}