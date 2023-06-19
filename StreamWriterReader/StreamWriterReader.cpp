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
	
}