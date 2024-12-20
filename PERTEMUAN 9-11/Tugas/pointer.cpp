#include <iostream>
using namespace std;

void cekGanjilGenap(int *angka) {
    int sisa = *angka % 2;
    if (sisa == 0){
    	cout << *angka << " Adalah bilangan genap" << endl;
	}else {
		cout << *angka << " Adalah bilangan ganjil" << endl;
	}
}

int main() {
    int angka;

    cout << "Masukkan sebuah angka: ";
    cin >> angka;
    
    cekGanjilGenap(&angka);
    
    return 0;
}
