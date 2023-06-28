#include <iostream>
using namespace std;
class SinivelCap { // Äà¹°
public:
	void Take() const { cout << "Äà¹°ÀÌ ½Ï ³³´Ï´Ù." << endl; }
};
class SneezeCap { // ÀçÃ¤±â
public:
	void Take() const { cout << "ÀçÃ¤±â°¡ ¸Ü½À´Ï´Ù" << endl; }
};
class SnuffleCap { // ÄÚ¸·Èû
public:
	void Take() const { cout << "ÄÚ°¡ »½ ¶Õ¸³´Ï´Ù." << endl; }
};
class CONTAC600 {
private:
	SinivelCap sin;
	SneezeCap sne;
	SnuffleCap snu;
public:
	void Take() const {
		sin.Take();
		sne.Take();
		snu.Take();
	}
};
class ColdPatient {
public: void TakeCONTAC600(const CONTAC600& cap) const 
{ cap.Take(); }
};
int main() {
	CONTAC600 c600;
	ColdPatient pat;		pat.TakeCONTAC600(c600);
	return 0;
}