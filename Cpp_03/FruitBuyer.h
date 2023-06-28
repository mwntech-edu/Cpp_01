#pragma once
#include <iostream>
#include <C:\Users\ar00\source\repos\Cpp_01\Cpp_03\FruitSeller.h>

class FruitBuyer {
	int myMoney; 
	int numOfApple;
public:
	void InitMembers(int money) {
		myMoney = money;
		numOfApple = 0;
	}
	void BuyApples(FruitSeller& seller, int money) {
		numOfApple += seller.SaleApples(money);
		myMoney -= money;
	}
	void ShowBuyResult() {
		std::cout << "���� �ܾ�: " << myMoney << std::endl;
		std::cout << "��� ����: " << numOfApple << std::endl;
	}
};