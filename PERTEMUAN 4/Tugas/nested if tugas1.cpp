#include <iostream>
using namespace std;

int main()
{
	float n1, n2, n3, rr;
	string nama;
	cout << "PROGRAM HITUNG NILAI RATA-RATA\n";
	cout << "Nama Siswa : ";
	cin >> nama;
	cout << "Nilai Pertandingan I\t: ";
	cin >> n1;
	cout << "Nilai Pertandingan II\t: ";
	cin >> n2;
	cout << "Nilai Pertandingan III\t: ";
	cin >> n3;
	
	rr = (n1 + n2 + n3) / 3;
	
	cout << "siswa bernama " << nama << endl ;
	cout << "memperoleh nilai rata-rata " << rr << " dari hasil lomba yang diikutinya\n";
	
	if ( rr >= 85)
	{
		cout << "Mendapatkan komputer core i5";
	} 
	
	else
	{
		if( rr >= 70)
		{
		cout << "Mendapatkan hadiah uang sebesar Rp. 2.500.000";
		}
		
		else
		{
		cout << "Mendapatkan hadiah hiburan";
		}
	}
		
	return 0;
}
