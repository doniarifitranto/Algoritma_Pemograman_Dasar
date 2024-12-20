#include <iostream>
#include <stdlib.h>
using namespace std;

int main ()
{
	char kata[20];
	float angka, a;
	//clrscr();
	
	cout << "Masukan sembarang angka = ";
	cin >> kata;
	
	//atol -> mengubah string angka menjadi bil numerik long integer
	angka = atol(kata);
	a= angka+8;
	
	cout << "Hasil perubahan ditambah dengan 8 = "<< a;
	getchar();
}
