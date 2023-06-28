#include <iostream>
using namespace std;

namespace CAR_CONST {
	enum {
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEN_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10,
	};
}
class Car {
private:			//
	
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;

public:			//
	void InitMembers(char const * ID, int fuel) {
		strcpy_s(gamerID, ID);
		fuelGauge = fuel;
		curSpeed = 0;
	}
	void ShowCarState();

	void Accel(){
		curSpeed += CAR_CONST::ACC_STEP;
		if (curSpeed > CAR_CONST::MAX_SPD) {
			curSpeed = CAR_CONST::MAX_SPD;
		}
		return;
	}
	void Break(){
		if (curSpeed < CAR_CONST::BRK_STEP) {
			curSpeed = 0;
			return;
		}
		curSpeed -= CAR_CONST::BRK_STEP;
	}
};

inline void Car::ShowCarState() {
	cout << "소유자ID: " << gamerID << endl;
	cout << "연료량: " << fuelGauge << "%" << endl;
	cout << "현재속도: " << curSpeed << "km/s" << endl;
}

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