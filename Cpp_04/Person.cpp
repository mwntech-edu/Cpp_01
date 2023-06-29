#include <iostream>
using namespace std;

class Person {
private:
	char* name;
	int age;
public:
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
	return 0;
}