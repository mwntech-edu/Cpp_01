#include <iostream>
using namespace std;
class SoSimple {
private:
	int num1;
	int num2;
public:
	SoSimple(int n1, int n2) : num1(n1), num2(n2){}
	SoSimple(SoSimple& copy) : num1(copy.num1), num2(copy.num2) {
		cout << "Called SoSimple(SoSimple& copy)" << endl;
	}
	void ShowSimpleData() {
		cout << num1 << endl;
		cout << num2 << endl;
	}
};
class AAA {
private:	int num;
public:
	explicit AAA(int n) : num(n) {}
};

int main() {
	//AAA obj = 3;	// AAA obj(3)
	AAA obj(3);	// explicit 사용이 이형태만 가능
	int num(20); // int num = 20;
	SoSimple sim1(15, num); //SoSimple sim2 = sim1;
	SoSimple sim2(sim1);
	sim2.ShowSimpleData();

	return 0;
}