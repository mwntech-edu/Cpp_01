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
	SoSimple& AddNum(int n) {
		num1 += n;
		return *this;
	}
	void ShowSimpleData() {
		cout << num1 << endl;
		cout << num2 << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob) {
	ob.ShowSimpleData();
	cout << " return ���� " << endl;
	return ob;
}

int main() {
	// Case2
	SoSimple obj(7, 8);
	cout << "�Լ� ȣ�� ��" << endl;
	SimpleFuncObj(obj);	// ���� �����ڰ� ȣ���
	cout << "�Լ� ȣ�� ��" << endl;

	// Case3
	SoSimple obj2(7, 10);
	SimpleFuncObj(obj2).AddNum(30).ShowSimpleData();
	//ob.AddNum(30);
	//ob.ShowSimpleData();

	obj2.ShowSimpleData();
	return 0;
}

