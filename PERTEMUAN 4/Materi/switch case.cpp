#include <iostream>
using namespace std;
int main ()
{
	char kode;
	//clrsrcr;
	cout << "masukan kode barang [A..C] = ";
	cin >> kode;
	
	switch (kode){
		case 'A':
		cout << "alat olahraga";
		break;
		case 'B':
		cout << "alat elektronik";
		break;
		case'C' :
		cout << "alat masak";
		break;
		default :
		cout << "anda salah memasukan kode";
		break;
		}
	getchar ();	
		
}
