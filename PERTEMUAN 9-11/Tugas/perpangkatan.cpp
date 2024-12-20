#include <iostream>
using namespace std;

int pangkat (int x, int y){
	if (y==0){
		return 1;
	} else {
		return x * pangkat (x, y-1);
	}
}

int main (){
	int x, y;
	cout << "\t======PROGRAM HITUNG PERPANGKATAN======" << endl;
	cout << "Masukan bilangan dasar (x): ";
	cin >> x;
	
	cout << "Masukan pangkat (y): ";
	cin >> y;
	
	cout << x << " Pangkat " << y << " = " << pangkat (x,y) << endl;
	
	getchar();
}
