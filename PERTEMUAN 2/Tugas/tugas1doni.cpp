#include <iostream>
using namespace std;

int main(){	
	int a, b, jumlah;
	
	cout << "Nomor 1 - penjumlahan " << endl;
	cout << "Masukan dua angka " << endl;
	cout << "A = " ;
	cin >> a;
	cout << "B = " ;
	cin >> b;
	jumlah = a+b;
	cout<< "A + B = " << jumlah << endl;
	cout << "Hasil dari A + B = " << jumlah <<endl;
	
	int d, e, f;
	
	cout << "Nomor 2 - pengurangan " << endl;
	cout << "Masukan dua angka " << endl;
	cout << "A = " ;
	cin >> d;
	cout << "B = " ;
	cin >> e;
	f = d-e;
	cout<< "A - B = " << f << endl;
	cout << "Hasil dari A - B = " << f << endl;
	
	float x, y, z;
	
	cout << "Nomor 3 - pembagian " << endl;
	cout << "Masukan dua angka " << endl;
	cout << "A = " ;
	cin >> x;
	cout << "B = " ;
	cin >> y;
	z = x/y;
	cout<< "A / B = " << z << endl;
	cout << "Hasil dari A / B = " << z;

	
	return 0;

}
