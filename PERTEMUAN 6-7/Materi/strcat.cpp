#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;
int main ()
{
	char a1[20];
	char a2[20];
	cout << "Masukan kata -1 = ";
	cin >> a1;
	cout << "Masukan kata -2 = ";
	cin >> a2;
	
	strcat(a1, a2); //menambahkan string sumber ke bagian akhir dari string tujuan 
	cout << "Hasil penggabungannya = " << a1;
	getchar();
}
