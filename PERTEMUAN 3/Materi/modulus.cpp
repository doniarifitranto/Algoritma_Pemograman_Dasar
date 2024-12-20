#include <iostream>
using namespace std;

int main ()
{
	
	int a, b, c = 0, d =0;
	//clrscr();
	system("CLS");
	
	cout << "Masukan Nilai A : " ; cin >> a;
	cout << "Masukan Nilai B : " ; cin >> b;
	
	c = a%b;
	d = a*b;
	
	cout << "Hasil dari c = a%b " << c << endl;
	cout << "Hasil dari d = a*b " << d << endl;
	
	getchar();
	
	
}
