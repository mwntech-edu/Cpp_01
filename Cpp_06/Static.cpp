#include <iostream>
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

	return 0;
}