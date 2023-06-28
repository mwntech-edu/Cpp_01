#pragma once // 헤더 중복 포함 방지
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
	void InitMembers(char const* ID, int fuel);
	void ShowCarState();
	void Accel();
	void Break();
};
