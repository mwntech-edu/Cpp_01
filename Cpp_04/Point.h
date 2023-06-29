#pragma once
#include <iostream>
class Point {
private:
	int x;
	int y;
public:
	//Point(){}
	Point(const int& xpos, const int& ypos) : x(xpos), y(ypos)
	{
		//SetX(xpos); SetY(ypos);
	}
	
	int GetX() const {  return x; } 
	int GetY() const {  return y; }
	bool SetX(int xpos) {
		if (0 > xpos || xpos > 100) {
			std::cout << "벗어난 범위 값 " << std::endl;
			return false;
		}
		x = xpos;
		return true;
	}
	bool SetY(int ypos) {
		if (0 > ypos || ypos > 100) {
			std::cout << "벗어난 범위 값 " << std::endl;
			return false;
		}
		y = ypos;
		return true;
	}
};