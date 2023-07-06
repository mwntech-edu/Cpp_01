#include <iostream>
#include "Person.h"
using namespace std;


void Counter() {
	//int cnt = 0;
	static int cnt = 0;
	cnt++;
	cout << "Current cnt: " << cnt << endl;
}

int main() {
	for (int i = 0; i < 10; i++)
	{
		Counter();
	}

	Person p1("chulsu", 10);
	p1.PrintCnt();
	Person p2("Tom", 12);
	Person::PrintCnt();
	Person p3("Nick", 14);
	Person::PrintCnt();

	return 0;
}