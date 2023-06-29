#include <iostream>
using namespace std;

class SoSimple {
private:
	int num1;
	int num2;
public:
	SoSimple(int n1, int n2) : num1(n1), num2(n2) {}
	SoSimple(SoSimple& copy) : num1(copy.num1), num2(copy.num2) {
		cout << "Called SoSimple(SoSimple& copy)" << endl;
	}
	void ShowSimpleData() {
		cout << num1 << endl;
		cout << num2 << endl;
	}
};

void SimpleFuncObj(SoSimple ob) {
	ob.ShowSimpleData();
}

int main() {
	SoSimple obj(7, 8);
	cout << "�Լ� ȣ�� ��" << endl;
	SimpleFuncObj(obj);	// ���� �����ڰ� ȣ���
	cout << "�Լ� ȣ�� ��" << endl;
	return 0;
}

