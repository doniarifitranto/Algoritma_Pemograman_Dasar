#include<iostream>
using namespace std ;
#define phi 3.14

int main (){
	float a, b, c;
	cout << "Diketahui : " << endl;
	cout << "Phi : " << phi << endl;
	cout << "Jari-Jari : " ;
	cin >> a;
	cout << "Tinggi Tabung : " ;
	cin >> c;
	
	b = phi*a*a*c;
	
	cout << "Langkah pengerjaan volume tabung" << endl;
	cout << "Volume Tabung = phi x r x r x tinggi tabung" << endl;
	cout << "Volume Tabung = "<< phi << "x" << a << "x" << a << "x" << c << endl;
	cout << "Volume Tabung = " << b;
	
	return 0;
	
}
