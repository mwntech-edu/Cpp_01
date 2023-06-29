#pragma once
#include <iostream>
#include "./Point.h"

class Rectangle {
private:
	Point upLeft;
	Point lowRight;
public:
	//Rectangle() {}
	Rectangle(const int& x1, const int& y1, const int& x2, const int& y2) :upLeft(x1, y1), lowRight(x2, y2) 
	{ }
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