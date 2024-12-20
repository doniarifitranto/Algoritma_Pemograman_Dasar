#include <iostream>
using namespace std;
int main ()
{
	int hasil [3][3]; // bentuk umum array -- 3 = baris dan 3 = kolom
	
	//Looping untuk menginput nilai hasil penjualan
	for (int a=0; a<3; a++){ //untuk variabel a dimulai dari 0 akan increment sampai < 3 atau sampai 2 untuk indeks a
		for (int b=0; b<3; b++){ // untuk variabel b dimulai dari 0 akan increment sampai < 3 atau sampai 2 untuk indeks b
			cout << "Data "<< a << " - "<< b << " ="; // output data dengan mengeluarkan nilai a dan b
			cout << "\nJumlah Penjumlahan = "; //endl output "jumlah penjumlahan"
			cin >> hasil [a][b]; // menginput nilai array untuk pertama dari indeks [0][0] sampai [2]
		}
	}
	
	cout << "\nHASIL PENJUALAN BARANG";
	cout << "\n================================";
	cout << "\n2001	|2002	|2003	|";
	cout << "\n================================";
	cout << endl;
	
	//Looping untuk mengeluarkan nilai indeks array
	for (int a=0; a<3; a++){ // baris pada array akan mulai dari 0 sampai 2 menghasilkan 3 baris
	for (int b=0; b<3; b++){ // baris pada array akan mulai dari 0 sampai 2 menghasilkan 3 baris
			cout << hasil [a][b] << "  |\t"; // akan mengeluarkan output nilai sesuai mengikuti increment
		}
		cout << endl; // output nilai jika inner loop sudah selesai
	}
	
	
	return 0;
}
