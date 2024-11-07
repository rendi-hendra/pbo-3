#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
	private:
		string nama;
		int nim;
		string t_lahir;
		
	public:
		void input () {
			cout << "Masukan Data Mahasiswa" << endl;
			cout << "Masukan NIM: ";
			cin >> nim;
			
			fflush(stdin);
			cout << "Masukan Nama: ";
			getline(cin,nama);
			
			cout << "Masukan Tanggal Lahir: ";
			getline(cin,t_lahir);
			cout << endl;
		}
		
		void display() {
			cout << "NIM mahasiswa yang anda masukan adalah : " << nim << endl;
			cout << "Nama mahasiswa yang anda masukan adalah : " << nama << endl;
			cout << "Tanggal lahir mahasiswa yang anda masukan adalah : " << t_lahir << endl;
		}
};


int main () {
	Mahasiswa mhs1;
	mhs1.input();
	mhs1.display();
	
	return 0;
}
