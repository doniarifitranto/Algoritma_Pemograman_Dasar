#include <iostream>
using namespace std;

int main ()
{
	int n1, n2, n3, rr;
	string nama;
	cout << "PROGRAM MENGHITUNG NILAI RATA-RATA\n";
	cout << "Nama Siswa : ";
	cin >> nama;
	
	cout << "Nilai Pertandingan I\t: ";
	cin >>n1;	
	cout << "Nilai Pertandingan II\t: ";
	cin >>n2;	
	cout << "Nilai Pertandingan III\t: ";
	cin >>n3;
	
	rr = ( n1 + n2 + n3 ) / 3 ;
	cout << "siswa yang bernama " << nama << endl;
	cout << "memperoleh nilai rata-rata "<< rr << " dari hasil perlombaan yang diikutinya"<<endl;
	
	switch ( rr )
	{
	
	
		case 1 ... 69 :
		cout << "Mendapatkan hadiah hiburan";
		break;
		
		case 70 ... 84 :
		cout << "Mendapatkan hadiah Uang sebesar Rp. 2.500.000";
		break;
		
		case 85 ... 100:
		cout << "Mendapatkan hadiah komputer Core i5";
		break;
	}
	
	return 0;
}
