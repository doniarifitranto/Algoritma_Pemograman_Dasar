#include <iostream>
using namespace std;

int main (){
	
	int a = 5;
	
	//	post-decrement (a--) variabel 'a' digunakan dulu, baru dikurangi 1
	int b = a--; //b = 5, a = 4
	
	cout << "Post-increment:" << endl;
	cout << "Nilai a setelah a--: " << a << endl; //a sekarang 4
	cout << "Nilai b: " << b << endl; //b mengambil nilai sebelum a dikurangi, jadi b=5
	
	int c= 5;
	
	//  post-decrement (--c): variabel 'c' dikurangi dulu, baru digunakan
	int d = --c; //c = 4, d = 4
	
	cout << "\nPre-increment:" << endl;
	cout << "Nilai c setelah --c: " << c << endl; //c sekarang 6
	cout << "Nilai d: " << d << endl; // d mengambil nilai setelah c dikurangi, jadi d = 4
	
	return 0; 
	
}
