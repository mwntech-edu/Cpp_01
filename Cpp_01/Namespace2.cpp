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
			std::cout << "서울고 A반 철수 : " << Aban::chulsu << std::endl;
			std::cout << "서울고 B반 철수 : " << chulsu << std::endl;
			std::cout << "부산고 A반 철수 : " << Pusan::Aban::chulsu << std::endl;
			std::cout << "부산고 B반 철수 : " << Pusan::Bban::chulsu << std::endl;
		}
	}
}
int main() {
	Seoul::Bban::print();
	return 0;
}