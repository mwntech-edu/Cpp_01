#include <iostream>

using namespace std;
int main() {
	int* ptr = new int;
	int& ref = *ptr;
	int* (&refptr) = ptr;
	ref = 20;

	int* arr1 = new int[3];
	double* arr2 = new double[7];
	*arr1 = 2;
	*(arr1 + 1) = 4;
	*(&arr1[1] + 1) = 8;
	for (int i = 0; i < 7; i++) arr2[i] = i;
	
	cout << *ptr << endl;
	cout << ref << endl;
	cout << *refptr << endl;
	cout << refptr << endl;
	cout << "ptr val: " << ptr << endl;
	cout << "ref addr: " << & ref << endl;

	cout << "sizeof arr1 : " << sizeof(*arr1) << endl;
	for (int i = 0; i < 3; i++)
		cout << arr1[i] << endl;
	cout << endl;
	for (int i = 0; i < 7; i++) cout << arr2[i] << endl;
	delete ptr;
	delete[] arr1;
	delete[] arr2;
	return 0;
}
