#pragma once
#include <iostream>
using namespace std;
static int g = 777;

class Person {
private:
	char* name;
	int age;
	static int cnt;
public:
	Person() {
		if (cnt == 0) cout << "Error " << endl;
		name = NULL;
		age = 0;
		cnt++;
	}
	Person(char const* myname, int myage) {
		if (cnt == 0) {
			int len = strlen(myname) + 1;		// chulsu = 6 + 1
			name = new char[len];
			strcpy_s(name, len, myname);
			cout << "Heap allocated!! " << endl;
		}
		age = myage;
		cnt++;
	}
	Person(Person& copy) : name(copy.name), age(copy.age) { cnt++; }
	void SetAge(int n) { age = n; }
	void ShowPersonInfo() const {
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
		cout << g << endl;
	}
	static void PrintCnt() { cout << "cnt: " << cnt << endl; }
	~Person() {
		if (cnt > 0) {
			cnt--;
			if (cnt == 0) {
				delete[] name;
				cout << "Heap deleted!" << endl;
			}

		}
		cout << "called destructor!" << age << endl;
	}
};
int Person::cnt = 0;
