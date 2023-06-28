#include <iostream>
#include <C:\Users\ar00\source\repos\Cpp_01\Cpp_03\Car.h>>
using namespace std;

int main() {
	Car run99;
	Car sped77;
	run99.InitMembers("run99", 100);
	run99.ShowCarState();
	sped77.InitMembers("sped77", 100);
	sped77.ShowCarState();
	run99.Break();
	sped77.Accel();
	run99.ShowCarState();
	sped77.ShowCarState();
	return 0;
}