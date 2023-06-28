#pragma once
#include <iostream>
#include <C:\Users\ar00\source\repos\Cpp_01\Cpp_04\Point.h>
class Rectangle {
private:
	Point upLeft;
	Point lowRight;
public:
	bool InitMembers(const Point& ul, const Point& lr) {
		if (ul.GetX() > lr.GetX() || ul.GetY() > lr.GetY()) {
			std::cout << "잘못된 위치 " << std::endl;
			return false;
		}
		upLeft = ul;
		lowRight = lr;
		return true;
	}
	void ShowRecInfo() const {
		std::cout << "Up Left: " << upLeft.GetX() << "," << upLeft.GetY() << std::endl;
		std::cout << "Low Right: " << lowRight.GetX() << "," << lowRight.GetY() << std::endl;
	}
};