#include <iostream>
using namespace std;
int main ()
{
	float pendapatan, jasa=0, komisi=0, total=0;
	//clrscr();
	cout << "pendapatan hari ini Rp. = ";
	cin >> pendapatan;
	if (pendapatan >= 0 && pendapatan <= 200000){
		jasa = 10000;
		komisi = 0.1*pendapatan;
	
	}else
		if (pendapatan <= 500000){
			jasa = 20000;
			komisi = 0.15*pendapatan;
		}
		else{
		jasa = 30000;
		komisi =0.2*pendapatan;
		}
	// menghitung total
	total = komisi + jasa;
	cout << "uang jasa Rp. = " << jasa << endl;
	cout << "uang komisi Rp. = " << komisi << endl;
	cout << "Hasil total uang = " << total << endl;
	getchar ();
	
}
