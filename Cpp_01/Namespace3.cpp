#include <iostream>
//using std::cout;
//using std::endl;
using namespace std;

int val = 100;

int main() {

	int val = 20;
	cout << "Hello World!! Local val: " <<  val << " Global val: " << ::val << endl;

	return 0;
}

// C++  :: . ->
//        Scope::ClassName.Function()
//        Scope::ClassName->FunByPointer()
// C#    . 
//        Namespace.ClassName.Function()
