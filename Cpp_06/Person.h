#pragma once
#include <iostream>
using namespace std;

class Person {
private:
	char* name;
	int age;
	static int cnt;
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
		cnt++;
	}
	Person(Person const& copy) : age(copy.age) {
		int len = strlen(copy.name) + 1;
		name = new char[len];
		strcpy_s(name, len, copy.name);
	}
	void ShowPersonInfo() const {
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	static void PrintCnt() { cout << "cnt: " << cnt << endl; }
	~Person() {
		delete[] name;
		cout << "called destructor!" << endl;
	}
};
int Person::cnt = 0;
