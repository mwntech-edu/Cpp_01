#include <iostream>
//using namespace Pusan;
//using namespace Seoul;

namespace Pusan {
	namespace Aban {
		int chulsu = 170;
	}

	namespace Bban {
		int chulsu = 171;
	}
}

namespace Seoul {
	namespace Aban {
		int chulsu = 175;
	}

	namespace Bban {
		int chulsu = 176;
		void print() {
			std::cout << "����� A�� ö�� : " << Aban::chulsu << std::endl;
			std::cout << "����� B�� ö�� : " << chulsu << std::endl;
			std::cout << "�λ�� A�� ö�� : " << Pusan::Aban::chulsu << std::endl;
			std::cout << "�λ�� B�� ö�� : " << Pusan::Bban::chulsu << std::endl;
		}
	}
}
int main() {
	Seoul::Bban::print();
	return 0;
}