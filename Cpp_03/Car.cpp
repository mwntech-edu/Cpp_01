#include <iostream>
//#include <C:\Users\ar00\source\repos\Cpp_01\Cpp_03\Car.h>
#include "./Car.h"
using namespace std;

void Car::InitMembers(char const* ID, int fuel) {
	strcpy_s(gamerID, ID);
	fuelGauge = fuel;
	curSpeed = 0;
}

void Car::ShowCarState() {
	cout << "소유자ID: " << gamerID << endl;
	cout << "연료량: " << fuelGauge << "%" << endl;
	cout << "현재속도: " << curSpeed << "km/s" << endl;
}

void Car::Accel() {
	curSpeed += CAR_CONST::ACC_STEP;
	if (curSpeed > CAR_CONST::MAX_SPD) {
		curSpeed = CAR_CONST::MAX_SPD;
	}
	return;
}
void Car::Break() {
	if (curSpeed < CAR_CONST::BRK_STEP) {
		curSpeed = 0;
		return;
	}
	curSpeed -= CAR_CONST::BRK_STEP;
}