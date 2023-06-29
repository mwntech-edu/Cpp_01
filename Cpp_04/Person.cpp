#include <iostream>
using namespace std;

class Person {
private:
	char* name;
	int age;
public:
	Person() {
		name = NULL;
		age = 0;
	}
	Person(char const* myname, int myage) {
		int len = strlen(myname) + 1;		// chulsu = 5 + 1
		name = new char[len];
		strcpy_s(name, len, myname);
		age = myage;
	}
	void ShowPersonInfo() const {
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	~Person() {
		delete[] name;
		cout << "called destructor!" << endl;
	}
};



int main() {
	Person chul("철수", 20);
	chul.ShowPersonInfo();

	Person arr[3];	// Person 3개
	Person* parr = new Person[3]; // 포인터 1개 + Person 3개

	Person* arrP[3]; // 포인터 3개
	arrP[0] = new Person("Chulsu", 20);
	arrP[1] = &chul;
	arrP[2] = new Person("영희", 23);
	
	for (int i = 0; i < sizeof(arrP) / sizeof(arrP[0]); i++)
	{
		arrP[i]->ShowPersonInfo();
	}

	return 0;
}