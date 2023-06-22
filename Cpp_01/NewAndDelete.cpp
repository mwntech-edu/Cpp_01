#include <iostream>
#include <string>

using namespace std;
int main() {
	int* ptr = new int;
	int& ref = *ptr;
	int* (&refptr) = ptr;
	ref = 20;
	cout << *ptr << endl;
	cout << ref << endl;
	cout << *refptr << endl;

	cout << refptr << endl;
	cout << &ref << endl;
	return 0;
}