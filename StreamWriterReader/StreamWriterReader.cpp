#include <iostream>	
#include <fstream>
#include <string>
using namespace std;

int main() {
	string baris;

	//Membuka file dalam mode menulis.
	ofstream outfile;
	//Menunjuk ke sebuah nama file.
	outfile.open("Contohfile.txt");
	cout << ">=Menulis file, \'q\' untuk keluar" << endl;

	//Unlimited loop untuk menulis
	while (true) {
		cout << "- ";
		//Mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//Loop berhenti jika memasukan karakter 'q'.
		if (baris == "q") break;
		//Menulis dan memasukan nilai dari 'Baris' ke dalam file.
		outfile << baris << endl;
	}
	//Selesai menulis dan menutup file
	outfile.close();

	//Membuka file hanya untuk dibaca
	ifstream infile;
	//Menunjuk ke sebuah file
	infile.open("Contohfile.txt");

	cout << endl << ">=Membuka dan membaca file " << endl;
	//Jika file ada maka
	if (infile.is_open()) {
		//Melakukan perulangan setiap baris
		while (getline(infile, baris))
		{
			//Dan tampilkan disini
			cout << baris << '\n';
		}
		//Tutup file jika selesai
		infile.close();
	}
	//Jika file tidak ditemukan maka akan menampilkan ini.
	else cout << "Unable to open file";
	
}