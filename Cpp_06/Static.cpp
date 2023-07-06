#include <iostream>
#include "Person.h"
using namespace std;
//extern int g;
static int g = 1000;

void Counter() {
	//int cnt = 0;
	static int cnt = 0;
	cnt++;
	cout << "Current cnt: " << cnt << endl;
}
int main() {
	cout << g << endl;
	for (int i = 0; i < 10; i++)
	{
		Counter();
	}

	Person p1("Name of All", 10);
	p1.PrintCnt();
	p1.ShowPersonInfo();
	Person p2(p1);
	p2.SetAge(12);
	Person::PrintCnt();
	p2.ShowPersonInfo();
	Person p3(p1);
	p3.SetAge(13);
	Person::PrintCnt();
	p3.ShowPersonInfo();

	return 0;
}