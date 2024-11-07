#include <iostream>
#include "siswa.h"
using namespace std;

int main () {
	Siswa sw1;
	sw1.namaSw = "Rendi Hendra S.";
	sw1.nis = 123;
	sw1.tampilSiswa();
	
	Siswa sw2;
	cout << sw2.namaSw << endl;
	cout << sw2.nis << endl;
	sw2.namaSw = "Ega";
	sw2.nis = 321;
	sw1.tampilSiswa();
	return 0;
}
