#include <iostream>
#include <string>
using namespace std;

int main (){
	
	string x, y, z;
	
	cout << "Masukan NPM anda : ";
	cin >> x;
	cin.bad();
	cout << "Masukan nama anda : ";
	cin >> y;
	cout << "Masukan alamat anda : ";
	cin >> z;
	
	cout << "NPM anda adalah : " << x << endl;
	cout << "Nama anda adalah :" << y << endl;
	cout << "Alamat anda adalah : " << z << endl;	
	
	return 0;
}
