#include <iostream>
using namespace std;
int main (){
	string nama;
	float n1, n2, n3, rr;

	cout << "Program menghitung nilai rata-rata" << endl;
	cout << "Nama siswa : " ;
	cin >> nama;
	cout << "Masukan nilai pertandingan I : ";
	cin >> n1;
	cout << "Masukan nilai pertandingan II : ";
	cin >> n2;
	cout << "Masukan nilai pertandingan III : ";
	cin >> n3;
	
	rr = (n1+n2+n3)/3;	
	cout << "siswa bernama " << nama << endl ;
	cout << "memperoleh nilai rata-rata " << rr << " dari hasil lomba yang diikutinya\n";
	
	if (rr >= 85){
		cout << "Mendapat hadiah Komputer core i5";
	} 
	else if (rr >=70){
		cout << "Mendapat hadiah Uang sebesar Rp.2.500.000";
	} 
	else {
		cout<< "Mendapat hadiah hiburan";
	}
		
	return 0;
}
