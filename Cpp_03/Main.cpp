#include <iostream>
//#include <C:\Users\ar00\source\repos\Cpp_01\Cpp_03\FruitBuyer.h>
#include "./FruitBuyer.h"

using namespace std;

int main() {
	//FruitSeller seller;
	FruitSeller* seller = new FruitSeller;
	seller->InitMembers(1000, 20, 0);

	FruitBuyer buyer;
	buyer.InitMembers(5000);

	buyer.BuyApples(*seller, 2000);

	cout << "과일 판매자의 현황" << endl;
	seller->ShowSalesResult();
	cout << "과일 구매자의 현황" << endl;
	buyer.ShowBuyResult();

	delete seller;
	return 0;
}