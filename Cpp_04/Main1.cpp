#include <iostream>
//#include <C:\Users\ar00\source\repos\Cpp_01\Cpp_04\Rectangle.h>
#include "./Rectangle.h"
using namespace std;

int main() {
	Point pos1(1, 4); //(X) = { -2, 4 };
	
	Point pos2(3, 8);
	
	Rectangle rec;
	rec.InitMembers(pos1, pos2);

	rec.ShowRecInfo();
	return 0;
}