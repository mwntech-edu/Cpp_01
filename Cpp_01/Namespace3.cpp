#include <iostream>
//using std::cout;
//using std::endl;
using namespace std;

int val = 100;

int main() {

	int val = 20;
	int* intPtr = &val;
	int** intPPtr = &intPtr;
	bool testTrue = true;
	bool testFalse = false;
	bool* boolPtr = &testTrue;
	bool* boolPtr2 = &testFalse;

	cout << "Hello World!! Local val: " <<  val << " Global val: " << ::val << endl;
	
	cout << "True : " << testTrue << " False : " << testFalse << endl;

	cout << "size of 1 " << sizeof(1) << " byte " << endl;
	cout << "size of int " << sizeof(int) << " byte " << endl;
	cout << "size of true " << sizeof(true) << " byte " << endl;
	cout << "size of bool " << sizeof(bool) << " byte " << endl;
	cout << "size of long " << sizeof(long) << " byte " << endl;
	cout << "size of pointer " << sizeof(int*) << " byte " << endl;

	return 0;
}

// C++  :: . ->
//        Scope::ClassName.Function()
//        Scope::ClassName->FunByPointer()
// C#    . 
//        Namespace.ClassName.Function()
