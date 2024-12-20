#include <iostream>
using namespace std;
int main ()
{
	cout << "Program hitung deret bilangan genap." << endl;
	int i, n=0;
	
	for (i=2; i<=20;i+=2){
		cout << i;
		n +=i;
		if(i<20){
			cout << " + ";
		}
	}
	cout << " = " << n << endl;
	return 0;
}
