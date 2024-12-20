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
	
	//atoi -> mengubah string angka menjadi bil numerik integer
	angka = atoi(kata);
	a= angka+7;
	
	cout << "Hasil perubahan ditambah dengan 7 = "<< a;
	getchar();
}
