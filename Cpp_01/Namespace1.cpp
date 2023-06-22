#include <iostream>
namespace ProgComImpl {
	void PrettyFunc();
	void SimpleFunc();
}

namespace BestComImpl {
	void PrettyFunc() {
		std::cout << "So Pretty!! from Best" << std::endl;
	}
	void SimpleFunc() {
		std::cout << "BestCom�� ������ �Լ�" << std::endl;
		PrettyFunc();
		ProgComImpl::PrettyFunc();
	}
}

void ProgComImpl::PrettyFunc() {
	std::cout << "So Pretty!! from Prog" << std::endl;
}

void ProgComImpl::SimpleFunc() {
	std::cout << "ProgCom�� ������ �Լ�" << std::endl;
}

int main() {
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}