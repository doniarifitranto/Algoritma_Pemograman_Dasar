#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
	char huruf[20];
	char pindah[20];
	//clrcsr();
	
	cout << "Masukan sembarang kata = ";
	cin >> huruf;
	
	//memanggil dan disebut ulang
	// huruf menjadi pindah
	
	//*proses*//
	strcpy(pindah, huruf);
	cout << "Pemindahannya = " << pindah;
	
	getchar();
}
