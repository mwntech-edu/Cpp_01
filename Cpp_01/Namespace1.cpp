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
		std::cout << "BestCom이 정의한 함수" << std::endl;
		PrettyFunc();
		ProgComImpl::PrettyFunc();
	}
}

void ProgComImpl::PrettyFunc() {
	std::cout << "So Pretty!! from Prog" << std::endl;
}

void ProgComImpl::SimpleFunc() {
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}

int main() {
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}