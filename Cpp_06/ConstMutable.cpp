#include <iostream>
using namespace std;
class CountryArea {
public:
	const static int RUSSIA = 1707540;
	const static int CANADA = 998467;
	const static int CHINA = 957290;
	const static int SOUTH_KOREA = 9922;
};
class SoSimple {
private:
	int num1;
	mutable int num2;
public:
	SoSimple(int n1, int n2) : num1(n1), num2(n2) {}
	void CopyToNum2() const
	{
		num2 = num1;
	}
};
int main() {
	cout << "러시아 면적: " << CountryArea::RUSSIA << "Km^2" << endl;
	cout << "캐나다 면적: " << CountryArea::CANADA << "Km^2" << endl;
	cout << "중국 면적: " << CountryArea::CHINA << "Km^2" << endl;
	cout << "한국 면적: " << CountryArea::SOUTH_KOREA << "Km^2" << endl;
	SoSimple sim1(100, 200);
	sim1.CopyToNum2();
	return 0;
}