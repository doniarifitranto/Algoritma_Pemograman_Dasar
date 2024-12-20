#include <iostream>
#define phi 3.14
using namespace std;
 
int main (){
	
	float a, b;
	cout << "Diketahui : " << endl;
	cout << "Phi : " << phi << endl;
	cout << "Jari-Jari : " ;
	cin >> a;
	
	b = phi*a*a;
	
	cout << "Langkah pengerjaan" << endl;
	cout << "Luas lingkaran = phi x r x r ";
	cout << "= "<< phi << "x" << a << "x" << a << endl;
	cout << "Luas lingkaran = " << b;
	  
	
	return 0;
	
}
