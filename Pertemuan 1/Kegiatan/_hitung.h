#include <iostream>
using namespace std;
class Hitung {
	friend ostream& operator<<(ostream&, const Hitung&);
	friend istream& operator>>(istream&, Hitung&);
	public:
		int a,b,c;
		int jumlah;
		Hitung();
		void hitung_jumlahnya(){
			jumlah = (a + b + c);
		}
};
