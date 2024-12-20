#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	char kata[20];
	float angka, a;
	//clrscr();
	
	cout << "Masukan sembarang angka = ";
	cin >> kata;
	
	// atof -> mengubah string angka menjadi bilangan float
	angka = atof(kata);
	a= angka+5;
	
	cout << "Hasil perubahan ditambah dengan 5 = "<< a;
	getchar();
}
