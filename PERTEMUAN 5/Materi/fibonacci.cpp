#include <iostream>
using namespace std;
int main ()
{
	int fn, fn1, fn2, n;
	cout << "Masukan panjang deret = ";
	cin >> n;
	fn1 = 1;
	fn2 = 0;
	cout << fn2 << " ";
	cout << fn1 << " ";
	for (int i=1; i<n-1; i++){
		fn = fn1 + fn2;
		cout << fn << " ";
		fn2=fn1;
		fn1=fn;
	}
	cout << endl;
	
	return 0;
	
}
