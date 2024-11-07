#include<iostream>
using namespace std;

class Siswa {
	public:
		string namaSw;
		int nis;
		
	Siswa (string namaSw = "Tidak ada nama", int nis = 0) {
		Siswa::namaSw = namaSw;
		Siswa::nis = nis;
	}
	
	/*~Siswa () {
		cout << "Selesai membangun object" << endl;
	}*/
		
	void tampilSiswa () {
		cout << "Nama Siswa\t: " << namaSw << endl;
		cout << "NIS       \t: " << nis << endl;
	}
};
